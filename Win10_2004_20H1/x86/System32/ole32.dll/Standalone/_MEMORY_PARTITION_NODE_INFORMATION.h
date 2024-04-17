typedef struct _MEMORY_PARTITION_NODE_INFORMATION
{
  /* 0x0000 */ unsigned long NumaNodeCount;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ struct _MEMORY_PARTITION_NODE_PAGE_INFORMATION* NodePageInformation;
} MEMORY_PARTITION_NODE_INFORMATION, *PMEMORY_PARTITION_NODE_INFORMATION; /* size: 0x000c */

