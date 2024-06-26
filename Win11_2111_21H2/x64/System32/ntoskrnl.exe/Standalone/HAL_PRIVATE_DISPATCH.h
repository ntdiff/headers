struct HAL_PRIVATE_DISPATCH
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0008 */ void* HalHandlerForBus /* function */;
  /* 0x0010 */ void* HalHandlerForConfigSpace /* function */;
  /* 0x0018 */ void* HalLocateHiberRanges /* function */;
  /* 0x0020 */ void* HalRegisterBusHandler /* function */;
  /* 0x0028 */ void* HalSetWakeEnable /* function */;
  /* 0x0030 */ void* HalSetWakeAlarm /* function */;
  /* 0x0038 */ void* HalPciTranslateBusAddress /* function */;
  /* 0x0040 */ void* HalPciAssignSlotResources /* function */;
  /* 0x0048 */ void* HalHaltSystem /* function */;
  /* 0x0050 */ void* HalFindBusAddressTranslation /* function */;
  /* 0x0058 */ void* HalResetDisplay /* function */;
  /* 0x0060 */ void* HalAllocateMapRegisters /* function */;
  /* 0x0068 */ void* KdSetupPciDeviceForDebugging /* function */;
  /* 0x0070 */ void* KdReleasePciDeviceForDebugging /* function */;
  /* 0x0078 */ void* KdGetAcpiTablePhase0 /* function */;
  /* 0x0080 */ void* KdCheckPowerButton /* function */;
  /* 0x0088 */ void* HalVectorToIDTEntry /* function */;
  /* 0x0090 */ void* KdMapPhysicalMemory64 /* function */;
  /* 0x0098 */ void* KdUnmapVirtualAddress /* function */;
  /* 0x00a0 */ void* KdGetPciDataByOffset /* function */;
  /* 0x00a8 */ void* KdSetPciDataByOffset /* function */;
  /* 0x00b0 */ void* HalGetInterruptVectorOverride /* function */;
  /* 0x00b8 */ void* HalGetVectorInputOverride /* function */;
  /* 0x00c0 */ void* HalLoadMicrocode /* function */;
  /* 0x00c8 */ void* HalUnloadMicrocode /* function */;
  /* 0x00d0 */ void* HalPostMicrocodeUpdate /* function */;
  /* 0x00d8 */ void* HalAllocateMessageTargetOverride /* function */;
  /* 0x00e0 */ void* HalFreeMessageTargetOverride /* function */;
  /* 0x00e8 */ void* HalDpReplaceBegin /* function */;
  /* 0x00f0 */ void* HalDpReplaceTarget /* function */;
  /* 0x00f8 */ void* HalDpReplaceControl /* function */;
  /* 0x0100 */ void* HalDpReplaceEnd /* function */;
  /* 0x0108 */ void* HalPrepareForBugcheck /* function */;
  /* 0x0110 */ void* HalQueryWakeTime /* function */;
  /* 0x0118 */ void* HalReportIdleStateUsage /* function */;
  /* 0x0120 */ void* HalTscSynchronization /* function */;
  /* 0x0128 */ void* HalWheaInitProcessorGenericSection /* function */;
  /* 0x0130 */ void* HalStopLegacyUsbInterrupts /* function */;
  /* 0x0138 */ void* HalReadWheaPhysicalMemory /* function */;
  /* 0x0140 */ void* HalWriteWheaPhysicalMemory /* function */;
  /* 0x0148 */ void* HalDpMaskLevelTriggeredInterrupts /* function */;
  /* 0x0150 */ void* HalDpUnmaskLevelTriggeredInterrupts /* function */;
  /* 0x0158 */ void* HalDpGetInterruptReplayState /* function */;
  /* 0x0160 */ void* HalDpReplayInterrupts /* function */;
  /* 0x0168 */ void* HalQueryIoPortAccessSupported /* function */;
  /* 0x0170 */ void* KdSetupIntegratedDeviceForDebugging /* function */;
  /* 0x0178 */ void* KdReleaseIntegratedDeviceForDebugging /* function */;
  /* 0x0180 */ void* HalGetEnlightenmentInformation /* function */;
  /* 0x0188 */ void* HalAllocateEarlyPages /* function */;
  /* 0x0190 */ void* HalMapEarlyPages /* function */;
  /* 0x0198 */ void* Dummy1;
  /* 0x01a0 */ void* Dummy2;
  /* 0x01a8 */ void* HalNotifyProcessorFreeze /* function */;
  /* 0x01b0 */ void* HalPrepareProcessorForIdle /* function */;
  /* 0x01b8 */ void* HalRegisterLogRoutine /* function */;
  /* 0x01c0 */ void* HalResumeProcessorFromIdle /* function */;
  /* 0x01c8 */ void* Dummy;
  /* 0x01d0 */ void* HalVectorToIDTEntryEx /* function */;
  /* 0x01d8 */ void* HalSecondaryInterruptQueryPrimaryInformation /* function */;
  /* 0x01e0 */ void* HalMaskInterrupt /* function */;
  /* 0x01e8 */ void* HalUnmaskInterrupt /* function */;
  /* 0x01f0 */ void* HalIsInterruptTypeSecondary /* function */;
  /* 0x01f8 */ void* HalAllocateGsivForSecondaryInterrupt /* function */;
  /* 0x0200 */ void* HalAddInterruptRemapping /* function */;
  /* 0x0208 */ void* HalRemoveInterruptRemapping /* function */;
  /* 0x0210 */ void* HalSaveAndDisableHvEnlightenment /* function */;
  /* 0x0218 */ void* HalRestoreHvEnlightenment /* function */;
  /* 0x0220 */ void* HalFlushIoBuffersExternalCache /* function */;
  /* 0x0228 */ void* HalFlushExternalCache /* function */;
  /* 0x0230 */ void* HalPciEarlyRestore /* function */;
  /* 0x0238 */ void* HalGetProcessorId /* function */;
  /* 0x0240 */ void* HalAllocatePmcCounterSet /* function */;
  /* 0x0248 */ void* HalCollectPmcCounters /* function */;
  /* 0x0250 */ void* HalFreePmcCounterSet /* function */;
  /* 0x0258 */ void* HalProcessorHalt /* function */;
  /* 0x0260 */ void* HalTimerQueryCycleCounter /* function */;
  /* 0x0268 */ void* Dummy3;
  /* 0x0270 */ void* HalPciMarkHiberPhase /* function */;
  /* 0x0278 */ void* HalQueryProcessorRestartEntryPoint /* function */;
  /* 0x0280 */ void* HalRequestInterrupt /* function */;
  /* 0x0288 */ void* HalEnumerateUnmaskedInterrupts /* function */;
  /* 0x0290 */ void* HalFlushAndInvalidatePageExternalCache /* function */;
  /* 0x0298 */ void* KdEnumerateDebuggingDevices /* function */;
  /* 0x02a0 */ void* HalFlushIoRectangleExternalCache /* function */;
  /* 0x02a8 */ void* HalPowerEarlyRestore /* function */;
  /* 0x02b0 */ void* HalQueryCapsuleCapabilities /* function */;
  /* 0x02b8 */ void* HalUpdateCapsule /* function */;
  /* 0x02c0 */ void* HalPciMultiStageResumeCapable /* function */;
  /* 0x02c8 */ void* HalDmaFreeCrashDumpRegisters /* function */;
  /* 0x02d0 */ void* HalAcpiAoacCapable /* function */;
  /* 0x02d8 */ void* HalInterruptSetDestination /* function */;
  /* 0x02e0 */ void* HalGetClockConfiguration /* function */;
  /* 0x02e8 */ void* HalClockTimerActivate /* function */;
  /* 0x02f0 */ void* HalClockTimerInitialize /* function */;
  /* 0x02f8 */ void* HalClockTimerStop /* function */;
  /* 0x0300 */ void* HalClockTimerArm /* function */;
  /* 0x0308 */ void* HalTimerOnlyClockInterruptPending /* function */;
  /* 0x0310 */ void* HalAcpiGetMultiNode /* function */;
  /* 0x0318 */ void* HalPowerSetRebootHandler /* function */;
  /* 0x0320 */ void* HalIommuRegisterDispatchTable /* function */;
  /* 0x0328 */ void* HalTimerWatchdogStart /* function */;
  /* 0x0330 */ void* HalTimerWatchdogResetCountdown /* function */;
  /* 0x0338 */ void* HalTimerWatchdogStop /* function */;
  /* 0x0340 */ void* HalTimerWatchdogGeneratedLastReset /* function */;
  /* 0x0348 */ void* HalTimerWatchdogTriggerSystemReset /* function */;
  /* 0x0350 */ void* HalInterruptVectorDataToGsiv /* function */;
  /* 0x0358 */ void* HalInterruptGetHighestPriorityInterrupt /* function */;
  /* 0x0360 */ void* HalProcessorOn /* function */;
  /* 0x0368 */ void* HalProcessorOff /* function */;
  /* 0x0370 */ void* HalProcessorFreeze /* function */;
  /* 0x0378 */ void* HalDmaLinkDeviceObjectByToken /* function */;
  /* 0x0380 */ void* HalDmaCheckAdapterToken /* function */;
  /* 0x0388 */ void* Dummy4;
  /* 0x0390 */ void* HalTimerConvertPerformanceCounterToAuxiliaryCounter /* function */;
  /* 0x0398 */ void* HalTimerConvertAuxiliaryCounterToPerformanceCounter /* function */;
  /* 0x03a0 */ void* HalTimerQueryAuxiliaryCounterFrequency /* function */;
  /* 0x03a8 */ void* HalConnectThermalInterrupt /* function */;
  /* 0x03b0 */ void* HalIsEFIRuntimeActive /* function */;
  /* 0x03b8 */ void* HalTimerQueryAndResetRtcErrors /* function */;
  /* 0x03c0 */ void* HalAcpiLateRestore /* function */;
  /* 0x03c8 */ void* KdWatchdogDelayExpiration /* function */;
  /* 0x03d0 */ void* HalGetProcessorStats /* function */;
  /* 0x03d8 */ void* HalTimerWatchdogQueryDueTime /* function */;
  /* 0x03e0 */ void* HalConnectSyntheticInterrupt /* function */;
  /* 0x03e8 */ void* HalPreprocessNmi /* function */;
  /* 0x03f0 */ void* HalEnumerateEnvironmentVariablesWithFilter /* function */;
  /* 0x03f8 */ void* HalCaptureLastBranchRecordStack /* function */;
  /* 0x0400 */ void* HalClearLastBranchRecordStack /* function */;
  /* 0x0408 */ void* HalConfigureLastBranchRecord /* function */;
  /* 0x0410 */ void* HalGetLastBranchInformation /* function */;
  /* 0x0418 */ void* HalResumeLastBranchRecord /* function */;
  /* 0x0420 */ void* HalStartLastBranchRecord /* function */;
  /* 0x0428 */ void* HalStopLastBranchRecord /* function */;
  /* 0x0430 */ void* HalIommuBlockDevice /* function */;
  /* 0x0438 */ void* HalIommuUnblockDevice /* function */;
  /* 0x0440 */ void* HalGetIommuInterface /* function */;
  /* 0x0448 */ void* HalRequestGenericErrorRecovery /* function */;
  /* 0x0450 */ void* HalTimerQueryHostPerformanceCounter /* function */;
  /* 0x0458 */ void* HalTopologyQueryProcessorRelationships /* function */;
  /* 0x0460 */ void* HalInitPlatformDebugTriggers /* function */;
  /* 0x0468 */ void* HalRunPlatformDebugTriggers /* function */;
  /* 0x0470 */ void* HalTimerGetReferencePage /* function */;
  /* 0x0478 */ void* HalGetHiddenProcessorPowerInterface /* function */;
  /* 0x0480 */ void* HalGetHiddenProcessorPackageId /* function */;
  /* 0x0488 */ void* HalGetHiddenPackageProcessorCount /* function */;
  /* 0x0490 */ void* HalGetHiddenProcessorApicIdByIndex /* function */;
  /* 0x0498 */ void* HalRegisterHiddenProcessorIdleState /* function */;
  /* 0x04a0 */ void* HalIommuReportIommuFault /* function */;
  /* 0x04a8 */ void* HalIommuDmaRemappingCapable /* function */;
  /* 0x04b0 */ void* HalAllocatePmcCounterSetEx /* function */;
  /* 0x04b8 */ void* HalStartProfileInterruptEx /* function */;
  /* 0x04c0 */ void* HalGetIommuInterfaceEx /* function */;
  /* 0x04c8 */ void* HalNotifyIommuDomainPolicyChange /* function */;
  /* 0x04d0 */ void* HalPciGetDeviceLocationFromPhysicalAddress /* function */;
}; /* size: 0x04d8 */

