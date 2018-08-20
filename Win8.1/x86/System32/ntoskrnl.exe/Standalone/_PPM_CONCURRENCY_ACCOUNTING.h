typedef struct _PPM_CONCURRENCY_ACCOUNTING
{
  /* 0x0000 */ unsigned long Lock;
  /* 0x0004 */ unsigned long Processors;
  /* 0x0008 */ unsigned long ActiveProcessors;
  /* 0x0010 */ unsigned __int64 LastUpdateTime;
  /* 0x0018 */ unsigned __int64 TotalTime;
  /* 0x0020 */ unsigned __int64 AccumulatedTime[1];
} PPM_CONCURRENCY_ACCOUNTING, *PPPM_CONCURRENCY_ACCOUNTING; /* size: 0x0028 */

