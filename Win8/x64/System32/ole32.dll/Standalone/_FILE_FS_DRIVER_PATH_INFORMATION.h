typedef struct _FILE_FS_DRIVER_PATH_INFORMATION
{
  /* 0x0000 */ unsigned char DriverInPath;
  /* 0x0004 */ unsigned long DriverNameLength;
  /* 0x0008 */ wchar_t DriverName[1];
  /* 0x000a */ char __PADDING__[2];
} FILE_FS_DRIVER_PATH_INFORMATION, *PFILE_FS_DRIVER_PATH_INFORMATION; /* size: 0x000c */

