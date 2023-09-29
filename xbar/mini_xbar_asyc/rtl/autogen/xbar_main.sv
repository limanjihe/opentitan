// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// xbar_main module generated by `tlgen.py` tool
// all reset signals should be generated from one reset signal to not make any deadlock
//
// Interconnect
// rv_core_ibex.corei
//   -> s1n_9
//     -> sm1_10
//       -> rv_dm.mem
//     -> sm1_12
//       -> asf_11
//         -> peri
// rv_core_ibex.cored
//   -> s1n_13
//     -> sm1_10
//       -> rv_dm.mem
//     -> sm1_14
//       -> rv_dm.regs
//     -> sm1_15
//       -> rv_plic
//     -> sm1_16
//       -> rv_core_ibex.cfg
//     -> sm1_17
//       -> rv_timer
//     -> sm1_12
//       -> asf_11
//         -> peri
// rv_dm.sba
//   -> s1n_18
//     -> sm1_10
//       -> rv_dm.mem
//     -> sm1_14
//       -> rv_dm.regs
//     -> sm1_15
//       -> rv_plic
//     -> sm1_16
//       -> rv_core_ibex.cfg
//     -> sm1_17
//       -> rv_timer
//     -> sm1_12
//       -> asf_11
//         -> peri

module xbar_main (
  input clk_main_i,
  input clk_ahb_i,
  input rst_main_ni,
  input rst_ahb_ni,

  // Host interfaces
  input  tlul_pkg::tl_h2d_t tl_rv_core_ibex__corei_i,
  output tlul_pkg::tl_d2h_t tl_rv_core_ibex__corei_o,
  input  tlul_pkg::tl_h2d_t tl_rv_core_ibex__cored_i,
  output tlul_pkg::tl_d2h_t tl_rv_core_ibex__cored_o,
  input  tlul_pkg::tl_h2d_t tl_rv_dm__sba_i,
  output tlul_pkg::tl_d2h_t tl_rv_dm__sba_o,

  // Device interfaces
  output tlul_pkg::tl_h2d_t tl_rv_dm__regs_o,
  input  tlul_pkg::tl_d2h_t tl_rv_dm__regs_i,
  output tlul_pkg::tl_h2d_t tl_rv_dm__mem_o,
  input  tlul_pkg::tl_d2h_t tl_rv_dm__mem_i,
  output tlul_pkg::tl_h2d_t tl_rv_plic_o,
  input  tlul_pkg::tl_d2h_t tl_rv_plic_i,
  output tlul_pkg::tl_h2d_t tl_rv_core_ibex__cfg_o,
  input  tlul_pkg::tl_d2h_t tl_rv_core_ibex__cfg_i,
  output tlul_pkg::tl_h2d_t tl_rv_timer_o,
  input  tlul_pkg::tl_d2h_t tl_rv_timer_i,
  output tlul_pkg::tl_h2d_t tl_peri_o,
  input  tlul_pkg::tl_d2h_t tl_peri_i,

  input prim_mubi_pkg::mubi4_t scanmode_i
);

  import tlul_pkg::*;
  import tl_main_pkg::*;

  // scanmode_i is currently not used, but provisioned for future use
  // this assignment prevents lint warnings
  logic unused_scanmode;
  assign unused_scanmode = ^scanmode_i;

  tl_h2d_t tl_s1n_9_us_h2d ;
  tl_d2h_t tl_s1n_9_us_d2h ;


  tl_h2d_t tl_s1n_9_ds_h2d [2];
  tl_d2h_t tl_s1n_9_ds_d2h [2];

  // Create steering signal
  logic [1:0] dev_sel_s1n_9;


  tl_h2d_t tl_sm1_10_us_h2d [3];
  tl_d2h_t tl_sm1_10_us_d2h [3];

  tl_h2d_t tl_sm1_10_ds_h2d ;
  tl_d2h_t tl_sm1_10_ds_d2h ;

  tl_h2d_t tl_asf_11_us_h2d ;
  tl_d2h_t tl_asf_11_us_d2h ;
  tl_h2d_t tl_asf_11_ds_h2d ;
  tl_d2h_t tl_asf_11_ds_d2h ;


  tl_h2d_t tl_sm1_12_us_h2d [3];
  tl_d2h_t tl_sm1_12_us_d2h [3];

  tl_h2d_t tl_sm1_12_ds_h2d ;
  tl_d2h_t tl_sm1_12_ds_d2h ;

  tl_h2d_t tl_s1n_13_us_h2d ;
  tl_d2h_t tl_s1n_13_us_d2h ;


  tl_h2d_t tl_s1n_13_ds_h2d [6];
  tl_d2h_t tl_s1n_13_ds_d2h [6];

  // Create steering signal
  logic [2:0] dev_sel_s1n_13;


  tl_h2d_t tl_sm1_14_us_h2d [2];
  tl_d2h_t tl_sm1_14_us_d2h [2];

  tl_h2d_t tl_sm1_14_ds_h2d ;
  tl_d2h_t tl_sm1_14_ds_d2h ;


  tl_h2d_t tl_sm1_15_us_h2d [2];
  tl_d2h_t tl_sm1_15_us_d2h [2];

  tl_h2d_t tl_sm1_15_ds_h2d ;
  tl_d2h_t tl_sm1_15_ds_d2h ;


  tl_h2d_t tl_sm1_16_us_h2d [2];
  tl_d2h_t tl_sm1_16_us_d2h [2];

  tl_h2d_t tl_sm1_16_ds_h2d ;
  tl_d2h_t tl_sm1_16_ds_d2h ;


  tl_h2d_t tl_sm1_17_us_h2d [2];
  tl_d2h_t tl_sm1_17_us_d2h [2];

  tl_h2d_t tl_sm1_17_ds_h2d ;
  tl_d2h_t tl_sm1_17_ds_d2h ;

  tl_h2d_t tl_s1n_18_us_h2d ;
  tl_d2h_t tl_s1n_18_us_d2h ;


  tl_h2d_t tl_s1n_18_ds_h2d [6];
  tl_d2h_t tl_s1n_18_ds_d2h [6];

  // Create steering signal
  logic [2:0] dev_sel_s1n_18;



  assign tl_sm1_10_us_h2d[0] = tl_s1n_9_ds_h2d[0];
  assign tl_s1n_9_ds_d2h[0] = tl_sm1_10_us_d2h[0];

  assign tl_sm1_12_us_h2d[0] = tl_s1n_9_ds_h2d[1];
  assign tl_s1n_9_ds_d2h[1] = tl_sm1_12_us_d2h[0];

  assign tl_sm1_10_us_h2d[1] = tl_s1n_13_ds_h2d[0];
  assign tl_s1n_13_ds_d2h[0] = tl_sm1_10_us_d2h[1];

  assign tl_sm1_14_us_h2d[0] = tl_s1n_13_ds_h2d[1];
  assign tl_s1n_13_ds_d2h[1] = tl_sm1_14_us_d2h[0];

  assign tl_sm1_15_us_h2d[0] = tl_s1n_13_ds_h2d[2];
  assign tl_s1n_13_ds_d2h[2] = tl_sm1_15_us_d2h[0];

  assign tl_sm1_16_us_h2d[0] = tl_s1n_13_ds_h2d[3];
  assign tl_s1n_13_ds_d2h[3] = tl_sm1_16_us_d2h[0];

  assign tl_sm1_17_us_h2d[0] = tl_s1n_13_ds_h2d[4];
  assign tl_s1n_13_ds_d2h[4] = tl_sm1_17_us_d2h[0];

  assign tl_sm1_12_us_h2d[1] = tl_s1n_13_ds_h2d[5];
  assign tl_s1n_13_ds_d2h[5] = tl_sm1_12_us_d2h[1];

  assign tl_sm1_10_us_h2d[2] = tl_s1n_18_ds_h2d[0];
  assign tl_s1n_18_ds_d2h[0] = tl_sm1_10_us_d2h[2];

  assign tl_sm1_14_us_h2d[1] = tl_s1n_18_ds_h2d[1];
  assign tl_s1n_18_ds_d2h[1] = tl_sm1_14_us_d2h[1];

  assign tl_sm1_15_us_h2d[1] = tl_s1n_18_ds_h2d[2];
  assign tl_s1n_18_ds_d2h[2] = tl_sm1_15_us_d2h[1];

  assign tl_sm1_16_us_h2d[1] = tl_s1n_18_ds_h2d[3];
  assign tl_s1n_18_ds_d2h[3] = tl_sm1_16_us_d2h[1];

  assign tl_sm1_17_us_h2d[1] = tl_s1n_18_ds_h2d[4];
  assign tl_s1n_18_ds_d2h[4] = tl_sm1_17_us_d2h[1];

  assign tl_sm1_12_us_h2d[2] = tl_s1n_18_ds_h2d[5];
  assign tl_s1n_18_ds_d2h[5] = tl_sm1_12_us_d2h[2];

  assign tl_s1n_9_us_h2d = tl_rv_core_ibex__corei_i;
  assign tl_rv_core_ibex__corei_o = tl_s1n_9_us_d2h;

  assign tl_rv_dm__mem_o = tl_sm1_10_ds_h2d;
  assign tl_sm1_10_ds_d2h = tl_rv_dm__mem_i;

  assign tl_peri_o = tl_asf_11_ds_h2d;
  assign tl_asf_11_ds_d2h = tl_peri_i;

  assign tl_asf_11_us_h2d = tl_sm1_12_ds_h2d;
  assign tl_sm1_12_ds_d2h = tl_asf_11_us_d2h;

  assign tl_s1n_13_us_h2d = tl_rv_core_ibex__cored_i;
  assign tl_rv_core_ibex__cored_o = tl_s1n_13_us_d2h;

  assign tl_rv_dm__regs_o = tl_sm1_14_ds_h2d;
  assign tl_sm1_14_ds_d2h = tl_rv_dm__regs_i;

  assign tl_rv_plic_o = tl_sm1_15_ds_h2d;
  assign tl_sm1_15_ds_d2h = tl_rv_plic_i;

  assign tl_rv_core_ibex__cfg_o = tl_sm1_16_ds_h2d;
  assign tl_sm1_16_ds_d2h = tl_rv_core_ibex__cfg_i;

  assign tl_rv_timer_o = tl_sm1_17_ds_h2d;
  assign tl_sm1_17_ds_d2h = tl_rv_timer_i;

  assign tl_s1n_18_us_h2d = tl_rv_dm__sba_i;
  assign tl_rv_dm__sba_o = tl_s1n_18_us_d2h;

  always_comb begin
    // default steering to generate error response if address is not within the range
    dev_sel_s1n_9 = 2'd2;
    if ((tl_s1n_9_us_h2d.a_address &
         ~(ADDR_MASK_RV_DM__MEM)) == ADDR_SPACE_RV_DM__MEM) begin
      dev_sel_s1n_9 = 2'd0;

    end else if ((tl_s1n_9_us_h2d.a_address &
                  ~(ADDR_MASK_PERI)) == ADDR_SPACE_PERI) begin
      dev_sel_s1n_9 = 2'd1;
end
  end

  always_comb begin
    // default steering to generate error response if address is not within the range
    dev_sel_s1n_13 = 3'd6;
    if ((tl_s1n_13_us_h2d.a_address &
         ~(ADDR_MASK_RV_DM__MEM)) == ADDR_SPACE_RV_DM__MEM) begin
      dev_sel_s1n_13 = 3'd0;

    end else if ((tl_s1n_13_us_h2d.a_address &
                  ~(ADDR_MASK_RV_DM__REGS)) == ADDR_SPACE_RV_DM__REGS) begin
      dev_sel_s1n_13 = 3'd1;

    end else if ((tl_s1n_13_us_h2d.a_address &
                  ~(ADDR_MASK_RV_PLIC)) == ADDR_SPACE_RV_PLIC) begin
      dev_sel_s1n_13 = 3'd2;

    end else if ((tl_s1n_13_us_h2d.a_address &
                  ~(ADDR_MASK_RV_CORE_IBEX__CFG)) == ADDR_SPACE_RV_CORE_IBEX__CFG) begin
      dev_sel_s1n_13 = 3'd3;

    end else if ((tl_s1n_13_us_h2d.a_address &
                  ~(ADDR_MASK_RV_TIMER)) == ADDR_SPACE_RV_TIMER) begin
      dev_sel_s1n_13 = 3'd4;

    end else if ((tl_s1n_13_us_h2d.a_address &
                  ~(ADDR_MASK_PERI)) == ADDR_SPACE_PERI) begin
      dev_sel_s1n_13 = 3'd5;
end
  end

  always_comb begin
    // default steering to generate error response if address is not within the range
    dev_sel_s1n_18 = 3'd6;
    if ((tl_s1n_18_us_h2d.a_address &
         ~(ADDR_MASK_RV_DM__MEM)) == ADDR_SPACE_RV_DM__MEM) begin
      dev_sel_s1n_18 = 3'd0;

    end else if ((tl_s1n_18_us_h2d.a_address &
                  ~(ADDR_MASK_RV_DM__REGS)) == ADDR_SPACE_RV_DM__REGS) begin
      dev_sel_s1n_18 = 3'd1;

    end else if ((tl_s1n_18_us_h2d.a_address &
                  ~(ADDR_MASK_RV_PLIC)) == ADDR_SPACE_RV_PLIC) begin
      dev_sel_s1n_18 = 3'd2;

    end else if ((tl_s1n_18_us_h2d.a_address &
                  ~(ADDR_MASK_RV_CORE_IBEX__CFG)) == ADDR_SPACE_RV_CORE_IBEX__CFG) begin
      dev_sel_s1n_18 = 3'd3;

    end else if ((tl_s1n_18_us_h2d.a_address &
                  ~(ADDR_MASK_RV_TIMER)) == ADDR_SPACE_RV_TIMER) begin
      dev_sel_s1n_18 = 3'd4;

    end else if ((tl_s1n_18_us_h2d.a_address &
                  ~(ADDR_MASK_PERI)) == ADDR_SPACE_PERI) begin
      dev_sel_s1n_18 = 3'd5;
end
  end


  // Instantiation phase
  tlul_socket_1n #(
    .HReqDepth (4'h0),
    .HRspDepth (4'h0),
    .DReqDepth (8'h0),
    .DRspDepth (8'h0),
    .N         (2)
  ) u_s1n_9 (
    .clk_i        (clk_main_i),
    .rst_ni       (rst_main_ni),
    .tl_h_i       (tl_s1n_9_us_h2d),
    .tl_h_o       (tl_s1n_9_us_d2h),
    .tl_d_o       (tl_s1n_9_ds_h2d),
    .tl_d_i       (tl_s1n_9_ds_d2h),
    .dev_select_i (dev_sel_s1n_9)
  );
  tlul_socket_m1 #(
    .HReqDepth (12'h0),
    .HRspDepth (12'h0),
    .DReqPass  (1'b0),
    .DRspPass  (1'b0),
    .M         (3)
  ) u_sm1_10 (
    .clk_i        (clk_main_i),
    .rst_ni       (rst_main_ni),
    .tl_h_i       (tl_sm1_10_us_h2d),
    .tl_h_o       (tl_sm1_10_us_d2h),
    .tl_d_o       (tl_sm1_10_ds_h2d),
    .tl_d_i       (tl_sm1_10_ds_d2h)
  );
  tlul_fifo_async #(
    .ReqDepth        (1),
    .RspDepth        (1)
  ) u_asf_11 (
    .clk_h_i      (clk_main_i),
    .rst_h_ni     (rst_main_ni),
    .clk_d_i      (clk_ahb_i),
    .rst_d_ni     (rst_ahb_ni),
    .tl_h_i       (tl_asf_11_us_h2d),
    .tl_h_o       (tl_asf_11_us_d2h),
    .tl_d_o       (tl_asf_11_ds_h2d),
    .tl_d_i       (tl_asf_11_ds_d2h)
  );
  tlul_socket_m1 #(
    .HReqDepth (12'h0),
    .HRspDepth (12'h0),
    .DReqDepth (4'h0),
    .DRspDepth (4'h0),
    .M         (3)
  ) u_sm1_12 (
    .clk_i        (clk_main_i),
    .rst_ni       (rst_main_ni),
    .tl_h_i       (tl_sm1_12_us_h2d),
    .tl_h_o       (tl_sm1_12_us_d2h),
    .tl_d_o       (tl_sm1_12_ds_h2d),
    .tl_d_i       (tl_sm1_12_ds_d2h)
  );
  tlul_socket_1n #(
    .HReqDepth (4'h0),
    .HRspDepth (4'h0),
    .DReqDepth (24'h0),
    .DRspDepth (24'h0),
    .N         (6)
  ) u_s1n_13 (
    .clk_i        (clk_main_i),
    .rst_ni       (rst_main_ni),
    .tl_h_i       (tl_s1n_13_us_h2d),
    .tl_h_o       (tl_s1n_13_us_d2h),
    .tl_d_o       (tl_s1n_13_ds_h2d),
    .tl_d_i       (tl_s1n_13_ds_d2h),
    .dev_select_i (dev_sel_s1n_13)
  );
  tlul_socket_m1 #(
    .HReqDepth (8'h0),
    .HRspDepth (8'h0),
    .DReqPass  (1'b0),
    .DRspPass  (1'b0),
    .M         (2)
  ) u_sm1_14 (
    .clk_i        (clk_main_i),
    .rst_ni       (rst_main_ni),
    .tl_h_i       (tl_sm1_14_us_h2d),
    .tl_h_o       (tl_sm1_14_us_d2h),
    .tl_d_o       (tl_sm1_14_ds_h2d),
    .tl_d_i       (tl_sm1_14_ds_d2h)
  );
  tlul_socket_m1 #(
    .HReqDepth (8'h0),
    .HRspDepth (8'h0),
    .DReqPass  (1'b0),
    .DRspPass  (1'b0),
    .M         (2)
  ) u_sm1_15 (
    .clk_i        (clk_main_i),
    .rst_ni       (rst_main_ni),
    .tl_h_i       (tl_sm1_15_us_h2d),
    .tl_h_o       (tl_sm1_15_us_d2h),
    .tl_d_o       (tl_sm1_15_ds_h2d),
    .tl_d_i       (tl_sm1_15_ds_d2h)
  );
  tlul_socket_m1 #(
    .HReqDepth (8'h0),
    .HRspDepth (8'h0),
    .DReqPass  (1'b0),
    .DRspPass  (1'b0),
    .M         (2)
  ) u_sm1_16 (
    .clk_i        (clk_main_i),
    .rst_ni       (rst_main_ni),
    .tl_h_i       (tl_sm1_16_us_h2d),
    .tl_h_o       (tl_sm1_16_us_d2h),
    .tl_d_o       (tl_sm1_16_ds_h2d),
    .tl_d_i       (tl_sm1_16_ds_d2h)
  );
  tlul_socket_m1 #(
    .HReqDepth (8'h0),
    .HRspDepth (8'h0),
    .DReqPass  (1'b0),
    .DRspPass  (1'b0),
    .M         (2)
  ) u_sm1_17 (
    .clk_i        (clk_main_i),
    .rst_ni       (rst_main_ni),
    .tl_h_i       (tl_sm1_17_us_h2d),
    .tl_h_o       (tl_sm1_17_us_d2h),
    .tl_d_o       (tl_sm1_17_ds_h2d),
    .tl_d_i       (tl_sm1_17_ds_d2h)
  );
  tlul_socket_1n #(
    .HReqPass  (1'b0),
    .HRspPass  (1'b0),
    .DReqDepth (24'h0),
    .DRspDepth (24'h0),
    .N         (6)
  ) u_s1n_18 (
    .clk_i        (clk_main_i),
    .rst_ni       (rst_main_ni),
    .tl_h_i       (tl_s1n_18_us_h2d),
    .tl_h_o       (tl_s1n_18_us_d2h),
    .tl_d_o       (tl_s1n_18_ds_h2d),
    .tl_d_i       (tl_s1n_18_ds_d2h),
    .dev_select_i (dev_sel_s1n_18)
  );

endmodule
