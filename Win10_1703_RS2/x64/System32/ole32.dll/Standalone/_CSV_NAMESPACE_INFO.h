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

typedef struct _CSV_NAMESPACE_INFO
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long DeviceNumber;
  /* 0x0008 */ union _LARGE_INTEGER StartingOffset;
  /* 0x0010 */ unsigned long SectorSize;
  /* 0x0014 */ long __PADDING__[1];
} CSV_NAMESPACE_INFO, *PCSV_NAMESPACE_INFO; /* size: 0x0018 */

