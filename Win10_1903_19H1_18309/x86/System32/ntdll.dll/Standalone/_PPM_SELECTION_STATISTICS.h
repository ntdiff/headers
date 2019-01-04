typedef struct _PPM_SELECTION_STATISTICS
{
  /* 0x0000 */ unsigned __int64 SelectedCount;
  /* 0x0008 */ unsigned __int64 VetoCount;
  /* 0x0010 */ unsigned __int64 PreVetoCount;
  /* 0x0018 */ unsigned __int64 WrongProcessorCount;
  /* 0x0020 */ unsigned __int64 LatencyCount;
  /* 0x0028 */ unsigned __int64 IdleDurationCount;
  /* 0x0030 */ unsigned __int64 DeviceDependencyCount;
  /* 0x0038 */ unsigned __int64 ProcessorDependencyCount;
  /* 0x0040 */ unsigned __int64 PlatformOnlyCount;
  /* 0x0048 */ unsigned __int64 InterruptibleCount;
  /* 0x0050 */ unsigned __int64 LegacyOverrideCount;
  /* 0x0058 */ unsigned __int64 CstateCheckCount;
  /* 0x0060 */ unsigned __int64 NoCStateCount;
  /* 0x0068 */ unsigned __int64 CoordinatedDependencyCount;
  /* 0x0070 */ unsigned __int64 NotClockOwnerCount;
  /* 0x0078 */ struct _PPM_VETO_ACCOUNTING* PreVetoAccounting;
  /* 0x007c */ long __PADDING__[1];
} PPM_SELECTION_STATISTICS, *PPPM_SELECTION_STATISTICS; /* size: 0x0080 */

