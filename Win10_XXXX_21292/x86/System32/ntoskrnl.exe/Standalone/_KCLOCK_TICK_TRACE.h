typedef struct _KCLOCK_TICK_TRACE
{
  /* 0x0000 */ unsigned __int64 PerformanceCounter;
  /* 0x0008 */ unsigned __int64 PreInterruptTime;
  /* 0x0010 */ unsigned __int64 PostInterruptTime;
  /* 0x0018 */ unsigned __int64 TimeStampCounter;
  /* 0x0020 */ unsigned char IsClockOwner;
  /* 0x0021 */ char __PADDING__[7];
} KCLOCK_TICK_TRACE, *PKCLOCK_TICK_TRACE; /* size: 0x0028 */

