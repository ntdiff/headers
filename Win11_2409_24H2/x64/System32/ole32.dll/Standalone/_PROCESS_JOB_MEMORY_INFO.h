typedef struct _PROCESS_JOB_MEMORY_INFO
{
  /* 0x0000 */ unsigned __int64 SharedCommitUsage;
  /* 0x0008 */ unsigned __int64 PrivateCommitUsage;
  /* 0x0010 */ unsigned __int64 PeakPrivateCommitUsage;
  /* 0x0018 */ unsigned __int64 PrivateCommitLimit;
  /* 0x0020 */ unsigned __int64 TotalCommitLimit;
} PROCESS_JOB_MEMORY_INFO, *PPROCESS_JOB_MEMORY_INFO; /* size: 0x0028 */

