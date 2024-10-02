typedef struct _MEMORY_PARTITION_PAGE_RANGE
{
  /* 0x0000 */ unsigned __int64 StartPage;
  /* 0x0008 */ unsigned __int64 NumberOfPages;
} MEMORY_PARTITION_PAGE_RANGE, *PMEMORY_PARTITION_PAGE_RANGE; /* size: 0x0010 */

typedef struct _MEMORY_PARTITION_INITIAL_ADD_INFORMATION
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned long NumberOfRanges;
  /* 0x0008 */ unsigned __int64 NumberOfPagesAdded;
  /* 0x0010 */ unsigned __int64 DedicatedMemoryAttributes[4];
  /* 0x0030 */ struct _MEMORY_PARTITION_PAGE_RANGE PartitionRanges[1];
} MEMORY_PARTITION_INITIAL_ADD_INFORMATION, *PMEMORY_PARTITION_INITIAL_ADD_INFORMATION; /* size: 0x0040 */

