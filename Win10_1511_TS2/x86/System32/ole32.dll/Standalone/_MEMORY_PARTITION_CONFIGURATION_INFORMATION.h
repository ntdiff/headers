typedef struct _MEMORY_PARTITION_CONFIGURATION_INFORMATION
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned long TotalNumberOfPages;
  /* 0x0008 */ unsigned long ResidentAvailablePages;
  /* 0x000c */ unsigned long AvailablePages;
  /* 0x0010 */ unsigned long CommittedPages;
  /* 0x0014 */ unsigned long CommitLimit;
  /* 0x0018 */ unsigned long PeakCommitment;
} MEMORY_PARTITION_CONFIGURATION_INFORMATION, *PMEMORY_PARTITION_CONFIGURATION_INFORMATION; /* size: 0x001c */

