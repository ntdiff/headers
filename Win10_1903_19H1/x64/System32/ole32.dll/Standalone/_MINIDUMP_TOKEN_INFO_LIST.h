typedef struct _MINIDUMP_TOKEN_INFO_LIST
{
  /* 0x0000 */ unsigned long TokenListSize;
  /* 0x0004 */ unsigned long TokenListEntries;
  /* 0x0008 */ unsigned long ListHeaderSize;
  /* 0x000c */ unsigned long ElementHeaderSize;
} MINIDUMP_TOKEN_INFO_LIST, *PMINIDUMP_TOKEN_INFO_LIST; /* size: 0x0010 */

