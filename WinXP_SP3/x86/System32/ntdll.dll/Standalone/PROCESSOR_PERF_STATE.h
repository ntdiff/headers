struct PROCESSOR_PERF_STATE
{
  /* 0x0000 */ unsigned char PercentFrequency;
  /* 0x0001 */ unsigned char MinCapacity;
  /* 0x0002 */ unsigned short Power;
  /* 0x0004 */ unsigned char IncreaseLevel;
  /* 0x0005 */ unsigned char DecreaseLevel;
  /* 0x0006 */ unsigned short Flags;
  /* 0x0008 */ unsigned long IncreaseTime;
  /* 0x000c */ unsigned long DecreaseTime;
  /* 0x0010 */ unsigned long IncreaseCount;
  /* 0x0014 */ unsigned long DecreaseCount;
  /* 0x0018 */ unsigned __int64 PerformanceTime;
}; /* size: 0x0020 */

