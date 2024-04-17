typedef struct _MINIDUMP_HANDLE_OPERATION_LIST
{
  /* 0x0000 */ unsigned int SizeOfHeader;
  /* 0x0004 */ unsigned int SizeOfEntry;
  /* 0x0008 */ unsigned int NumberOfEntries;
  /* 0x000c */ unsigned int Reserved;
} MINIDUMP_HANDLE_OPERATION_LIST, *PMINIDUMP_HANDLE_OPERATION_LIST; /* size: 0x0010 */

