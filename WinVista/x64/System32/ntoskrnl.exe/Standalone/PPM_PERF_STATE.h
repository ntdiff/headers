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

