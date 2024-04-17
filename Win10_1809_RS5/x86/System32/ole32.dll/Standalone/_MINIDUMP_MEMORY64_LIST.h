typedef struct _MINIDUMP_MEMORY_DESCRIPTOR64
{
  /* 0x0000 */ unsigned __int64 StartOfMemoryRange;
  /* 0x0008 */ unsigned __int64 DataSize;
} MINIDUMP_MEMORY_DESCRIPTOR64, *PMINIDUMP_MEMORY_DESCRIPTOR64; /* size: 0x0010 */

typedef struct _MINIDUMP_MEMORY64_LIST
{
  /* 0x0000 */ unsigned __int64 NumberOfMemoryRanges;
  /* 0x0008 */ unsigned __int64 BaseRva;
  /* 0x0010 */ struct _MINIDUMP_MEMORY_DESCRIPTOR64* MemoryRanges /* zero-length array */;
} MINIDUMP_MEMORY64_LIST, *PMINIDUMP_MEMORY64_LIST; /* size: 0x0010 */

