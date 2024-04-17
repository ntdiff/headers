typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _FILE_QUERY_ON_DISK_VOL_INFO_BUFFER
{
  /* 0x0000 */ union _LARGE_INTEGER DirectoryCount;
  /* 0x0008 */ union _LARGE_INTEGER FileCount;
  /* 0x0010 */ unsigned short FsFormatMajVersion;
  /* 0x0012 */ unsigned short FsFormatMinVersion;
  /* 0x0014 */ wchar_t FsFormatName[12];
  /* 0x0030 */ union _LARGE_INTEGER FormatTime;
  /* 0x0038 */ union _LARGE_INTEGER LastUpdateTime;
  /* 0x0040 */ wchar_t CopyrightInfo[34];
  /* 0x0084 */ wchar_t AbstractInfo[34];
  /* 0x00c8 */ wchar_t FormattingImplementationInfo[34];
  /* 0x010c */ wchar_t LastModifyingImplementationInfo[34];
} FILE_QUERY_ON_DISK_VOL_INFO_BUFFER, *PFILE_QUERY_ON_DISK_VOL_INFO_BUFFER; /* size: 0x0150 */

