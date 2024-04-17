typedef struct _FILE_RENAME_INFO
{
  /* 0x0000 */ unsigned char ReplaceIfExists;
  /* 0x0004 */ void* RootDirectory;
  /* 0x0008 */ unsigned long FileNameLength;
  /* 0x000c */ wchar_t FileName[1];
  /* 0x000e */ char __PADDING__[2];
} FILE_RENAME_INFO, *PFILE_RENAME_INFO; /* size: 0x0010 */

