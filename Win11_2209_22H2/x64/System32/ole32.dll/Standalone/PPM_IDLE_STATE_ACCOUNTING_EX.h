struct PPM_IDLE_STATE_BUCKET_EX
{
  /* 0x0000 */ unsigned __int64 TotalTimeUs;
  /* 0x0008 */ unsigned long MinTimeUs;
  /* 0x000c */ unsigned long MaxTimeUs;
  /* 0x0010 */ unsigned long Count;
  /* 0x0014 */ long __PADDING__[1];
}; /* size: 0x0018 */

struct PPM_IDLE_STATE_ACCOUNTING_EX
{
  /* 0x0000 */ unsigned __int64 TotalTime;
  /* 0x0008 */ unsigned long IdleTransitions;
  /* 0x000c */ unsigned long FailedTransitions;
  /* 0x0010 */ unsigned long InvalidBucketIndex;
  /* 0x0014 */ unsigned long MinTimeUs;
  /* 0x0018 */ unsigned long MaxTimeUs;
  /* 0x001c */ unsigned long CancelledTransitions;
  /* 0x0020 */ struct PPM_IDLE_STATE_BUCKET_EX IdleTimeBuckets[16];
}; /* size: 0x01a0 */

