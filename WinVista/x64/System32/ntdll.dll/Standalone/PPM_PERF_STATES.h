struct PPM_PERF_STATE
{
  /* 0x0000 */ unsigned long Frequency;
  /* 0x0004 */ unsigned long Power;
  /* 0x0008 */ unsigned char PercentFrequency;
  /* 0x0009 */ unsigned char IncreaseLevel;
  /* 0x000a */ unsigned char DecreaseLevel;
  /* 0x000b */ unsigned char Type;
  /* 0x0010 */ unsigned __int64 Control;
  /* 0x0018 */ unsigned __int64 Status;
  /* 0x0020 */ unsigned long TotalHitCount;
  /* 0x0024 */ unsigned long DesiredCount;
}; /* size: 0x0028 */

struct PPM_PERF_STATES
{
  /* 0x0000 */ unsigned long Count;
  /* 0x0004 */ unsigned long MaxFrequency;
  /* 0x0008 */ unsigned long MaxPerfState;
  /* 0x000c */ unsigned long MinPerfState;
  /* 0x0010 */ unsigned long LowestPState;
  /* 0x0014 */ unsigned long IncreaseTime;
  /* 0x0018 */ unsigned long DecreaseTime;
  /* 0x001c */ unsigned char BusyAdjThreshold;
  /* 0x001d */ unsigned char Reserved;
  /* 0x001e */ unsigned char ThrottleStatesOnly;
  /* 0x001f */ unsigned char PolicyType;
  /* 0x0020 */ unsigned long TimerInterval;
  union
  {
    union
    {
      /* 0x0024 */ unsigned long AsULONG;
      struct /* bitfield */
      {
        /* 0x0024 */ unsigned long UsingHypervisor : 1; /* bit position: 0 */
        /* 0x0024 */ unsigned long NoDomainAccounting : 1; /* bit position: 1 */
        /* 0x0024 */ unsigned long IncreasePolicy : 2; /* bit position: 2 */
        /* 0x0024 */ unsigned long DecreasePolicy : 2; /* bit position: 4 */
        /* 0x0024 */ unsigned long Reserved : 26; /* bit position: 6 */
      }; /* bitfield */
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ Flags;
  /* 0x0028 */ unsigned __int64 TargetProcessors;
  /* 0x0030 */ void* PStateHandler /* function */;
  /* 0x0038 */ unsigned __int64 PStateContext;
  /* 0x0040 */ void* TStateHandler /* function */;
  /* 0x0048 */ unsigned __int64 TStateContext;
  /* 0x0050 */ void* FeedbackHandler /* function */;
  /* 0x0058 */ struct PPM_PERF_STATE State[1];
}; /* size: 0x0080 */

