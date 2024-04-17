typedef struct _MEMORY_PARTITION_CONFIGURATION_INFORMATION
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned long NumaNode;
  /* 0x0008 */ unsigned long Channel;
  /* 0x000c */ unsigned long NumberOfNumaNodes;
  /* 0x0010 */ unsigned long ResidentAvailablePages;
  /* 0x0014 */ unsigned long CommittedPages;
  /* 0x0018 */ unsigned long CommitLimit;
  /* 0x001c */ unsigned long PeakCommitment;
  /* 0x0020 */ unsigned long TotalNumberOfPages;
  /* 0x0024 */ unsigned long AvailablePages;
  /* 0x0028 */ unsigned long ZeroPages;
  /* 0x002c */ unsigned long FreePages;
  /* 0x0030 */ unsigned long StandbyPages;
} MEMORY_PARTITION_CONFIGURATION_INFORMATION, *PMEMORY_PARTITION_CONFIGURATION_INFORMATION; /* size: 0x0034 */

