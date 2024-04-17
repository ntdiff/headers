typedef struct _FILETIME
{
  /* 0x0000 */ unsigned long dwLowDateTime;
  /* 0x0004 */ unsigned long dwHighDateTime;
} FILETIME, *PFILETIME; /* size: 0x0008 */

typedef struct _WIN32_FIND_DATAA
{
  /* 0x0000 */ unsigned long dwFileAttributes;
  /* 0x0004 */ struct _FILETIME ftCreationTime;
  /* 0x000c */ struct _FILETIME ftLastAccessTime;
  /* 0x0014 */ struct _FILETIME ftLastWriteTime;
  /* 0x001c */ unsigned long nFileSizeHigh;
  /* 0x0020 */ unsigned long nFileSizeLow;
  /* 0x0024 */ unsigned long dwReserved0;
  /* 0x0028 */ unsigned long dwReserved1;
  /* 0x002c */ char cFileName[260];
  /* 0x0130 */ char cAlternateFileName[14];
  /* 0x013e */ char __PADDING__[2];
} WIN32_FIND_DATAA, *PWIN32_FIND_DATAA; /* size: 0x0140 */

