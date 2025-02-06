-------------------------------------------------------------------------------
-- Copyright (c) 2023 Xilinx, Inc.
-- All Rights Reserved
-------------------------------------------------------------------------------
--   ____  ____
--  /   /\/   /
-- /___/  \  /    Vendor     : Xilinx
-- \   \   \/     Version    : 14.7
--  \   \         Application: XILINX CORE Generator
--  /   /         Filename   : vio1.vhd
-- /___/   /\     Timestamp  : Tue Jan 24 09:56:42 Iran Standard Time 2023
-- \   \  /  \
--  \___\/\___\
--
-- Design Name: VHDL Synthesis Wrapper
-------------------------------------------------------------------------------
-- This wrapper is used to integrate with Project Navigator and PlanAhead

LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
ENTITY vio1 IS
  port (
    CONTROL: inout std_logic_vector(35 downto 0);
    ASYNC_OUT: out std_logic_vector(15 downto 0));
END vio1;

ARCHITECTURE vio1_a OF vio1 IS
BEGIN

END vio1_a;
