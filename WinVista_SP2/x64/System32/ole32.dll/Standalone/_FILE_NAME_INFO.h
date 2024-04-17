typedef struct _FILE_NAME_INFO
{
  /* 0x0000 */ unsigned long FileNameLength;
  /* 0x0004 */ wchar_t FileName[1];
  /* 0x0006 */ char __PADDING__[2];
} FILE_NAME_INFO, *PFILE_NAME_INFO; /* size: 0x0008 */

