typedef struct _FILE_LINK_ENTRY_INFORMATION
{
  /* 0x0000 */ unsigned long NextEntryOffset;
  /* 0x0008 */ __int64 ParentFileId;
  /* 0x0010 */ unsigned long FileNameLength;
  /* 0x0014 */ wchar_t FileName[1];
  /* 0x0016 */ char __PADDING__[2];
} FILE_LINK_ENTRY_INFORMATION, *PFILE_LINK_ENTRY_INFORMATION; /* size: 0x0018 */

typedef struct _FILE_LINKS_INFORMATION
{
  /* 0x0000 */ unsigned long BytesNeeded;
  /* 0x0004 */ unsigned long EntriesReturned;
  /* 0x0008 */ struct _FILE_LINK_ENTRY_INFORMATION Entry;
} FILE_LINKS_INFORMATION, *PFILE_LINKS_INFORMATION; /* size: 0x0020 */

