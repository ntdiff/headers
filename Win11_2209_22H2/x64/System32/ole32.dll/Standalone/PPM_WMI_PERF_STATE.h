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

