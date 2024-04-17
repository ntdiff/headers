typedef struct _SYSTEMTIME
{
  /* 0x0000 */ unsigned short wYear;
  /* 0x0002 */ unsigned short wMonth;
  /* 0x0004 */ unsigned short wDayOfWeek;
  /* 0x0006 */ unsigned short wDay;
  /* 0x0008 */ unsigned short wHour;
  /* 0x000a */ unsigned short wMinute;
  /* 0x000c */ unsigned short wSecond;
  /* 0x000e */ unsigned short wMilliseconds;
} SYSTEMTIME, *PSYSTEMTIME; /* size: 0x0010 */

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

typedef struct _PERF_DATA_BLOCK
{
  /* 0x0000 */ wchar_t Signature[4];
  /* 0x0008 */ unsigned long LittleEndian;
  /* 0x000c */ unsigned long Version;
  /* 0x0010 */ unsigned long Revision;
  /* 0x0014 */ unsigned long TotalByteLength;
  /* 0x0018 */ unsigned long HeaderLength;
  /* 0x001c */ unsigned long NumObjectTypes;
  /* 0x0020 */ long DefaultObject;
  /* 0x0024 */ struct _SYSTEMTIME SystemTime;
  /* 0x0038 */ union _LARGE_INTEGER PerfTime;
  /* 0x0040 */ union _LARGE_INTEGER PerfFreq;
  /* 0x0048 */ union _LARGE_INTEGER PerfTime100nSec;
  /* 0x0050 */ unsigned long SystemNameLength;
  /* 0x0054 */ unsigned long SystemNameOffset;
} PERF_DATA_BLOCK, *PPERF_DATA_BLOCK; /* size: 0x0058 */

