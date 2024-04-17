typedef struct _MEMORY_PARTITION_PAGE_RANGE
{
  /* 0x0000 */ unsigned long StartPage;
  /* 0x0004 */ unsigned long NumberOfPages;
} MEMORY_PARTITION_PAGE_RANGE, *PMEMORY_PARTITION_PAGE_RANGE; /* size: 0x0008 */

typedef struct _MEMORY_PARTITION_INITIAL_ADD_INFORMATION
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned long NumberOfRanges;
  /* 0x0008 */ unsigned long NumberOfPagesAdded;
  /* 0x000c */ struct _MEMORY_PARTITION_PAGE_RANGE PartitionRanges[1];
} MEMORY_PARTITION_INITIAL_ADD_INFORMATION, *PMEMORY_PARTITION_INITIAL_ADD_INFORMATION; /* size: 0x0014 */

