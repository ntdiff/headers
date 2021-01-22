typedef struct _KCLOCK_INCREMENT_TRACE
{
  /* 0x0000 */ unsigned long ActualIncrement;
  /* 0x0004 */ unsigned long RequestedIncrement;
  /* 0x0008 */ unsigned __int64 InterruptTime;
  /* 0x0010 */ unsigned __int64 PerformanceCounter;
  /* 0x0018 */ unsigned char OneShot;
  /* 0x0019 */ char __PADDING__[7];
} KCLOCK_INCREMENT_TRACE, *PKCLOCK_INCREMENT_TRACE; /* size: 0x0020 */

