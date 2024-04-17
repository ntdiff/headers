typedef struct _MINIDUMP_LOCATION_DESCRIPTOR
{
  /* 0x0000 */ unsigned int DataSize;
  /* 0x0004 */ unsigned long Rva;
} MINIDUMP_LOCATION_DESCRIPTOR, *PMINIDUMP_LOCATION_DESCRIPTOR; /* size: 0x0008 */

typedef struct _MINIDUMP_MEMORY_DESCRIPTOR
{
  /* 0x0000 */ unsigned __int64 StartOfMemoryRange;
  /* 0x0008 */ struct _MINIDUMP_LOCATION_DESCRIPTOR Memory;
} MINIDUMP_MEMORY_DESCRIPTOR, *PMINIDUMP_MEMORY_DESCRIPTOR; /* size: 0x0010 */

typedef struct _MINIDUMP_MEMORY_LIST
{
  /* 0x0000 */ unsigned int NumberOfMemoryRanges;
  /* 0x0004 */ struct _MINIDUMP_MEMORY_DESCRIPTOR* MemoryRanges /* zero-length array */;
} MINIDUMP_MEMORY_LIST, *PMINIDUMP_MEMORY_LIST; /* size: 0x0004 */

