typedef struct _FILE_RENAME_INFO
{
  /* 0x0000 */ unsigned char ReplaceIfExists;
  /* 0x0008 */ void* RootDirectory;
  /* 0x0010 */ unsigned long FileNameLength;
  /* 0x0014 */ wchar_t FileName[1];
  /* 0x0016 */ char __PADDING__[2];
} FILE_RENAME_INFO, *PFILE_RENAME_INFO; /* size: 0x0018 */

