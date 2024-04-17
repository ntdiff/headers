typedef struct _MEMORY_PARTITION_CREATE_LARGE_PAGES_INFORMATION
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned long NumaNode;
  /* 0x0008 */ unsigned long LargePageSize;
  /* 0x000c */ unsigned long NumberOfLargePagesToCreate;
  /* 0x0010 */ unsigned long NumberOfLargePagesCreated;
} MEMORY_PARTITION_CREATE_LARGE_PAGES_INFORMATION, *PMEMORY_PARTITION_CREATE_LARGE_PAGES_INFORMATION; /* size: 0x0014 */

