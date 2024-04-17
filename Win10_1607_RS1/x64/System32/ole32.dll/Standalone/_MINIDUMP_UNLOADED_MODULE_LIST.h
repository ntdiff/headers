typedef struct _MINIDUMP_UNLOADED_MODULE_LIST
{
  /* 0x0000 */ unsigned int SizeOfHeader;
  /* 0x0004 */ unsigned int SizeOfEntry;
  /* 0x0008 */ unsigned int NumberOfEntries;
} MINIDUMP_UNLOADED_MODULE_LIST, *PMINIDUMP_UNLOADED_MODULE_LIST; /* size: 0x000c */

