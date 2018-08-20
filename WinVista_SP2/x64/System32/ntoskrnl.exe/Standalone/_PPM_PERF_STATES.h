typedef struct _PPM_PERF_STATE
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
} PPM_PERF_STATE, *PPPM_PERF_STATE; /* size: 0x0028 */

typedef struct _PPM_PERF_STATES
{
  /* 0x0000 */ unsigned long Count;
  /* 0x0004 */ unsigned long MaxFrequency;
  /* 0x0008 */ unsigned long PStateCap;
  /* 0x000c */ unsigned long TStateCap;
  /* 0x0010 */ unsigned long MaxPerfState;
  /* 0x0014 */ unsigned long MinPerfState;
  /* 0x0018 */ unsigned long LowestPState;
  /* 0x001c */ unsigned long IncreaseTime;
  /* 0x0020 */ unsigned long DecreaseTime;
  /* 0x0024 */ unsigned char BusyAdjThreshold;
  /* 0x0025 */ unsigned char Reserved;
  /* 0x0026 */ unsigned char ThrottleStatesOnly;
  /* 0x0027 */ unsigned char PolicyType;
  /* 0x0028 */ unsigned long TimerInterval;
  union // _TAG_UNNAMED_69
  {
    union
    {
      /* 0x002c */ unsigned long AsULONG;
      struct /* bitfield */
      {
        /* 0x002c */ unsigned long UsingHypervisor : 1; /* bit position: 0 */
        /* 0x002c */ unsigned long NoDomainAccounting : 1; /* bit position: 1 */
        /* 0x002c */ unsigned long IncreasePolicy : 2; /* bit position: 2 */
        /* 0x002c */ unsigned long DecreasePolicy : 2; /* bit position: 4 */
        /* 0x002c */ unsigned long Reserved : 26; /* bit position: 6 */
      }; /* bitfield */
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ Flags;
  /* 0x0030 */ unsigned __int64 TargetProcessors;
  /* 0x0038 */ void* PStateHandler /* function */;
  /* 0x0040 */ unsigned __int64 PStateContext;
  /* 0x0048 */ void* TStateHandler /* function */;
  /* 0x0050 */ unsigned __int64 TStateContext;
  /* 0x0058 */ void* FeedbackHandler /* function */;
  /* 0x0060 */ struct _PPM_DIA_STATS* DiaStats;
  /* 0x0068 */ unsigned long DiaStatsCount;
  /* 0x0070 */ struct _PPM_PERF_STATE State[1];
} PPM_PERF_STATES, *PPPM_PERF_STATES; /* size: 0x0098 */

