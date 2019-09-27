typedef struct _POP_FX_ACTIVE_TIME_ACCOUNTING
{
  /* 0x0000 */ unsigned __int64 Total;
  /* 0x0008 */ unsigned __int64 Unattributed;
  /* 0x0010 */ unsigned __int64 Buckets[5];
  /* 0x0038 */ unsigned __int64 PerBucket[5];
} POP_FX_ACTIVE_TIME_ACCOUNTING, *PPOP_FX_ACTIVE_TIME_ACCOUNTING; /* size: 0x0060 */

