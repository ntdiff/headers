typedef enum _MEM_DEDICATED_ATTRIBUTE_TYPE
{
  MemDedicatedAttributeReadBandwidth = 0,
  MemDedicatedAttributeReadLatency = 1,
  MemDedicatedAttributeWriteBandwidth = 2,
  MemDedicatedAttributeWriteLatency = 3,
  MemDedicatedAttributeMax = 4,
} MEM_DEDICATED_ATTRIBUTE_TYPE, *PMEM_DEDICATED_ATTRIBUTE_TYPE;

typedef struct _MEMORY_PARTITION_DEDICATED_MEMORY_ATTRIBUTE
{
  /* 0x0000 */ enum _MEM_DEDICATED_ATTRIBUTE_TYPE Type;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ unsigned __int64 Value;
} MEMORY_PARTITION_DEDICATED_MEMORY_ATTRIBUTE, *PMEMORY_PARTITION_DEDICATED_MEMORY_ATTRIBUTE; /* size: 0x0010 */

