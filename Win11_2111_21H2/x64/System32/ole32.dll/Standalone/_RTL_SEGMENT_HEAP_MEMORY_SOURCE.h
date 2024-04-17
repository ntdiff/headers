typedef struct _RTL_SEGMENT_HEAP_MEMORY_SOURCE
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned long MemoryTypeMask;
  /* 0x0008 */ unsigned long NumaNode;
  /* 0x0010 */ void* PartitionHandle;
  /* 0x0018 */ unsigned __int64 Reserved[2];
} RTL_SEGMENT_HEAP_MEMORY_SOURCE, *PRTL_SEGMENT_HEAP_MEMORY_SOURCE; /* size: 0x0028 */

