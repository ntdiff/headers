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

typedef struct _DISK_HISTOGRAM
{
  /* 0x0000 */ union _LARGE_INTEGER DiskSize;
  /* 0x0008 */ union _LARGE_INTEGER Start;
  /* 0x0010 */ union _LARGE_INTEGER End;
  /* 0x0018 */ union _LARGE_INTEGER Average;
  /* 0x0020 */ union _LARGE_INTEGER AverageRead;
  /* 0x0028 */ union _LARGE_INTEGER AverageWrite;
  /* 0x0030 */ unsigned long Granularity;
  /* 0x0034 */ unsigned long Size;
  /* 0x0038 */ unsigned long ReadCount;
  /* 0x003c */ unsigned long WriteCount;
  /* 0x0040 */ struct _HISTOGRAM_BUCKET* Histogram;
} DISK_HISTOGRAM, *PDISK_HISTOGRAM; /* size: 0x0048 */

