-- file: top_bram_fsm.vhd
library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity top_bram_fsm is
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
    data_out  : out std_logic_vector(DATA_WIDTH-1 downto 0);
    data_valid: out std_logic;
    busy      : out std_logic
  );
end entity;

architecture structural of top_bram_fsm is
  signal bram_we_s   : std_logic;
  signal bram_addr_s : std_logic_vector(ADDR_WIDTH-1 downto 0);
  signal bram_din_s  : std_logic_vector(DATA_WIDTH-1 downto 0);
  signal bram_dout_s : std_logic_vector(DATA_WIDTH-1 downto 0);
  
  -- Internal signals that can be probed in simulation
  signal controller_state_debug : std_logic_vector(2 downto 0);
  signal bram_we_debug   : std_logic;
  signal bram_addr_debug : std_logic_vector(ADDR_WIDTH-1 downto 0);
  signal bram_din_debug  : std_logic_vector(DATA_WIDTH-1 downto 0);
  signal bram_dout_debug : std_logic_vector(DATA_WIDTH-1 downto 0);
  
  -- Component declarations
  component bram_controller
    generic(
      ADDR_WIDTH : integer;
      DATA_WIDTH : integer
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
  end component;

  component bram_sram
    generic(
      ADDR_WIDTH : integer;
      DATA_WIDTH : integer
    );
    port(
      clk  : in  std_logic;
      rst  : in  std_logic;
      we   : in  std_logic;
      addr : in  std_logic_vector(ADDR_WIDTH-1 downto 0);
      din  : in  std_logic_vector(DATA_WIDTH-1 downto 0);
      dout : out std_logic_vector(DATA_WIDTH-1 downto 0)
    );
  end component;

begin
  -- Connect debug signals
  bram_we_debug   <= bram_we_s;
  bram_addr_debug <= bram_addr_s;
  bram_din_debug  <= bram_din_s;
  bram_dout_debug <= bram_dout_s;

  -- Instantiate controller
  u_controller: bram_controller
    generic map (
      ADDR_WIDTH => ADDR_WIDTH,
      DATA_WIDTH => DATA_WIDTH
    )
    port map (
      clk       => clk,
      rst       => rst,
      cmd       => cmd,
      cmd_valid => cmd_valid,
      addr_in   => addr_in,
      data_in   => data_in,
      bram_dout => bram_dout_s,
      bram_we   => bram_we_s,
      bram_addr => bram_addr_s,
      bram_din  => bram_din_s,
      data_out  => data_out,
      data_valid => data_valid,
      busy      => busy
    );

  -- Instantiate BRAM
  u_bram: bram_sram
    generic map (
      ADDR_WIDTH => ADDR_WIDTH,
      DATA_WIDTH => DATA_WIDTH
    )
    port map (
      clk  => clk,
      rst  => rst,
      we   => bram_we_s,
      addr => bram_addr_s,
      din  => bram_din_s,
      dout => bram_dout_s
    );

end architecture;