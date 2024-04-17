typedef struct _FILETIME
{
  /* 0x0000 */ unsigned long dwLowDateTime;
  /* 0x0004 */ unsigned long dwHighDateTime;
} FILETIME, *PFILETIME; /* size: 0x0008 */

typedef struct _WIN32_FILE_ATTRIBUTE_DATA
{
  /* 0x0000 */ unsigned long dwFileAttributes;
  /* 0x0004 */ struct _FILETIME ftCreationTime;
  /* 0x000c */ struct _FILETIME ftLastAccessTime;
  /* 0x0014 */ struct _FILETIME ftLastWriteTime;
  /* 0x001c */ unsigned long nFileSizeHigh;
  /* 0x0020 */ unsigned long nFileSizeLow;
} WIN32_FILE_ATTRIBUTE_DATA, *PWIN32_FILE_ATTRIBUTE_DATA; /* size: 0x0024 */

