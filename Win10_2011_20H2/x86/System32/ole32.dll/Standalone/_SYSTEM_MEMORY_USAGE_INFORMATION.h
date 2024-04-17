typedef struct _SYSTEM_MEMORY_USAGE_INFORMATION
{
  /* 0x0000 */ unsigned __int64 TotalPhysicalBytes;
  /* 0x0008 */ unsigned __int64 AvailableBytes;
  /* 0x0010 */ __int64 ResidentAvailableBytes;
  /* 0x0018 */ unsigned __int64 CommittedBytes;
  /* 0x0020 */ unsigned __int64 SharedCommittedBytes;
  /* 0x0028 */ unsigned __int64 CommitLimitBytes;
  /* 0x0030 */ unsigned __int64 PeakCommitmentBytes;
} SYSTEM_MEMORY_USAGE_INFORMATION, *PSYSTEM_MEMORY_USAGE_INFORMATION; /* size: 0x0038 */

