typedef struct _MEMORY_PARTITION_CONFIGURATION_INFORMATION
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned long NumaNode;
  /* 0x0008 */ unsigned long Channel;
  /* 0x000c */ unsigned long NumberOfNumaNodes;
  /* 0x0010 */ unsigned __int64 ResidentAvailablePages;
  /* 0x0018 */ unsigned __int64 CommittedPages;
  /* 0x0020 */ unsigned __int64 CommitLimit;
  /* 0x0028 */ unsigned __int64 PeakCommitment;
  /* 0x0030 */ unsigned __int64 TotalNumberOfPages;
  /* 0x0038 */ unsigned __int64 AvailablePages;
  /* 0x0040 */ unsigned __int64 ZeroPages;
  /* 0x0048 */ unsigned __int64 FreePages;
  /* 0x0050 */ unsigned __int64 StandbyPages;
  /* 0x0058 */ unsigned __int64 StandbyPageCountByPriority[8];
  /* 0x0098 */ unsigned __int64 RepurposedPagesByPriority[8];
  /* 0x00d8 */ unsigned __int64 MaximumCommitLimit;
  /* 0x00e0 */ unsigned __int64 DonatedPagesToPartitions;
  /* 0x00e8 */ unsigned long PartitionId;
  /* 0x00ec */ long __PADDING__[1];
} MEMORY_PARTITION_CONFIGURATION_INFORMATION, *PMEMORY_PARTITION_CONFIGURATION_INFORMATION; /* size: 0x00f0 */

