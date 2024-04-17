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

typedef struct _FILE_STAT_LX_INFORMATION
{
  /* 0x0000 */ union _LARGE_INTEGER FileId;
  /* 0x0008 */ union _LARGE_INTEGER CreationTime;
  /* 0x0010 */ union _LARGE_INTEGER LastAccessTime;
  /* 0x0018 */ union _LARGE_INTEGER LastWriteTime;
  /* 0x0020 */ union _LARGE_INTEGER ChangeTime;
  /* 0x0028 */ union _LARGE_INTEGER AllocationSize;
  /* 0x0030 */ union _LARGE_INTEGER EndOfFile;
  /* 0x0038 */ unsigned long FileAttributes;
  /* 0x003c */ unsigned long ReparseTag;
  /* 0x0040 */ unsigned long NumberOfLinks;
  /* 0x0044 */ unsigned long EffectiveAccess;
  /* 0x0048 */ unsigned long LxFlags;
  /* 0x004c */ unsigned long LxUid;
  /* 0x0050 */ unsigned long LxGid;
  /* 0x0054 */ unsigned long LxMode;
  /* 0x0058 */ unsigned long LxDeviceIdMajor;
  /* 0x005c */ unsigned long LxDeviceIdMinor;
} FILE_STAT_LX_INFORMATION, *PFILE_STAT_LX_INFORMATION; /* size: 0x0060 */

