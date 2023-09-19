// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#include "hw/top_darjeeling/sw/autogen/top_darjeeling.h"

/**
 * PLIC Interrupt Source to Peripheral Map
 *
 * This array is a mapping from `top_darjeeling_plic_irq_id_t` to
 * `top_darjeeling_plic_peripheral_t`.
 */
const top_darjeeling_plic_peripheral_t
    top_darjeeling_plic_interrupt_for_peripheral[186] = {
  [kTopDarjeelingPlicIrqIdNone] = kTopDarjeelingPlicPeripheralUnknown,
  [kTopDarjeelingPlicIrqIdUart0TxWatermark] = kTopDarjeelingPlicPeripheralUart0,
  [kTopDarjeelingPlicIrqIdUart0RxWatermark] = kTopDarjeelingPlicPeripheralUart0,
  [kTopDarjeelingPlicIrqIdUart0TxEmpty] = kTopDarjeelingPlicPeripheralUart0,
  [kTopDarjeelingPlicIrqIdUart0RxOverflow] = kTopDarjeelingPlicPeripheralUart0,
  [kTopDarjeelingPlicIrqIdUart0RxFrameErr] = kTopDarjeelingPlicPeripheralUart0,
  [kTopDarjeelingPlicIrqIdUart0RxBreakErr] = kTopDarjeelingPlicPeripheralUart0,
  [kTopDarjeelingPlicIrqIdUart0RxTimeout] = kTopDarjeelingPlicPeripheralUart0,
  [kTopDarjeelingPlicIrqIdUart0RxParityErr] = kTopDarjeelingPlicPeripheralUart0,
  [kTopDarjeelingPlicIrqIdGpioGpio0] = kTopDarjeelingPlicPeripheralGpio,
  [kTopDarjeelingPlicIrqIdGpioGpio1] = kTopDarjeelingPlicPeripheralGpio,
  [kTopDarjeelingPlicIrqIdGpioGpio2] = kTopDarjeelingPlicPeripheralGpio,
  [kTopDarjeelingPlicIrqIdGpioGpio3] = kTopDarjeelingPlicPeripheralGpio,
  [kTopDarjeelingPlicIrqIdGpioGpio4] = kTopDarjeelingPlicPeripheralGpio,
  [kTopDarjeelingPlicIrqIdGpioGpio5] = kTopDarjeelingPlicPeripheralGpio,
  [kTopDarjeelingPlicIrqIdGpioGpio6] = kTopDarjeelingPlicPeripheralGpio,
  [kTopDarjeelingPlicIrqIdGpioGpio7] = kTopDarjeelingPlicPeripheralGpio,
  [kTopDarjeelingPlicIrqIdGpioGpio8] = kTopDarjeelingPlicPeripheralGpio,
  [kTopDarjeelingPlicIrqIdGpioGpio9] = kTopDarjeelingPlicPeripheralGpio,
  [kTopDarjeelingPlicIrqIdGpioGpio10] = kTopDarjeelingPlicPeripheralGpio,
  [kTopDarjeelingPlicIrqIdGpioGpio11] = kTopDarjeelingPlicPeripheralGpio,
  [kTopDarjeelingPlicIrqIdGpioGpio12] = kTopDarjeelingPlicPeripheralGpio,
  [kTopDarjeelingPlicIrqIdGpioGpio13] = kTopDarjeelingPlicPeripheralGpio,
  [kTopDarjeelingPlicIrqIdGpioGpio14] = kTopDarjeelingPlicPeripheralGpio,
  [kTopDarjeelingPlicIrqIdGpioGpio15] = kTopDarjeelingPlicPeripheralGpio,
  [kTopDarjeelingPlicIrqIdGpioGpio16] = kTopDarjeelingPlicPeripheralGpio,
  [kTopDarjeelingPlicIrqIdGpioGpio17] = kTopDarjeelingPlicPeripheralGpio,
  [kTopDarjeelingPlicIrqIdGpioGpio18] = kTopDarjeelingPlicPeripheralGpio,
  [kTopDarjeelingPlicIrqIdGpioGpio19] = kTopDarjeelingPlicPeripheralGpio,
  [kTopDarjeelingPlicIrqIdGpioGpio20] = kTopDarjeelingPlicPeripheralGpio,
  [kTopDarjeelingPlicIrqIdGpioGpio21] = kTopDarjeelingPlicPeripheralGpio,
  [kTopDarjeelingPlicIrqIdGpioGpio22] = kTopDarjeelingPlicPeripheralGpio,
  [kTopDarjeelingPlicIrqIdGpioGpio23] = kTopDarjeelingPlicPeripheralGpio,
  [kTopDarjeelingPlicIrqIdGpioGpio24] = kTopDarjeelingPlicPeripheralGpio,
  [kTopDarjeelingPlicIrqIdGpioGpio25] = kTopDarjeelingPlicPeripheralGpio,
  [kTopDarjeelingPlicIrqIdGpioGpio26] = kTopDarjeelingPlicPeripheralGpio,
  [kTopDarjeelingPlicIrqIdGpioGpio27] = kTopDarjeelingPlicPeripheralGpio,
  [kTopDarjeelingPlicIrqIdGpioGpio28] = kTopDarjeelingPlicPeripheralGpio,
  [kTopDarjeelingPlicIrqIdGpioGpio29] = kTopDarjeelingPlicPeripheralGpio,
  [kTopDarjeelingPlicIrqIdGpioGpio30] = kTopDarjeelingPlicPeripheralGpio,
  [kTopDarjeelingPlicIrqIdGpioGpio31] = kTopDarjeelingPlicPeripheralGpio,
  [kTopDarjeelingPlicIrqIdSpiDeviceGenericRxFull] = kTopDarjeelingPlicPeripheralSpiDevice,
  [kTopDarjeelingPlicIrqIdSpiDeviceGenericRxWatermark] = kTopDarjeelingPlicPeripheralSpiDevice,
  [kTopDarjeelingPlicIrqIdSpiDeviceGenericTxWatermark] = kTopDarjeelingPlicPeripheralSpiDevice,
  [kTopDarjeelingPlicIrqIdSpiDeviceGenericRxError] = kTopDarjeelingPlicPeripheralSpiDevice,
  [kTopDarjeelingPlicIrqIdSpiDeviceGenericRxOverflow] = kTopDarjeelingPlicPeripheralSpiDevice,
  [kTopDarjeelingPlicIrqIdSpiDeviceGenericTxUnderflow] = kTopDarjeelingPlicPeripheralSpiDevice,
  [kTopDarjeelingPlicIrqIdSpiDeviceUploadCmdfifoNotEmpty] = kTopDarjeelingPlicPeripheralSpiDevice,
  [kTopDarjeelingPlicIrqIdSpiDeviceUploadPayloadNotEmpty] = kTopDarjeelingPlicPeripheralSpiDevice,
  [kTopDarjeelingPlicIrqIdSpiDeviceUploadPayloadOverflow] = kTopDarjeelingPlicPeripheralSpiDevice,
  [kTopDarjeelingPlicIrqIdSpiDeviceReadbufWatermark] = kTopDarjeelingPlicPeripheralSpiDevice,
  [kTopDarjeelingPlicIrqIdSpiDeviceReadbufFlip] = kTopDarjeelingPlicPeripheralSpiDevice,
  [kTopDarjeelingPlicIrqIdSpiDeviceTpmHeaderNotEmpty] = kTopDarjeelingPlicPeripheralSpiDevice,
  [kTopDarjeelingPlicIrqIdI2c0FmtThreshold] = kTopDarjeelingPlicPeripheralI2c0,
  [kTopDarjeelingPlicIrqIdI2c0RxThreshold] = kTopDarjeelingPlicPeripheralI2c0,
  [kTopDarjeelingPlicIrqIdI2c0FmtOverflow] = kTopDarjeelingPlicPeripheralI2c0,
  [kTopDarjeelingPlicIrqIdI2c0RxOverflow] = kTopDarjeelingPlicPeripheralI2c0,
  [kTopDarjeelingPlicIrqIdI2c0Nak] = kTopDarjeelingPlicPeripheralI2c0,
  [kTopDarjeelingPlicIrqIdI2c0SclInterference] = kTopDarjeelingPlicPeripheralI2c0,
  [kTopDarjeelingPlicIrqIdI2c0SdaInterference] = kTopDarjeelingPlicPeripheralI2c0,
  [kTopDarjeelingPlicIrqIdI2c0StretchTimeout] = kTopDarjeelingPlicPeripheralI2c0,
  [kTopDarjeelingPlicIrqIdI2c0SdaUnstable] = kTopDarjeelingPlicPeripheralI2c0,
  [kTopDarjeelingPlicIrqIdI2c0CmdComplete] = kTopDarjeelingPlicPeripheralI2c0,
  [kTopDarjeelingPlicIrqIdI2c0TxStretch] = kTopDarjeelingPlicPeripheralI2c0,
  [kTopDarjeelingPlicIrqIdI2c0TxOverflow] = kTopDarjeelingPlicPeripheralI2c0,
  [kTopDarjeelingPlicIrqIdI2c0AcqFull] = kTopDarjeelingPlicPeripheralI2c0,
  [kTopDarjeelingPlicIrqIdI2c0UnexpStop] = kTopDarjeelingPlicPeripheralI2c0,
  [kTopDarjeelingPlicIrqIdI2c0HostTimeout] = kTopDarjeelingPlicPeripheralI2c0,
  [kTopDarjeelingPlicIrqIdI2c1FmtThreshold] = kTopDarjeelingPlicPeripheralI2c1,
  [kTopDarjeelingPlicIrqIdI2c1RxThreshold] = kTopDarjeelingPlicPeripheralI2c1,
  [kTopDarjeelingPlicIrqIdI2c1FmtOverflow] = kTopDarjeelingPlicPeripheralI2c1,
  [kTopDarjeelingPlicIrqIdI2c1RxOverflow] = kTopDarjeelingPlicPeripheralI2c1,
  [kTopDarjeelingPlicIrqIdI2c1Nak] = kTopDarjeelingPlicPeripheralI2c1,
  [kTopDarjeelingPlicIrqIdI2c1SclInterference] = kTopDarjeelingPlicPeripheralI2c1,
  [kTopDarjeelingPlicIrqIdI2c1SdaInterference] = kTopDarjeelingPlicPeripheralI2c1,
  [kTopDarjeelingPlicIrqIdI2c1StretchTimeout] = kTopDarjeelingPlicPeripheralI2c1,
  [kTopDarjeelingPlicIrqIdI2c1SdaUnstable] = kTopDarjeelingPlicPeripheralI2c1,
  [kTopDarjeelingPlicIrqIdI2c1CmdComplete] = kTopDarjeelingPlicPeripheralI2c1,
  [kTopDarjeelingPlicIrqIdI2c1TxStretch] = kTopDarjeelingPlicPeripheralI2c1,
  [kTopDarjeelingPlicIrqIdI2c1TxOverflow] = kTopDarjeelingPlicPeripheralI2c1,
  [kTopDarjeelingPlicIrqIdI2c1AcqFull] = kTopDarjeelingPlicPeripheralI2c1,
  [kTopDarjeelingPlicIrqIdI2c1UnexpStop] = kTopDarjeelingPlicPeripheralI2c1,
  [kTopDarjeelingPlicIrqIdI2c1HostTimeout] = kTopDarjeelingPlicPeripheralI2c1,
  [kTopDarjeelingPlicIrqIdI2c2FmtThreshold] = kTopDarjeelingPlicPeripheralI2c2,
  [kTopDarjeelingPlicIrqIdI2c2RxThreshold] = kTopDarjeelingPlicPeripheralI2c2,
  [kTopDarjeelingPlicIrqIdI2c2FmtOverflow] = kTopDarjeelingPlicPeripheralI2c2,
  [kTopDarjeelingPlicIrqIdI2c2RxOverflow] = kTopDarjeelingPlicPeripheralI2c2,
  [kTopDarjeelingPlicIrqIdI2c2Nak] = kTopDarjeelingPlicPeripheralI2c2,
  [kTopDarjeelingPlicIrqIdI2c2SclInterference] = kTopDarjeelingPlicPeripheralI2c2,
  [kTopDarjeelingPlicIrqIdI2c2SdaInterference] = kTopDarjeelingPlicPeripheralI2c2,
  [kTopDarjeelingPlicIrqIdI2c2StretchTimeout] = kTopDarjeelingPlicPeripheralI2c2,
  [kTopDarjeelingPlicIrqIdI2c2SdaUnstable] = kTopDarjeelingPlicPeripheralI2c2,
  [kTopDarjeelingPlicIrqIdI2c2CmdComplete] = kTopDarjeelingPlicPeripheralI2c2,
  [kTopDarjeelingPlicIrqIdI2c2TxStretch] = kTopDarjeelingPlicPeripheralI2c2,
  [kTopDarjeelingPlicIrqIdI2c2TxOverflow] = kTopDarjeelingPlicPeripheralI2c2,
  [kTopDarjeelingPlicIrqIdI2c2AcqFull] = kTopDarjeelingPlicPeripheralI2c2,
  [kTopDarjeelingPlicIrqIdI2c2UnexpStop] = kTopDarjeelingPlicPeripheralI2c2,
  [kTopDarjeelingPlicIrqIdI2c2HostTimeout] = kTopDarjeelingPlicPeripheralI2c2,
  [kTopDarjeelingPlicIrqIdRvTimerTimerExpiredHart0Timer0] = kTopDarjeelingPlicPeripheralRvTimer,
  [kTopDarjeelingPlicIrqIdOtpCtrlOtpOperationDone] = kTopDarjeelingPlicPeripheralOtpCtrl,
  [kTopDarjeelingPlicIrqIdOtpCtrlOtpError] = kTopDarjeelingPlicPeripheralOtpCtrl,
  [kTopDarjeelingPlicIrqIdAlertHandlerClassa] = kTopDarjeelingPlicPeripheralAlertHandler,
  [kTopDarjeelingPlicIrqIdAlertHandlerClassb] = kTopDarjeelingPlicPeripheralAlertHandler,
  [kTopDarjeelingPlicIrqIdAlertHandlerClassc] = kTopDarjeelingPlicPeripheralAlertHandler,
  [kTopDarjeelingPlicIrqIdAlertHandlerClassd] = kTopDarjeelingPlicPeripheralAlertHandler,
  [kTopDarjeelingPlicIrqIdSpiHost0Error] = kTopDarjeelingPlicPeripheralSpiHost0,
  [kTopDarjeelingPlicIrqIdSpiHost0SpiEvent] = kTopDarjeelingPlicPeripheralSpiHost0,
  [kTopDarjeelingPlicIrqIdSpiHost1Error] = kTopDarjeelingPlicPeripheralSpiHost1,
  [kTopDarjeelingPlicIrqIdSpiHost1SpiEvent] = kTopDarjeelingPlicPeripheralSpiHost1,
  [kTopDarjeelingPlicIrqIdUsbdevPktReceived] = kTopDarjeelingPlicPeripheralUsbdev,
  [kTopDarjeelingPlicIrqIdUsbdevPktSent] = kTopDarjeelingPlicPeripheralUsbdev,
  [kTopDarjeelingPlicIrqIdUsbdevDisconnected] = kTopDarjeelingPlicPeripheralUsbdev,
  [kTopDarjeelingPlicIrqIdUsbdevHostLost] = kTopDarjeelingPlicPeripheralUsbdev,
  [kTopDarjeelingPlicIrqIdUsbdevLinkReset] = kTopDarjeelingPlicPeripheralUsbdev,
  [kTopDarjeelingPlicIrqIdUsbdevLinkSuspend] = kTopDarjeelingPlicPeripheralUsbdev,
  [kTopDarjeelingPlicIrqIdUsbdevLinkResume] = kTopDarjeelingPlicPeripheralUsbdev,
  [kTopDarjeelingPlicIrqIdUsbdevAvEmpty] = kTopDarjeelingPlicPeripheralUsbdev,
  [kTopDarjeelingPlicIrqIdUsbdevRxFull] = kTopDarjeelingPlicPeripheralUsbdev,
  [kTopDarjeelingPlicIrqIdUsbdevAvOverflow] = kTopDarjeelingPlicPeripheralUsbdev,
  [kTopDarjeelingPlicIrqIdUsbdevLinkInErr] = kTopDarjeelingPlicPeripheralUsbdev,
  [kTopDarjeelingPlicIrqIdUsbdevRxCrcErr] = kTopDarjeelingPlicPeripheralUsbdev,
  [kTopDarjeelingPlicIrqIdUsbdevRxPidErr] = kTopDarjeelingPlicPeripheralUsbdev,
  [kTopDarjeelingPlicIrqIdUsbdevRxBitstuffErr] = kTopDarjeelingPlicPeripheralUsbdev,
  [kTopDarjeelingPlicIrqIdUsbdevFrame] = kTopDarjeelingPlicPeripheralUsbdev,
  [kTopDarjeelingPlicIrqIdUsbdevPowered] = kTopDarjeelingPlicPeripheralUsbdev,
  [kTopDarjeelingPlicIrqIdUsbdevLinkOutErr] = kTopDarjeelingPlicPeripheralUsbdev,
  [kTopDarjeelingPlicIrqIdPwrmgrAonWakeup] = kTopDarjeelingPlicPeripheralPwrmgrAon,
  [kTopDarjeelingPlicIrqIdSysrstCtrlAonEventDetected] = kTopDarjeelingPlicPeripheralSysrstCtrlAon,
  [kTopDarjeelingPlicIrqIdAdcCtrlAonMatchDone] = kTopDarjeelingPlicPeripheralAdcCtrlAon,
  [kTopDarjeelingPlicIrqIdAonTimerAonWkupTimerExpired] = kTopDarjeelingPlicPeripheralAonTimerAon,
  [kTopDarjeelingPlicIrqIdAonTimerAonWdogTimerBark] = kTopDarjeelingPlicPeripheralAonTimerAon,
  [kTopDarjeelingPlicIrqIdSensorCtrlIoStatusChange] = kTopDarjeelingPlicPeripheralSensorCtrl,
  [kTopDarjeelingPlicIrqIdSensorCtrlInitStatusChange] = kTopDarjeelingPlicPeripheralSensorCtrl,
  [kTopDarjeelingPlicIrqIdSocProxyExternal0] = kTopDarjeelingPlicPeripheralSocProxy,
  [kTopDarjeelingPlicIrqIdSocProxyExternal1] = kTopDarjeelingPlicPeripheralSocProxy,
  [kTopDarjeelingPlicIrqIdSocProxyExternal2] = kTopDarjeelingPlicPeripheralSocProxy,
  [kTopDarjeelingPlicIrqIdSocProxyExternal3] = kTopDarjeelingPlicPeripheralSocProxy,
  [kTopDarjeelingPlicIrqIdSocProxyExternal4] = kTopDarjeelingPlicPeripheralSocProxy,
  [kTopDarjeelingPlicIrqIdSocProxyExternal5] = kTopDarjeelingPlicPeripheralSocProxy,
  [kTopDarjeelingPlicIrqIdSocProxyExternal6] = kTopDarjeelingPlicPeripheralSocProxy,
  [kTopDarjeelingPlicIrqIdSocProxyExternal7] = kTopDarjeelingPlicPeripheralSocProxy,
  [kTopDarjeelingPlicIrqIdFlashCtrlProgEmpty] = kTopDarjeelingPlicPeripheralFlashCtrl,
  [kTopDarjeelingPlicIrqIdFlashCtrlProgLvl] = kTopDarjeelingPlicPeripheralFlashCtrl,
  [kTopDarjeelingPlicIrqIdFlashCtrlRdFull] = kTopDarjeelingPlicPeripheralFlashCtrl,
  [kTopDarjeelingPlicIrqIdFlashCtrlRdLvl] = kTopDarjeelingPlicPeripheralFlashCtrl,
  [kTopDarjeelingPlicIrqIdFlashCtrlOpDone] = kTopDarjeelingPlicPeripheralFlashCtrl,
  [kTopDarjeelingPlicIrqIdFlashCtrlCorrErr] = kTopDarjeelingPlicPeripheralFlashCtrl,
  [kTopDarjeelingPlicIrqIdHmacHmacDone] = kTopDarjeelingPlicPeripheralHmac,
  [kTopDarjeelingPlicIrqIdHmacFifoEmpty] = kTopDarjeelingPlicPeripheralHmac,
  [kTopDarjeelingPlicIrqIdHmacHmacErr] = kTopDarjeelingPlicPeripheralHmac,
  [kTopDarjeelingPlicIrqIdKmacKmacDone] = kTopDarjeelingPlicPeripheralKmac,
  [kTopDarjeelingPlicIrqIdKmacFifoEmpty] = kTopDarjeelingPlicPeripheralKmac,
  [kTopDarjeelingPlicIrqIdKmacKmacErr] = kTopDarjeelingPlicPeripheralKmac,
  [kTopDarjeelingPlicIrqIdOtbnDone] = kTopDarjeelingPlicPeripheralOtbn,
  [kTopDarjeelingPlicIrqIdKeymgrOpDone] = kTopDarjeelingPlicPeripheralKeymgr,
  [kTopDarjeelingPlicIrqIdCsrngCsCmdReqDone] = kTopDarjeelingPlicPeripheralCsrng,
  [kTopDarjeelingPlicIrqIdCsrngCsEntropyReq] = kTopDarjeelingPlicPeripheralCsrng,
  [kTopDarjeelingPlicIrqIdCsrngCsHwInstExc] = kTopDarjeelingPlicPeripheralCsrng,
  [kTopDarjeelingPlicIrqIdCsrngCsFatalErr] = kTopDarjeelingPlicPeripheralCsrng,
  [kTopDarjeelingPlicIrqIdEdn0EdnCmdReqDone] = kTopDarjeelingPlicPeripheralEdn0,
  [kTopDarjeelingPlicIrqIdEdn0EdnFatalErr] = kTopDarjeelingPlicPeripheralEdn0,
  [kTopDarjeelingPlicIrqIdEdn1EdnCmdReqDone] = kTopDarjeelingPlicPeripheralEdn1,
  [kTopDarjeelingPlicIrqIdEdn1EdnFatalErr] = kTopDarjeelingPlicPeripheralEdn1,
  [kTopDarjeelingPlicIrqIdDmaDmaDone] = kTopDarjeelingPlicPeripheralDma,
  [kTopDarjeelingPlicIrqIdDmaDmaError] = kTopDarjeelingPlicPeripheralDma,
  [kTopDarjeelingPlicIrqIdDmaDmaMemoryBufferLimit] = kTopDarjeelingPlicPeripheralDma,
  [kTopDarjeelingPlicIrqIdMbx0MbxReady] = kTopDarjeelingPlicPeripheralMbx0,
  [kTopDarjeelingPlicIrqIdMbx0MbxAbort] = kTopDarjeelingPlicPeripheralMbx0,
  [kTopDarjeelingPlicIrqIdMbx1MbxReady] = kTopDarjeelingPlicPeripheralMbx1,
  [kTopDarjeelingPlicIrqIdMbx1MbxAbort] = kTopDarjeelingPlicPeripheralMbx1,
  [kTopDarjeelingPlicIrqIdMbx2MbxReady] = kTopDarjeelingPlicPeripheralMbx2,
  [kTopDarjeelingPlicIrqIdMbx2MbxAbort] = kTopDarjeelingPlicPeripheralMbx2,
  [kTopDarjeelingPlicIrqIdMbx3MbxReady] = kTopDarjeelingPlicPeripheralMbx3,
  [kTopDarjeelingPlicIrqIdMbx3MbxAbort] = kTopDarjeelingPlicPeripheralMbx3,
  [kTopDarjeelingPlicIrqIdMbx4MbxReady] = kTopDarjeelingPlicPeripheralMbx4,
  [kTopDarjeelingPlicIrqIdMbx4MbxAbort] = kTopDarjeelingPlicPeripheralMbx4,
  [kTopDarjeelingPlicIrqIdMbx5MbxReady] = kTopDarjeelingPlicPeripheralMbx5,
  [kTopDarjeelingPlicIrqIdMbx5MbxAbort] = kTopDarjeelingPlicPeripheralMbx5,
  [kTopDarjeelingPlicIrqIdMbx6MbxReady] = kTopDarjeelingPlicPeripheralMbx6,
  [kTopDarjeelingPlicIrqIdMbx6MbxAbort] = kTopDarjeelingPlicPeripheralMbx6,
  [kTopDarjeelingPlicIrqIdMbx7MbxReady] = kTopDarjeelingPlicPeripheralMbx7,
  [kTopDarjeelingPlicIrqIdMbx7MbxAbort] = kTopDarjeelingPlicPeripheralMbx7,
  [kTopDarjeelingPlicIrqIdMbxJtagMbxReady] = kTopDarjeelingPlicPeripheralMbxJtag,
  [kTopDarjeelingPlicIrqIdMbxJtagMbxAbort] = kTopDarjeelingPlicPeripheralMbxJtag,
  [kTopDarjeelingPlicIrqIdMbxPcie0MbxReady] = kTopDarjeelingPlicPeripheralMbxPcie0,
  [kTopDarjeelingPlicIrqIdMbxPcie0MbxAbort] = kTopDarjeelingPlicPeripheralMbxPcie0,
};


/**
 * Alert Handler Alert Source to Peripheral Map
 *
 * This array is a mapping from `top_darjeeling_alert_id_t` to
 * `top_darjeeling_alert_peripheral_t`.
 */
const top_darjeeling_alert_peripheral_t
    top_darjeeling_alert_for_peripheral[90] = {
  [kTopDarjeelingAlertIdUart0FatalFault] = kTopDarjeelingAlertPeripheralUart0,
  [kTopDarjeelingAlertIdGpioFatalFault] = kTopDarjeelingAlertPeripheralGpio,
  [kTopDarjeelingAlertIdSpiDeviceFatalFault] = kTopDarjeelingAlertPeripheralSpiDevice,
  [kTopDarjeelingAlertIdI2c0FatalFault] = kTopDarjeelingAlertPeripheralI2c0,
  [kTopDarjeelingAlertIdI2c1FatalFault] = kTopDarjeelingAlertPeripheralI2c1,
  [kTopDarjeelingAlertIdI2c2FatalFault] = kTopDarjeelingAlertPeripheralI2c2,
  [kTopDarjeelingAlertIdRvTimerFatalFault] = kTopDarjeelingAlertPeripheralRvTimer,
  [kTopDarjeelingAlertIdOtpCtrlFatalMacroError] = kTopDarjeelingAlertPeripheralOtpCtrl,
  [kTopDarjeelingAlertIdOtpCtrlFatalCheckError] = kTopDarjeelingAlertPeripheralOtpCtrl,
  [kTopDarjeelingAlertIdOtpCtrlFatalBusIntegError] = kTopDarjeelingAlertPeripheralOtpCtrl,
  [kTopDarjeelingAlertIdOtpCtrlFatalPrimOtpAlert] = kTopDarjeelingAlertPeripheralOtpCtrl,
  [kTopDarjeelingAlertIdOtpCtrlRecovPrimOtpAlert] = kTopDarjeelingAlertPeripheralOtpCtrl,
  [kTopDarjeelingAlertIdLcCtrlFatalProgError] = kTopDarjeelingAlertPeripheralLcCtrl,
  [kTopDarjeelingAlertIdLcCtrlFatalStateError] = kTopDarjeelingAlertPeripheralLcCtrl,
  [kTopDarjeelingAlertIdLcCtrlFatalBusIntegError] = kTopDarjeelingAlertPeripheralLcCtrl,
  [kTopDarjeelingAlertIdSpiHost0FatalFault] = kTopDarjeelingAlertPeripheralSpiHost0,
  [kTopDarjeelingAlertIdSpiHost1FatalFault] = kTopDarjeelingAlertPeripheralSpiHost1,
  [kTopDarjeelingAlertIdUsbdevFatalFault] = kTopDarjeelingAlertPeripheralUsbdev,
  [kTopDarjeelingAlertIdPwrmgrAonFatalFault] = kTopDarjeelingAlertPeripheralPwrmgrAon,
  [kTopDarjeelingAlertIdRstmgrAonFatalFault] = kTopDarjeelingAlertPeripheralRstmgrAon,
  [kTopDarjeelingAlertIdRstmgrAonFatalCnstyFault] = kTopDarjeelingAlertPeripheralRstmgrAon,
  [kTopDarjeelingAlertIdClkmgrAonRecovFault] = kTopDarjeelingAlertPeripheralClkmgrAon,
  [kTopDarjeelingAlertIdClkmgrAonFatalFault] = kTopDarjeelingAlertPeripheralClkmgrAon,
  [kTopDarjeelingAlertIdSysrstCtrlAonFatalFault] = kTopDarjeelingAlertPeripheralSysrstCtrlAon,
  [kTopDarjeelingAlertIdAdcCtrlAonFatalFault] = kTopDarjeelingAlertPeripheralAdcCtrlAon,
  [kTopDarjeelingAlertIdPinmuxAonFatalFault] = kTopDarjeelingAlertPeripheralPinmuxAon,
  [kTopDarjeelingAlertIdAonTimerAonFatalFault] = kTopDarjeelingAlertPeripheralAonTimerAon,
  [kTopDarjeelingAlertIdSensorCtrlRecovAlert] = kTopDarjeelingAlertPeripheralSensorCtrl,
  [kTopDarjeelingAlertIdSensorCtrlFatalAlert] = kTopDarjeelingAlertPeripheralSensorCtrl,
  [kTopDarjeelingAlertIdSocProxyFatalAlertIntg] = kTopDarjeelingAlertPeripheralSocProxy,
  [kTopDarjeelingAlertIdSocProxyFatalAlertExternal0] = kTopDarjeelingAlertPeripheralSocProxy,
  [kTopDarjeelingAlertIdSocProxyFatalAlertExternal1] = kTopDarjeelingAlertPeripheralSocProxy,
  [kTopDarjeelingAlertIdSocProxyFatalAlertExternal2] = kTopDarjeelingAlertPeripheralSocProxy,
  [kTopDarjeelingAlertIdSocProxyFatalAlertExternal3] = kTopDarjeelingAlertPeripheralSocProxy,
  [kTopDarjeelingAlertIdSocProxyRecovAlertExternal0] = kTopDarjeelingAlertPeripheralSocProxy,
  [kTopDarjeelingAlertIdSocProxyRecovAlertExternal1] = kTopDarjeelingAlertPeripheralSocProxy,
  [kTopDarjeelingAlertIdSocProxyRecovAlertExternal2] = kTopDarjeelingAlertPeripheralSocProxy,
  [kTopDarjeelingAlertIdSocProxyRecovAlertExternal3] = kTopDarjeelingAlertPeripheralSocProxy,
  [kTopDarjeelingAlertIdSramCtrlRetAonFatalError] = kTopDarjeelingAlertPeripheralSramCtrlRetAon,
  [kTopDarjeelingAlertIdFlashCtrlRecovErr] = kTopDarjeelingAlertPeripheralFlashCtrl,
  [kTopDarjeelingAlertIdFlashCtrlFatalStdErr] = kTopDarjeelingAlertPeripheralFlashCtrl,
  [kTopDarjeelingAlertIdFlashCtrlFatalErr] = kTopDarjeelingAlertPeripheralFlashCtrl,
  [kTopDarjeelingAlertIdFlashCtrlFatalPrimFlashAlert] = kTopDarjeelingAlertPeripheralFlashCtrl,
  [kTopDarjeelingAlertIdFlashCtrlRecovPrimFlashAlert] = kTopDarjeelingAlertPeripheralFlashCtrl,
  [kTopDarjeelingAlertIdRvDmFatalFault] = kTopDarjeelingAlertPeripheralRvDm,
  [kTopDarjeelingAlertIdRvPlicFatalFault] = kTopDarjeelingAlertPeripheralRvPlic,
  [kTopDarjeelingAlertIdAesRecovCtrlUpdateErr] = kTopDarjeelingAlertPeripheralAes,
  [kTopDarjeelingAlertIdAesFatalFault] = kTopDarjeelingAlertPeripheralAes,
  [kTopDarjeelingAlertIdHmacFatalFault] = kTopDarjeelingAlertPeripheralHmac,
  [kTopDarjeelingAlertIdKmacRecovOperationErr] = kTopDarjeelingAlertPeripheralKmac,
  [kTopDarjeelingAlertIdKmacFatalFaultErr] = kTopDarjeelingAlertPeripheralKmac,
  [kTopDarjeelingAlertIdOtbnFatal] = kTopDarjeelingAlertPeripheralOtbn,
  [kTopDarjeelingAlertIdOtbnRecov] = kTopDarjeelingAlertPeripheralOtbn,
  [kTopDarjeelingAlertIdKeymgrRecovOperationErr] = kTopDarjeelingAlertPeripheralKeymgr,
  [kTopDarjeelingAlertIdKeymgrFatalFaultErr] = kTopDarjeelingAlertPeripheralKeymgr,
  [kTopDarjeelingAlertIdCsrngRecovAlert] = kTopDarjeelingAlertPeripheralCsrng,
  [kTopDarjeelingAlertIdCsrngFatalAlert] = kTopDarjeelingAlertPeripheralCsrng,
  [kTopDarjeelingAlertIdEdn0RecovAlert] = kTopDarjeelingAlertPeripheralEdn0,
  [kTopDarjeelingAlertIdEdn0FatalAlert] = kTopDarjeelingAlertPeripheralEdn0,
  [kTopDarjeelingAlertIdEdn1RecovAlert] = kTopDarjeelingAlertPeripheralEdn1,
  [kTopDarjeelingAlertIdEdn1FatalAlert] = kTopDarjeelingAlertPeripheralEdn1,
  [kTopDarjeelingAlertIdSramCtrlMainFatalError] = kTopDarjeelingAlertPeripheralSramCtrlMain,
  [kTopDarjeelingAlertIdSramCtrlMboxFatalError] = kTopDarjeelingAlertPeripheralSramCtrlMbox,
  [kTopDarjeelingAlertIdRomCtrl0Fatal] = kTopDarjeelingAlertPeripheralRomCtrl0,
  [kTopDarjeelingAlertIdRomCtrl1Fatal] = kTopDarjeelingAlertPeripheralRomCtrl1,
  [kTopDarjeelingAlertIdDmaFatalFault] = kTopDarjeelingAlertPeripheralDma,
  [kTopDarjeelingAlertIdMbx0FatalFault] = kTopDarjeelingAlertPeripheralMbx0,
  [kTopDarjeelingAlertIdMbx0RecovFault] = kTopDarjeelingAlertPeripheralMbx0,
  [kTopDarjeelingAlertIdMbx1FatalFault] = kTopDarjeelingAlertPeripheralMbx1,
  [kTopDarjeelingAlertIdMbx1RecovFault] = kTopDarjeelingAlertPeripheralMbx1,
  [kTopDarjeelingAlertIdMbx2FatalFault] = kTopDarjeelingAlertPeripheralMbx2,
  [kTopDarjeelingAlertIdMbx2RecovFault] = kTopDarjeelingAlertPeripheralMbx2,
  [kTopDarjeelingAlertIdMbx3FatalFault] = kTopDarjeelingAlertPeripheralMbx3,
  [kTopDarjeelingAlertIdMbx3RecovFault] = kTopDarjeelingAlertPeripheralMbx3,
  [kTopDarjeelingAlertIdMbx4FatalFault] = kTopDarjeelingAlertPeripheralMbx4,
  [kTopDarjeelingAlertIdMbx4RecovFault] = kTopDarjeelingAlertPeripheralMbx4,
  [kTopDarjeelingAlertIdMbx5FatalFault] = kTopDarjeelingAlertPeripheralMbx5,
  [kTopDarjeelingAlertIdMbx5RecovFault] = kTopDarjeelingAlertPeripheralMbx5,
  [kTopDarjeelingAlertIdMbx6FatalFault] = kTopDarjeelingAlertPeripheralMbx6,
  [kTopDarjeelingAlertIdMbx6RecovFault] = kTopDarjeelingAlertPeripheralMbx6,
  [kTopDarjeelingAlertIdMbx7FatalFault] = kTopDarjeelingAlertPeripheralMbx7,
  [kTopDarjeelingAlertIdMbx7RecovFault] = kTopDarjeelingAlertPeripheralMbx7,
  [kTopDarjeelingAlertIdMbxJtagFatalFault] = kTopDarjeelingAlertPeripheralMbxJtag,
  [kTopDarjeelingAlertIdMbxJtagRecovFault] = kTopDarjeelingAlertPeripheralMbxJtag,
  [kTopDarjeelingAlertIdMbxPcie0FatalFault] = kTopDarjeelingAlertPeripheralMbxPcie0,
  [kTopDarjeelingAlertIdMbxPcie0RecovFault] = kTopDarjeelingAlertPeripheralMbxPcie0,
  [kTopDarjeelingAlertIdRvCoreIbexFatalSwErr] = kTopDarjeelingAlertPeripheralRvCoreIbex,
  [kTopDarjeelingAlertIdRvCoreIbexRecovSwErr] = kTopDarjeelingAlertPeripheralRvCoreIbex,
  [kTopDarjeelingAlertIdRvCoreIbexFatalHwErr] = kTopDarjeelingAlertPeripheralRvCoreIbex,
  [kTopDarjeelingAlertIdRvCoreIbexRecovHwErr] = kTopDarjeelingAlertPeripheralRvCoreIbex,
};
