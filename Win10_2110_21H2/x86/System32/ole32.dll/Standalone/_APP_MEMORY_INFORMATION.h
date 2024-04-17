typedef struct _APP_MEMORY_INFORMATION
{
  /* 0x0000 */ unsigned __int64 AvailableCommit;
  /* 0x0008 */ unsigned __int64 PrivateCommitUsage;
  /* 0x0010 */ unsigned __int64 PeakPrivateCommitUsage;
  /* 0x0018 */ unsigned __int64 TotalCommitUsage;
} APP_MEMORY_INFORMATION, *PAPP_MEMORY_INFORMATION; /* size: 0x0020 */

