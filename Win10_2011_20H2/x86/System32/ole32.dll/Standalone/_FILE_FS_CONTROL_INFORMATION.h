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

typedef struct _FILE_FS_CONTROL_INFORMATION
{
  /* 0x0000 */ union _LARGE_INTEGER FreeSpaceStartFiltering;
  /* 0x0008 */ union _LARGE_INTEGER FreeSpaceThreshold;
  /* 0x0010 */ union _LARGE_INTEGER FreeSpaceStopFiltering;
  /* 0x0018 */ union _LARGE_INTEGER DefaultQuotaThreshold;
  /* 0x0020 */ union _LARGE_INTEGER DefaultQuotaLimit;
  /* 0x0028 */ unsigned long FileSystemControlFlags;
  /* 0x002c */ long __PADDING__[1];
} FILE_FS_CONTROL_INFORMATION, *PFILE_FS_CONTROL_INFORMATION; /* size: 0x0030 */

