typedef struct _FILE_RENAME_INFORMATION
{
  union
  {
    /* 0x0000 */ unsigned char ReplaceIfExists;
    /* 0x0000 */ unsigned long Flags;
  }; /* size: 0x0004 */
  /* 0x0004 */ void* RootDirectory;
  /* 0x0008 */ unsigned long FileNameLength;
  /* 0x000c */ wchar_t FileName[1];
  /* 0x000e */ char __PADDING__[2];
} FILE_RENAME_INFORMATION, *PFILE_RENAME_INFORMATION; /* size: 0x0010 */

