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

typedef struct _DISK_EXTENT
{
  /* 0x0000 */ unsigned long DiskNumber;
  /* 0x0008 */ union _LARGE_INTEGER StartingOffset;
  /* 0x0010 */ union _LARGE_INTEGER ExtentLength;
} DISK_EXTENT, *PDISK_EXTENT; /* size: 0x0018 */

