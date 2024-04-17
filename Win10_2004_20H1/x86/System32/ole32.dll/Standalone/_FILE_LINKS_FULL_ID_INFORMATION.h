typedef struct _FILE_ID_128
{
  /* 0x0000 */ unsigned char Identifier[16];
} FILE_ID_128, *PFILE_ID_128; /* size: 0x0010 */

typedef struct _FILE_LINK_ENTRY_FULL_ID_INFORMATION
{
  /* 0x0000 */ unsigned long NextEntryOffset;
  /* 0x0004 */ struct _FILE_ID_128 ParentFileId;
  /* 0x0014 */ unsigned long FileNameLength;
  /* 0x0018 */ wchar_t FileName[1];
  /* 0x001a */ char __PADDING__[2];
} FILE_LINK_ENTRY_FULL_ID_INFORMATION, *PFILE_LINK_ENTRY_FULL_ID_INFORMATION; /* size: 0x001c */

typedef struct _FILE_LINKS_FULL_ID_INFORMATION
{
  /* 0x0000 */ unsigned long BytesNeeded;
  /* 0x0004 */ unsigned long EntriesReturned;
  /* 0x0008 */ struct _FILE_LINK_ENTRY_FULL_ID_INFORMATION Entry;
} FILE_LINKS_FULL_ID_INFORMATION, *PFILE_LINKS_FULL_ID_INFORMATION; /* size: 0x0024 */

