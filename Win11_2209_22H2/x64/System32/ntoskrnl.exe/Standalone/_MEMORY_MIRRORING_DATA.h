typedef struct _MEMORY_MIRRORING_DATA
{
  /* 0x0000 */ unsigned long MemoryRangeCount;
  /* 0x0004 */ unsigned long IoSpaceRangeCount;
  /* 0x0008 */ struct _LOADER_MEMORY_RANGE* MemoryRanges;
  /* 0x0010 */ struct _LOADER_MEMORY_RANGE* IoSpaceRanges;
} MEMORY_MIRRORING_DATA, *PMEMORY_MIRRORING_DATA; /* size: 0x0018 */

