typedef struct _FILE_RENAME_INFORMATION
{
  union
  {
    /* 0x0000 */ unsigned char ReplaceIfExists;
    /* 0x0000 */ unsigned long Flags;
  }; /* size: 0x0004 */
  /* 0x0008 */ void* RootDirectory;
  /* 0x0010 */ unsigned long FileNameLength;
  /* 0x0014 */ wchar_t FileName[1];
  /* 0x0016 */ char __PADDING__[2];
} FILE_RENAME_INFORMATION, *PFILE_RENAME_INFORMATION; /* size: 0x0018 */

