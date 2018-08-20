typedef struct _PEBS_DS_SAVE_AREA
{
  /* 0x0000 */ unsigned __int64 BtsBufferBase;
  /* 0x0008 */ unsigned __int64 BtsIndex;
  /* 0x0010 */ unsigned __int64 BtsAbsoluteMaximum;
  /* 0x0018 */ unsigned __int64 BtsInterruptThreshold;
  /* 0x0020 */ unsigned __int64 PebsBufferBase;
  /* 0x0028 */ unsigned __int64 PebsIndex;
  /* 0x0030 */ unsigned __int64 PebsAbsoluteMaximum;
  /* 0x0038 */ unsigned __int64 PebsInterruptThreshold;
  /* 0x0040 */ unsigned __int64 PebsCounterReset0;
  /* 0x0048 */ unsigned __int64 PebsCounterReset1;
  /* 0x0050 */ unsigned __int64 PebsCounterReset2;
  /* 0x0058 */ unsigned __int64 PebsCounterReset3;
} PEBS_DS_SAVE_AREA, *PPEBS_DS_SAVE_AREA; /* size: 0x0060 */

