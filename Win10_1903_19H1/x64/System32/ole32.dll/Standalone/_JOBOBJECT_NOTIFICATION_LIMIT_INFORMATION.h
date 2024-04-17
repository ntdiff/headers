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

typedef enum _JOBOBJECT_RATE_CONTROL_TOLERANCE_INTERVAL
{
  ToleranceIntervalShort = 1,
  ToleranceIntervalMedium = 2,
  ToleranceIntervalLong = 3,
} JOBOBJECT_RATE_CONTROL_TOLERANCE_INTERVAL, *PJOBOBJECT_RATE_CONTROL_TOLERANCE_INTERVAL;

typedef struct _JOBOBJECT_NOTIFICATION_LIMIT_INFORMATION
{
  /* 0x0000 */ unsigned __int64 IoReadBytesLimit;
  /* 0x0008 */ unsigned __int64 IoWriteBytesLimit;
  /* 0x0010 */ union _LARGE_INTEGER PerJobUserTimeLimit;
  /* 0x0018 */ unsigned __int64 JobMemoryLimit;
  /* 0x0020 */ enum _JOBOBJECT_RATE_CONTROL_TOLERANCE RateControlTolerance;
  /* 0x0024 */ enum _JOBOBJECT_RATE_CONTROL_TOLERANCE_INTERVAL RateControlToleranceInterval;
  /* 0x0028 */ unsigned long LimitFlags;
  /* 0x002c */ long __PADDING__[1];
} JOBOBJECT_NOTIFICATION_LIMIT_INFORMATION, *PJOBOBJECT_NOTIFICATION_LIMIT_INFORMATION; /* size: 0x0030 */

