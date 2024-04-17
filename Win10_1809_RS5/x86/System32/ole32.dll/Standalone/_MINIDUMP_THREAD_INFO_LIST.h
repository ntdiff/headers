typedef struct _MINIDUMP_THREAD_INFO_LIST
{
  /* 0x0000 */ unsigned long SizeOfHeader;
  /* 0x0004 */ unsigned long SizeOfEntry;
  /* 0x0008 */ unsigned long NumberOfEntries;
} MINIDUMP_THREAD_INFO_LIST, *PMINIDUMP_THREAD_INFO_LIST; /* size: 0x000c */

