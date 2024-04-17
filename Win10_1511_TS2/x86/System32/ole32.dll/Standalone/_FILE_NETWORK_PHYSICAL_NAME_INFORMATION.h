typedef struct _FILE_NETWORK_PHYSICAL_NAME_INFORMATION
{
  /* 0x0000 */ unsigned long FileNameLength;
  /* 0x0004 */ wchar_t FileName[1];
  /* 0x0006 */ char __PADDING__[2];
} FILE_NETWORK_PHYSICAL_NAME_INFORMATION, *PFILE_NETWORK_PHYSICAL_NAME_INFORMATION; /* size: 0x0008 */

