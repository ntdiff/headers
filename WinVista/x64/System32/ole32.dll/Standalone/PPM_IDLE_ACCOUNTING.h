struct PPM_IDLE_STATE_ACCOUNTING
{
  /* 0x0000 */ unsigned long IdleTransitions;
  /* 0x0004 */ unsigned long FailedTransitions;
  /* 0x0008 */ unsigned long InvalidBucketIndex;
  /* 0x0010 */ unsigned __int64 TotalTime;
  /* 0x0018 */ unsigned long IdleTimeBuckets[6];
}; /* size: 0x0030 */

struct PPM_IDLE_ACCOUNTING
{
  /* 0x0000 */ unsigned long StateCount;
  /* 0x0004 */ unsigned long TotalTransitions;
  /* 0x0008 */ unsigned long ResetCount;
  /* 0x0010 */ unsigned __int64 StartTime;
  /* 0x0018 */ struct PPM_IDLE_STATE_ACCOUNTING State[1];
}; /* size: 0x0048 */

