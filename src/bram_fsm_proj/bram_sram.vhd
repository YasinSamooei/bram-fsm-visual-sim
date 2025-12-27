library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity bram_sram is
  generic(
    ADDR_WIDTH : integer := 8;
    DATA_WIDTH : integer := 8
  );
  port(
    clk  : in  std_logic;
    rst  : in  std_logic;
    we   : in  std_logic; -- '1' => write
    addr : in  std_logic_vector(ADDR_WIDTH-1 downto 0);
    din  : in  std_logic_vector(DATA_WIDTH-1 downto 0);
    dout : out std_logic_vector(DATA_WIDTH-1 downto 0)
  );
end entity;

architecture rtl of bram_sram is
  type ram_t is array (0 to (2**ADDR_WIDTH)-1) of std_logic_vector(DATA_WIDTH-1 downto 0);
  signal mem : ram_t := (others => (others => '0'));
  signal addr_reg : std_logic_vector(ADDR_WIDTH-1 downto 0) := (others => '0');
  signal dout_reg : std_logic_vector(DATA_WIDTH-1 downto 0) := (others => '0');
  
begin
  process(clk)
  begin
    if rising_edge(clk) then
      if rst = '1' then
        -- Initialize all memory to zero
        for i in 0 to (2**ADDR_WIDTH)-1 loop
          mem(i) <= (others => '0');
        end loop;
        addr_reg <= (others => '0');
        dout_reg <= (others => '0');
      else
        -- Register address for read (1 cycle latency)
        addr_reg <= addr;
        
        -- Write operation
        if we = '1' then
          mem(to_integer(unsigned(addr))) <= din;
        end if;
        
        -- Read operation (with 1 cycle latency)
        dout_reg <= mem(to_integer(unsigned(addr_reg)));
      end if;
    end if;
  end process;
  
  dout <= dout_reg;

end architecture;