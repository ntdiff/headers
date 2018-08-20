typedef struct _POP_FX_ACCOUNTING
{
  /* 0x0000 */ unsigned long Lock;
  /* 0x0004 */ unsigned char Active;
  /* 0x0008 */ unsigned long DripsRequiredState;
  /* 0x000c */ long Level;
  /* 0x0010 */ __int64 ActiveStamp;
  /* 0x0018 */ unsigned __int64 CsActiveTime;
  /* 0x0020 */ __int64 CriticalActiveTime;
  /* 0x0028 */ unsigned __int64 CriticalActiveTimeBuckets[5];
  /* 0x0050 */ unsigned __int64 CsActiveTimeBuckets[5];
} POP_FX_ACCOUNTING, *PPOP_FX_ACCOUNTING; /* size: 0x0078 */

