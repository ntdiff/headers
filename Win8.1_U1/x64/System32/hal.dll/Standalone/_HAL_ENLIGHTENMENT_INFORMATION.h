typedef struct _HAL_ENLIGHTENMENT_INFORMATION
{
  /* 0x0000 */ unsigned long Enlightenments;
  /* 0x0004 */ unsigned long HypervisorConnected;
  /* 0x0008 */ void* EndOfInterrupt /* function */;
  /* 0x0010 */ void* ApicWriteIcr /* function */;
  /* 0x0018 */ unsigned long Reserved0;
  /* 0x001c */ unsigned long SpinCountMask;
  /* 0x0020 */ void* LongSpinWait /* function */;
  /* 0x0028 */ void* GetReferenceTime /* function */;
  /* 0x0030 */ void* SetSystemSleepProperty /* function */;
  /* 0x0038 */ void* EnterSleepState /* function */;
  /* 0x0040 */ void* NotifyDebugDeviceAvailable /* function */;
  /* 0x0048 */ void* MapDeviceInterrupt /* function */;
  /* 0x0050 */ void* UnmapDeviceInterrupt /* function */;
  /* 0x0058 */ void* SetHpetConfig /* function */;
  /* 0x0060 */ void* NotifyHpetEnabled /* function */;
  /* 0x0068 */ void* QueryAssociatedProcessors /* function */;
  /* 0x0070 */ void* ReadMultipleMsr /* function */;
  /* 0x0078 */ void* WriteMultipleMsr /* function */;
  /* 0x0080 */ void* ReadCpuid /* function */;
  /* 0x0088 */ void* LpWritebackInvalidate /* function */;
  /* 0x0090 */ void* GetMachineCheckContext /* function */;
  /* 0x0098 */ void* SuspendPartition /* function */;
  /* 0x00a0 */ void* ResumePartition /* function */;
  /* 0x00a8 */ void* SetSystemMachineCheckProperty /* function */;
  /* 0x00b0 */ void* WheaErrorNotification /* function */;
} HAL_ENLIGHTENMENT_INFORMATION, *PHAL_ENLIGHTENMENT_INFORMATION; /* size: 0x00b8 */

