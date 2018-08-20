typedef struct _HAL_ENLIGHTENMENT_INFORMATION
{
  /* 0x0000 */ unsigned long Enlightenments;
  /* 0x0004 */ unsigned long HypervisorConnected;
  /* 0x0008 */ void* EndOfInterrupt /* function */;
  /* 0x000c */ void* ApicWriteIcr /* function */;
  /* 0x0010 */ unsigned long Reserved0;
  /* 0x0014 */ unsigned long SpinCountMask;
  /* 0x0018 */ void* LongSpinWait /* function */;
  /* 0x001c */ void* GetReferenceTime /* function */;
  /* 0x0020 */ void* SetSystemSleepProperty /* function */;
  /* 0x0024 */ void* EnterSleepState /* function */;
  /* 0x0028 */ void* NotifyDebugDeviceAvailable /* function */;
  /* 0x002c */ void* MapDeviceInterrupt /* function */;
  /* 0x0030 */ void* UnmapDeviceInterrupt /* function */;
  /* 0x0034 */ void* SetHpetConfig /* function */;
  /* 0x0038 */ void* NotifyHpetEnabled /* function */;
  /* 0x003c */ void* QueryAssociatedProcessors /* function */;
  /* 0x0040 */ void* ReadMultipleMsr /* function */;
  /* 0x0044 */ void* WriteMultipleMsr /* function */;
  /* 0x0048 */ void* ReadCpuid /* function */;
  /* 0x004c */ void* LpWritebackInvalidate /* function */;
  /* 0x0050 */ void* GetMachineCheckContext /* function */;
  /* 0x0054 */ void* SuspendPartition /* function */;
  /* 0x0058 */ void* ResumePartition /* function */;
  /* 0x005c */ void* SetSystemMachineCheckProperty /* function */;
  /* 0x0060 */ void* WheaErrorNotification /* function */;
} HAL_ENLIGHTENMENT_INFORMATION, *PHAL_ENLIGHTENMENT_INFORMATION; /* size: 0x0064 */

