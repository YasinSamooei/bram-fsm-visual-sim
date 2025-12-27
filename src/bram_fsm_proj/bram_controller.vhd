library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity bram_controller is
  generic(
    ADDR_WIDTH : integer := 8;
    DATA_WIDTH : integer := 8
  );
  port(
    clk       : in  std_logic;
    rst       : in  std_logic;
    cmd       : in  std_logic_vector(1 downto 0);
    cmd_valid : in  std_logic;
    addr_in   : in  std_logic_vector(ADDR_WIDTH-1 downto 0);
    data_in   : in  std_logic_vector(DATA_WIDTH-1 downto 0);
    bram_dout : in  std_logic_vector(DATA_WIDTH-1 downto 0);
    bram_we   : out std_logic;
    bram_addr : out std_logic_vector(ADDR_WIDTH-1 downto 0);
    bram_din  : out std_logic_vector(DATA_WIDTH-1 downto 0);
    data_out  : out std_logic_vector(DATA_WIDTH-1 downto 0);
    data_valid: out std_logic;
    busy      : out std_logic
  );
end entity;

architecture rtl of bram_controller is
  type state_t is (IDLE, READ_WAIT1, READ_WAIT2, READ_DONE, WRITE_DO, WRITE_DONE);
  signal state      : state_t := IDLE;
  signal addr_reg   : std_logic_vector(ADDR_WIDTH-1 downto 0) := (others => '0');
  signal data_reg   : std_logic_vector(DATA_WIDTH-1 downto 0) := (others => '0');
  signal data_out_reg : std_logic_vector(DATA_WIDTH-1 downto 0) := (others => '0');
  signal bram_we_reg  : std_logic := '0';
  signal bram_addr_reg : std_logic_vector(ADDR_WIDTH-1 downto 0) := (others => '0');
  signal bram_din_reg  : std_logic_vector(DATA_WIDTH-1 downto 0) := (others => '0');
  
begin
  -- Registered outputs
  bram_we   <= bram_we_reg;
  bram_addr <= bram_addr_reg;
  bram_din  <= bram_din_reg;
  data_out  <= data_out_reg;

  process(clk)
  begin
    if rising_edge(clk) then
      if rst = '1' then
        -- Reset all registers
        state      <= IDLE;
        addr_reg   <= (others => '0');
        data_reg   <= (others => '0');
        data_out_reg <= (others => '0');
        bram_we_reg  <= '0';
        bram_addr_reg <= (others => '0');
        bram_din_reg  <= (others => '0');
        data_valid  <= '0';
        busy        <= '0';
      else
        -- Default values
        bram_we_reg <= '0';
        data_valid  <= '0';
        
        case state is
          when IDLE =>
            busy <= '0';
            
            if cmd_valid = '1' then
              busy <= '1';
              addr_reg <= addr_in;
              data_reg <= data_in;
              
              case cmd is
                when "01" =>  -- Read command
                  -- Apply address to BRAM immediately
                  bram_addr_reg <= addr_in;
                  state <= READ_WAIT1;
                  
                when "10" =>  -- Write command
                  -- Apply address and data to BRAM immediately
                  bram_addr_reg <= addr_in;
                  bram_din_reg  <= data_in;
                  bram_we_reg   <= '1';  -- Activate write enable
                  state <= WRITE_DO;
                  
                when others =>  -- Invalid command
                  state <= IDLE;
                  busy <= '0';
              end case;
            end if;
            
          when READ_WAIT1 =>
            -- First wait state for BRAM read latency
            bram_addr_reg <= addr_reg;
            state <= READ_WAIT2;
            
          when READ_WAIT2 =>
            -- Second wait state (BRAM has 1 cycle latency + we need one more)
            bram_addr_reg <= addr_reg;
            state <= READ_DONE;
            
          when READ_DONE =>
            -- Capture data from BRAM
            data_out_reg <= bram_dout;
            data_valid <= '1';
            state <= IDLE;
            
          when WRITE_DO =>
            -- Write was performed, keep we active for one cycle
            bram_addr_reg <= addr_reg;
            bram_din_reg  <= data_reg;
            bram_we_reg   <= '1';
            state <= WRITE_DONE;
            
          when WRITE_DONE =>
            -- Finish write operation
            bram_we_reg <= '0';
            state <= IDLE;
            
        end case;
      end if;
    end if;
  end process;

end architecture;