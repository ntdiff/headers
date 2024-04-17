typedef struct _MINIDUMP_MEMORY_INFO_LIST
{
  /* 0x0000 */ unsigned long SizeOfHeader;
  /* 0x0004 */ unsigned long SizeOfEntry;
  /* 0x0008 */ unsigned __int64 NumberOfEntries;
} MINIDUMP_MEMORY_INFO_LIST, *PMINIDUMP_MEMORY_INFO_LIST; /* size: 0x0010 */

