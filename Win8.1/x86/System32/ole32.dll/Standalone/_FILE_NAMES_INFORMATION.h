typedef struct _FILE_NAMES_INFORMATION
{
  /* 0x0000 */ unsigned long NextEntryOffset;
  /* 0x0004 */ unsigned long FileIndex;
  /* 0x0008 */ unsigned long FileNameLength;
  /* 0x000c */ wchar_t FileName[1];
  /* 0x000e */ char __PADDING__[2];
} FILE_NAMES_INFORMATION, *PFILE_NAMES_INFORMATION; /* size: 0x0010 */

