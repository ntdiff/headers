typedef struct _MEMORY_PARTITION_CONFIGURATION_INFORMATION
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0008 */ unsigned __int64 TotalNumberOfPages;
  /* 0x0010 */ unsigned __int64 ResidentAvailablePages;
  /* 0x0018 */ unsigned __int64 AvailablePages;
  /* 0x0020 */ unsigned __int64 CommittedPages;
  /* 0x0028 */ unsigned __int64 CommitLimit;
  /* 0x0030 */ unsigned __int64 PeakCommitment;
} MEMORY_PARTITION_CONFIGURATION_INFORMATION, *PMEMORY_PARTITION_CONFIGURATION_INFORMATION; /* size: 0x0038 */

