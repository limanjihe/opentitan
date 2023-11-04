// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// tl_mbx package generated by `tlgen.py` tool

package tl_mbx_pkg;

  localparam logic [31:0] ADDR_SPACE_MBX0__SOC      = 32'h 01465000;
  localparam logic [31:0] ADDR_SPACE_MBX1__SOC      = 32'h 01465100;
  localparam logic [31:0] ADDR_SPACE_MBX2__SOC      = 32'h 01465200;
  localparam logic [31:0] ADDR_SPACE_MBX3__SOC      = 32'h 01465300;
  localparam logic [31:0] ADDR_SPACE_MBX4__SOC      = 32'h 00005400;
  localparam logic [31:0] ADDR_SPACE_MBX5__SOC      = 32'h 01465400;
  localparam logic [31:0] ADDR_SPACE_MBX6__SOC      = 32'h 01465600;
  localparam logic [31:0] ADDR_SPACE_MBX_PCIE0__SOC = 32'h 01460100;
  localparam logic [31:0] ADDR_SPACE_MBX_PCIE1__SOC = 32'h 01460200;

  localparam logic [31:0] ADDR_MASK_MBX0__SOC      = 32'h 0000001f;
  localparam logic [31:0] ADDR_MASK_MBX1__SOC      = 32'h 0000001f;
  localparam logic [31:0] ADDR_MASK_MBX2__SOC      = 32'h 0000001f;
  localparam logic [31:0] ADDR_MASK_MBX3__SOC      = 32'h 0000001f;
  localparam logic [31:0] ADDR_MASK_MBX4__SOC      = 32'h 0000001f;
  localparam logic [31:0] ADDR_MASK_MBX5__SOC      = 32'h 0000001f;
  localparam logic [31:0] ADDR_MASK_MBX6__SOC      = 32'h 0000001f;
  localparam logic [31:0] ADDR_MASK_MBX_PCIE0__SOC = 32'h 0000001f;
  localparam logic [31:0] ADDR_MASK_MBX_PCIE1__SOC = 32'h 0000001f;

  localparam int N_HOST   = 1;
  localparam int N_DEVICE = 9;

  typedef enum int {
    TlMbx0Soc = 0,
    TlMbx1Soc = 1,
    TlMbx2Soc = 2,
    TlMbx3Soc = 3,
    TlMbx4Soc = 4,
    TlMbx5Soc = 5,
    TlMbx6Soc = 6,
    TlMbxPcie0Soc = 7,
    TlMbxPcie1Soc = 8
  } tl_device_e;

  typedef enum int {
    TlMbx = 0
  } tl_host_e;

endpackage