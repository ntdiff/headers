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

typedef struct _PEBS_DS_SAVE_AREA64
{
  /* 0x0000 */ unsigned __int64 BtsBufferBase;
  /* 0x0008 */ unsigned __int64 BtsIndex;
  /* 0x0010 */ unsigned __int64 BtsAbsoluteMaximum;
  /* 0x0018 */ unsigned __int64 BtsInterruptThreshold;
  /* 0x0020 */ unsigned __int64 PebsBufferBase;
  /* 0x0028 */ unsigned __int64 PebsIndex;
  /* 0x0030 */ unsigned __int64 PebsAbsoluteMaximum;
  /* 0x0038 */ unsigned __int64 PebsInterruptThreshold;
  /* 0x0040 */ unsigned __int64 PebsGpCounterReset[8];
  /* 0x0080 */ unsigned __int64 PebsFixedCounterReset[4];
} PEBS_DS_SAVE_AREA64, *PPEBS_DS_SAVE_AREA64; /* size: 0x00a0 */

typedef struct _PEBS_DS_SAVE_AREA
{
  union
  {
    /* 0x0000 */ struct _PEBS_DS_SAVE_AREA32 As32Bit;
    /* 0x0000 */ struct _PEBS_DS_SAVE_AREA64 As64Bit;
  }; /* size: 0x00a0 */
} PEBS_DS_SAVE_AREA, *PPEBS_DS_SAVE_AREA; /* size: 0x00a0 */

