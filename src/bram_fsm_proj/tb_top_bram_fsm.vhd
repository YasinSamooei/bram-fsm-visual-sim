library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity tb_bram_fsm_corrected is
end entity;

architecture sim of tb_bram_fsm_corrected is
  constant ADDR_WIDTH : integer := 8;
  constant DATA_WIDTH : integer := 8;
  constant CLK_PERIOD : time := 10 ns;
  
  signal clk       : std_logic := '0';
  signal rst       : std_logic := '0';
  signal cmd       : std_logic_vector(1 downto 0) := "00";
  signal cmd_valid : std_logic := '0';
  signal addr_in   : std_logic_vector(ADDR_WIDTH-1 downto 0) := (others => '0');
  signal data_in   : std_logic_vector(DATA_WIDTH-1 downto 0) := (others => '0');
  signal data_out  : std_logic_vector(DATA_WIDTH-1 downto 0);
  signal data_valid: std_logic;
  signal busy      : std_logic;
  
  signal sim_done  : boolean := false;

begin
  uut: entity work.top_bram_fsm
    generic map (
      ADDR_WIDTH => ADDR_WIDTH, 
      DATA_WIDTH => DATA_WIDTH
    )
    port map (
      clk        => clk,
      rst        => rst,
      cmd        => cmd,
      cmd_valid  => cmd_valid,
      addr_in    => addr_in,
      data_in    => data_in,
      data_out   => data_out,
      data_valid => data_valid,
      busy       => busy
    );

  -- Clock generation
  clk_proc: process
  begin
    while not sim_done loop
      clk <= '0';
      wait for CLK_PERIOD/2;
      clk <= '1';
      wait for CLK_PERIOD/2;
    end loop;
    wait;
  end process;

  -- Detailed monitor
  monitor_proc: process(clk)
    variable cycle : integer := 0;
  begin
    if rising_edge(clk) then
      cycle := cycle + 1;
      report "Cycle " & integer'image(cycle) & 
             ": Cmd=" & integer'image(to_integer(unsigned(cmd))) &
             " CmdV=" & std_logic'image(cmd_valid) &
             " Addr=0x" & integer'image(to_integer(unsigned(addr_in))) &
             " Din=0x" & integer'image(to_integer(unsigned(data_in))) &
             " Busy=" & std_logic'image(busy) &
             " DValid=" & std_logic'image(data_valid) &
             " Dout=0x" & integer'image(to_integer(unsigned(data_out)));
    end if;
  end process;

  -- Corrected stimulus
  stim_proc: process
    variable test_passed : boolean := true;
  begin
    report "=== Starting Corrected Test ===";
    
    -- Reset
    rst <= '1';
    wait for 25 ns;
    wait until rising_edge(clk);
    rst <= '0';
    wait for 20 ns;
    
    ------------------------------------------------------------
    -- Test 1: Write 0xAA to address 0x01
    ------------------------------------------------------------
    report "Test 1: Write 0xAA to address 0x01";
    wait until rising_edge(clk);
    addr_in   <= x"01";
    data_in   <= x"AA";
    cmd       <= "10";  -- Write command
    cmd_valid <= '1';
    wait until rising_edge(clk);
    cmd_valid <= '0';
    cmd       <= "00";
    
    -- Wait for write to complete (2 cycles based on log)
    wait until busy = '0';
    wait for 20 ns;
    
    ------------------------------------------------------------
    -- Test 2: Read from address 0x01 (should be AA)
    ------------------------------------------------------------
    report "Test 2: Read from address 0x01 (expect 0xAA)";
    wait until rising_edge(clk);
    addr_in   <= x"01";
    data_in   <= x"00";  -- Don't care for read
    cmd       <= "01";   -- Read command
    cmd_valid <= '1';
    wait until rising_edge(clk);
    cmd_valid <= '0';
    cmd       <= "00";
    
    -- Wait for data_valid with proper timing (3 cycles based on log)
    for i in 1 to 5 loop
      wait until rising_edge(clk);
      exit when data_valid = '1';
    end loop;
    
    -- Check result
    if data_valid = '1' then
      if data_out = x"AA" then
        report "SUCCESS: Read 0xAA from address 0x01";
      else
        report "FAIL: Read 0x" & integer'image(to_integer(unsigned(data_out))) & 
               " from address 0x01 (expected 0xAA)" severity error;
        test_passed := false;
      end if;
    else
      report "FAIL: No data_valid received for read from address 0x01" severity error;
      test_passed := false;
    end if;
    
    -- Wait for operation to fully complete
    wait until busy = '0';
    wait for 20 ns;
    
    ------------------------------------------------------------
    -- Test 3: Write 0x55 to address 0x02
    ------------------------------------------------------------
    report "Test 3: Write 0x55 to address 0x02";
    wait until rising_edge(clk);
    addr_in   <= x"02";
    data_in   <= x"55";
    cmd       <= "10";
    cmd_valid <= '1';
    wait until rising_edge(clk);
    cmd_valid <= '0';
    cmd       <= "00";
    
    wait until busy = '0';
    wait for 20 ns;
    
    ------------------------------------------------------------
    -- Test 4: Read from address 0x02 (should be 55)
    ------------------------------------------------------------
    report "Test 4: Read from address 0x02 (expect 0x55)";
    wait until rising_edge(clk);
    addr_in   <= x"02";
    data_in   <= x"00";
    cmd       <= "01";
    cmd_valid <= '1';
    wait until rising_edge(clk);
    cmd_valid <= '0';
    cmd       <= "00";
    
    -- Wait for data_valid
    for i in 1 to 5 loop
      wait until rising_edge(clk);
      exit when data_valid = '1';
    end loop;
    
    -- Check result
    if data_valid = '1' then
      if data_out = x"55" then
        report "SUCCESS: Read 0x55 from address 0x02";
      else
        report "FAIL: Read 0x" & integer'image(to_integer(unsigned(data_out))) & 
               " from address 0x02 (expected 0x55)" severity error;
        test_passed := false;
      end if;
    else
      report "FAIL: No data_valid received for read from address 0x02" severity error;
      test_passed := false;
    end if;
    
    ------------------------------------------------------------
    -- Additional test: Write and read from address 0x03
    ------------------------------------------------------------
    report "Test 5: Write 0x33 to address 0x03 and read back";
    wait until rising_edge(clk);
    addr_in   <= x"03";
    data_in   <= x"33";
    cmd       <= "10";
    cmd_valid <= '1';
    wait until rising_edge(clk);
    cmd_valid <= '0';
    cmd       <= "00";
    
    wait until busy = '0';
    wait for 20 ns;
    
    -- Read back
    wait until rising_edge(clk);
    addr_in   <= x"03";
    data_in   <= x"00";
    cmd       <= "01";
    cmd_valid <= '1';
    wait until rising_edge(clk);
    cmd_valid <= '0';
    cmd       <= "00";
    
    for i in 1 to 5 loop
      wait until rising_edge(clk);
      exit when data_valid = '1';
    end loop;
    
    if data_valid = '1' then
      if data_out = x"33" then
        report "SUCCESS: Read back 0x33 from address 0x03";
      else
        report "FAIL: Read back 0x" & integer'image(to_integer(unsigned(data_out))) & 
               " from address 0x03 (expected 0x33)" severity error;
        test_passed := false;
      end if;
    else
      report "FAIL: No data_valid received for read from address 0x03" severity error;
      test_passed := false;
    end if;
    
    ------------------------------------------------------------
    -- Final summary
    ------------------------------------------------------------
    report "========================================";
    if test_passed then
      report "ALL TESTS PASSED!";
    else
      report "SOME TESTS FAILED!";
    end if;
    report "========================================";
    
    wait for 100 ns;
    sim_done <= true;
    wait;
  end process;

end architecture;