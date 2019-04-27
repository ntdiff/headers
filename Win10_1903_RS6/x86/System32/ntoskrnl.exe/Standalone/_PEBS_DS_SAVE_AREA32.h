typedef struct _PEBS_DS_SAVE_AREA32
{
  /* 0x0000 */ unsigned long BtsBufferBase;
  /* 0x0004 */ unsigned long BtsIndex;
  /* 0x0008 */ unsigned long BtsAbsoluteMaximum;
  /* 0x000c */ unsigned long BtsInterruptThreshold;
  /* 0x0010 */ unsigned long PebsBufferBase;
  /* 0x0014 */ unsigned long PebsIndex;
  /* 0x0018 */ unsigned long PebsAbsoluteMaximum;
  /* 0x001c */ unsigned long PebsInterruptThreshold;
  /* 0x0020 */ unsigned __int64 PebsGpCounterReset[8];
  /* 0x0060 */ unsigned __int64 PebsFixedCounterReset[4];
} PEBS_DS_SAVE_AREA32, *PPEBS_DS_SAVE_AREA32; /* size: 0x0080 */

