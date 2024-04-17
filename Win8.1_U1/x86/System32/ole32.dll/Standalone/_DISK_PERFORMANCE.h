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

typedef struct _DISK_PERFORMANCE
{
  /* 0x0000 */ union _LARGE_INTEGER BytesRead;
  /* 0x0008 */ union _LARGE_INTEGER BytesWritten;
  /* 0x0010 */ union _LARGE_INTEGER ReadTime;
  /* 0x0018 */ union _LARGE_INTEGER WriteTime;
  /* 0x0020 */ union _LARGE_INTEGER IdleTime;
  /* 0x0028 */ unsigned long ReadCount;
  /* 0x002c */ unsigned long WriteCount;
  /* 0x0030 */ unsigned long QueueDepth;
  /* 0x0034 */ unsigned long SplitCount;
  /* 0x0038 */ union _LARGE_INTEGER QueryTime;
  /* 0x0040 */ unsigned long StorageDeviceNumber;
  /* 0x0044 */ wchar_t StorageManagerName[8];
  /* 0x0054 */ long __PADDING__[1];
} DISK_PERFORMANCE, *PDISK_PERFORMANCE; /* size: 0x0058 */

