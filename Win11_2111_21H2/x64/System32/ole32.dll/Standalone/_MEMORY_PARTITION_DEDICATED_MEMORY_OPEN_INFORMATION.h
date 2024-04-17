typedef struct _MEMORY_PARTITION_DEDICATED_MEMORY_OPEN_INFORMATION
{
  /* 0x0000 */ unsigned __int64 DedicatedMemoryTypeId;
  /* 0x0008 */ unsigned long HandleAttributes;
  /* 0x000c */ unsigned long DesiredAccess;
  /* 0x0010 */ void* DedicatedMemoryPartitionHandle;
} MEMORY_PARTITION_DEDICATED_MEMORY_OPEN_INFORMATION, *PMEMORY_PARTITION_DEDICATED_MEMORY_OPEN_INFORMATION; /* size: 0x0018 */

