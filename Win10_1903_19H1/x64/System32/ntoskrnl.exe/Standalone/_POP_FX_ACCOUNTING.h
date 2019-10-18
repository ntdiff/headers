typedef struct _POP_FX_ACTIVE_TIME_ACCOUNTING
{
  /* 0x0000 */ unsigned __int64 Total;
  /* 0x0008 */ unsigned __int64 Unattributed;
  /* 0x0010 */ unsigned __int64 Buckets[5];
  /* 0x0038 */ unsigned __int64 PerBucket[5];
} POP_FX_ACTIVE_TIME_ACCOUNTING, *PPOP_FX_ACTIVE_TIME_ACCOUNTING; /* size: 0x0060 */

typedef struct _POP_FX_ACCOUNTING
{
  /* 0x0000 */ unsigned __int64 Lock;
  /* 0x0008 */ unsigned char Active;
  /* 0x000c */ unsigned long DripsRequiredState;
  /* 0x0010 */ long Level;
  /* 0x0018 */ __int64 ActiveStamp;
  /* 0x0020 */ struct _POP_FX_ACTIVE_TIME_ACCOUNTING CsActiveTimeAccounting;
  /* 0x0080 */ struct _POP_FX_ACTIVE_TIME_ACCOUNTING CsCriticalActiveTimeAccounting;
} POP_FX_ACCOUNTING, *PPOP_FX_ACCOUNTING; /* size: 0x00e0 */

