typedef struct _FILETIME
{
  /* 0x0000 */ unsigned long dwLowDateTime;
  /* 0x0004 */ unsigned long dwHighDateTime;
} FILETIME, *PFILETIME; /* size: 0x0008 */

typedef struct _BY_HANDLE_FILE_INFORMATION
{
  /* 0x0000 */ unsigned long dwFileAttributes;
  /* 0x0004 */ struct _FILETIME ftCreationTime;
  /* 0x000c */ struct _FILETIME ftLastAccessTime;
  /* 0x0014 */ struct _FILETIME ftLastWriteTime;
  /* 0x001c */ unsigned long dwVolumeSerialNumber;
  /* 0x0020 */ unsigned long nFileSizeHigh;
  /* 0x0024 */ unsigned long nFileSizeLow;
  /* 0x0028 */ unsigned long nNumberOfLinks;
  /* 0x002c */ unsigned long nFileIndexHigh;
  /* 0x0030 */ unsigned long nFileIndexLow;
} BY_HANDLE_FILE_INFORMATION, *PBY_HANDLE_FILE_INFORMATION; /* size: 0x0034 */

