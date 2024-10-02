typedef struct _PERF_CONTROL_STATE_SELECTION
{
  /* 0x0000 */ unsigned __int64 SelectedState;
  /* 0x0008 */ unsigned __int64 SelectedResourcePriority;
  /* 0x0010 */ unsigned long SelectedPercent;
  /* 0x0014 */ unsigned long SelectedFrequency;
  /* 0x0018 */ unsigned long MinPercent;
  /* 0x001c */ unsigned long MaxPercent;
  /* 0x0020 */ unsigned long TolerancePercent;
  /* 0x0024 */ unsigned long EppPercent;
  /* 0x0028 */ unsigned long AutonomousActivityWindow;
  /* 0x002c */ unsigned long ResourcePriorityPercent;
  /* 0x0030 */ unsigned char Autonomous;
  /* 0x0031 */ unsigned char InheritFromDomain;
  /* 0x0032 */ char __PADDING__[6];
} PERF_CONTROL_STATE_SELECTION, *PPERF_CONTROL_STATE_SELECTION; /* size: 0x0038 */

