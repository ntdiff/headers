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

typedef enum _JOBOBJECT_RATE_CONTROL_TOLERANCE
{
  ToleranceLow = 1,
  ToleranceMedium = 2,
  ToleranceHigh = 3,
} JOBOBJECT_RATE_CONTROL_TOLERANCE, *PJOBOBJECT_RATE_CONTROL_TOLERANCE;

struct JOBOBJECT_LIMIT_VIOLATION_INFORMATION_2
{
  /* 0x0000 */ unsigned long LimitFlags;
  /* 0x0004 */ unsigned long ViolationLimitFlags;
  /* 0x0008 */ unsigned __int64 IoReadBytes;
  /* 0x0010 */ unsigned __int64 IoReadBytesLimit;
  /* 0x0018 */ unsigned __int64 IoWriteBytes;
  /* 0x0020 */ unsigned __int64 IoWriteBytesLimit;
  /* 0x0028 */ union _LARGE_INTEGER PerJobUserTime;
  /* 0x0030 */ union _LARGE_INTEGER PerJobUserTimeLimit;
  /* 0x0038 */ unsigned __int64 JobMemory;
  union
  {
    /* 0x0040 */ unsigned __int64 JobHighMemoryLimit;
    /* 0x0040 */ unsigned __int64 JobMemoryLimit;
  }; /* size: 0x0008 */
  union
  {
    /* 0x0048 */ enum _JOBOBJECT_RATE_CONTROL_TOLERANCE RateControlTolerance;
    /* 0x0048 */ enum _JOBOBJECT_RATE_CONTROL_TOLERANCE CpuRateControlTolerance;
  }; /* size: 0x0004 */
  union
  {
    /* 0x004c */ enum _JOBOBJECT_RATE_CONTROL_TOLERANCE RateControlToleranceLimit;
    /* 0x004c */ enum _JOBOBJECT_RATE_CONTROL_TOLERANCE CpuRateControlToleranceLimit;
  }; /* size: 0x0004 */
  /* 0x0050 */ unsigned __int64 JobLowMemoryLimit;
  /* 0x0058 */ enum _JOBOBJECT_RATE_CONTROL_TOLERANCE IoRateControlTolerance;
  /* 0x005c */ enum _JOBOBJECT_RATE_CONTROL_TOLERANCE IoRateControlToleranceLimit;
  /* 0x0060 */ enum _JOBOBJECT_RATE_CONTROL_TOLERANCE NetRateControlTolerance;
  /* 0x0064 */ enum _JOBOBJECT_RATE_CONTROL_TOLERANCE NetRateControlToleranceLimit;
}; /* size: 0x0068 */

