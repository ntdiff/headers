struct PPM_WMI_PERF_STATE
{
  /* 0x0000 */ unsigned long Frequency;
  /* 0x0004 */ unsigned long Power;
  /* 0x0008 */ unsigned char PercentFrequency;
  /* 0x0009 */ unsigned char IncreaseLevel;
  /* 0x000a */ unsigned char DecreaseLevel;
  /* 0x000b */ unsigned char Type;
  /* 0x000c */ unsigned long IncreaseTime;
  /* 0x0010 */ unsigned long DecreaseTime;
  /* 0x0018 */ unsigned __int64 Control;
  /* 0x0020 */ unsigned __int64 Status;
  /* 0x0028 */ unsigned long HitCount;
  /* 0x002c */ unsigned long Reserved1;
  /* 0x0030 */ unsigned __int64 Reserved2;
  /* 0x0038 */ unsigned __int64 Reserved3;
}; /* size: 0x0040 */

struct PPM_WMI_PERF_STATES_EX
{
  /* 0x0000 */ unsigned long Count;
  /* 0x0004 */ unsigned long MaxFrequency;
  /* 0x0008 */ unsigned long CurrentState;
  /* 0x000c */ unsigned long MaxPerfState;
  /* 0x0010 */ unsigned long MinPerfState;
  /* 0x0014 */ unsigned long LowestPerfState;
  /* 0x0018 */ unsigned long ThermalConstraint;
  /* 0x001c */ unsigned char BusyAdjThreshold;
  /* 0x001d */ unsigned char PolicyType;
  /* 0x001e */ unsigned char Type;
  /* 0x001f */ unsigned char Reserved;
  /* 0x0020 */ unsigned long TimerInterval;
  /* 0x0024 */ void* TargetProcessors;
  /* 0x0028 */ unsigned long PStateHandler;
  /* 0x002c */ unsigned long PStateContext;
  /* 0x0030 */ unsigned long TStateHandler;
  /* 0x0034 */ unsigned long TStateContext;
  /* 0x0038 */ unsigned long FeedbackHandler;
  /* 0x003c */ unsigned long Reserved1;
  /* 0x0040 */ unsigned __int64 Reserved2;
  /* 0x0048 */ struct PPM_WMI_PERF_STATE State[1];
}; /* size: 0x0088 */

