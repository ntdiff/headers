typedef struct _PROC_IDLE_STATE_BUCKET
{
  /* 0x0000 */ unsigned __int64 TotalTime;
  /* 0x0008 */ unsigned __int64 MinTime;
  /* 0x0010 */ unsigned __int64 MaxTime;
  /* 0x0018 */ unsigned long Count;
  /* 0x001c */ long __PADDING__[1];
} PROC_IDLE_STATE_BUCKET, *PPROC_IDLE_STATE_BUCKET; /* size: 0x0020 */

typedef struct _PROC_IDLE_STATE_ACCOUNTING
{
  /* 0x0000 */ unsigned __int64 TotalTime;
  /* 0x0008 */ unsigned long CancelCount;
  /* 0x000c */ unsigned long FailureCount;
  /* 0x0010 */ unsigned long SuccessCount;
  /* 0x0014 */ unsigned long InvalidBucketIndex;
  /* 0x0018 */ unsigned __int64 MinTime;
  /* 0x0020 */ unsigned __int64 MaxTime;
  /* 0x0028 */ struct _PROC_IDLE_STATE_BUCKET IdleTimeBuckets[26];
} PROC_IDLE_STATE_ACCOUNTING, *PPROC_IDLE_STATE_ACCOUNTING; /* size: 0x0368 */

