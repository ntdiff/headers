typedef struct _RTL_SEGMENT_HEAP_MEMORY_SOURCE
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned long MemoryTypeMask;
  /* 0x0008 */ unsigned long NumaNode;
  /* 0x000c */ void* PartitionHandle;
  /* 0x0010 */ unsigned long Reserved[2];
} RTL_SEGMENT_HEAP_MEMORY_SOURCE, *PRTL_SEGMENT_HEAP_MEMORY_SOURCE; /* size: 0x0018 */

typedef struct _RTL_SEGMENT_HEAP_PARAMETERS
{
  /* 0x0000 */ unsigned short Version;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ struct _RTL_SEGMENT_HEAP_MEMORY_SOURCE MemorySource;
  /* 0x0020 */ unsigned long Reserved[4];
} RTL_SEGMENT_HEAP_PARAMETERS, *PRTL_SEGMENT_HEAP_PARAMETERS; /* size: 0x0030 */

