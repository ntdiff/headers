typedef struct _PCW_PROCESSOR_INFO
{
  /* 0x0000 */ unsigned __int64 IdleTime;
  /* 0x0008 */ unsigned __int64 AvailableTime;
  /* 0x0010 */ unsigned __int64 UserTime;
  /* 0x0018 */ unsigned __int64 KernelTime;
  /* 0x0020 */ unsigned long Interrupts;
  /* 0x0028 */ unsigned __int64 DpcTime;
  /* 0x0030 */ unsigned __int64 InterruptTime;
  /* 0x0038 */ unsigned long DpcCount;
  /* 0x003c */ unsigned long DpcRate;
  /* 0x0040 */ unsigned __int64 C1Time;
  /* 0x0048 */ unsigned __int64 C2Time;
  /* 0x0050 */ unsigned __int64 C3Time;
  /* 0x0058 */ unsigned __int64 C1Transitions;
  /* 0x0060 */ unsigned __int64 C2Transitions;
  /* 0x0068 */ unsigned __int64 C3Transitions;
  /* 0x0070 */ unsigned long ParkingStatus;
  /* 0x0074 */ unsigned long CurrentFrequency;
  /* 0x0078 */ unsigned long PercentMaxFrequency;
  /* 0x007c */ unsigned long StateFlags;
} PCW_PROCESSOR_INFO, *PPCW_PROCESSOR_INFO; /* size: 0x0080 */

