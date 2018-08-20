typedef struct _PROC_IDLE_STATE_BUCKET
{
  /* 0x0000 */ unsigned __int64 TotalTime;
  /* 0x0008 */ unsigned __int64 MinTime;
  /* 0x0010 */ unsigned __int64 MaxTime;
  /* 0x0018 */ unsigned long Count;
  /* 0x001c */ long __PADDING__[1];
} PROC_IDLE_STATE_BUCKET, *PPROC_IDLE_STATE_BUCKET; /* size: 0x0020 */

typedef struct _PLATFORM_IDLE_STATE_ACCOUNTING
{
  /* 0x0000 */ unsigned long CancelCount;
  /* 0x0004 */ unsigned long FailureCount;
  /* 0x0008 */ unsigned long SuccessCount;
  /* 0x0010 */ unsigned __int64 MaxTime;
  /* 0x0018 */ unsigned __int64 MinTime;
  /* 0x0020 */ unsigned __int64 TotalTime;
  /* 0x0028 */ unsigned long InvalidBucketIndex;
  /* 0x0030 */ struct _PROC_IDLE_STATE_BUCKET IdleTimeBuckets[26];
} PLATFORM_IDLE_STATE_ACCOUNTING, *PPLATFORM_IDLE_STATE_ACCOUNTING; /* size: 0x0370 */

