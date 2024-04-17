typedef struct _FILE_FS_ATTRIBUTE_INFORMATION
{
  /* 0x0000 */ unsigned long FileSystemAttributes;
  /* 0x0004 */ long MaximumComponentNameLength;
  /* 0x0008 */ unsigned long FileSystemNameLength;
  /* 0x000c */ wchar_t FileSystemName[1];
  /* 0x000e */ char __PADDING__[2];
} FILE_FS_ATTRIBUTE_INFORMATION, *PFILE_FS_ATTRIBUTE_INFORMATION; /* size: 0x0010 */

