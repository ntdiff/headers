typedef struct _MEMORY_PARTITION_TRANSFER_INFORMATION
{
  /* 0x0000 */ unsigned __int64 NumberOfPages;
  /* 0x0008 */ unsigned long NumaNode;
  /* 0x000c */ unsigned long Flags;
} MEMORY_PARTITION_TRANSFER_INFORMATION, *PMEMORY_PARTITION_TRANSFER_INFORMATION; /* size: 0x0010 */

