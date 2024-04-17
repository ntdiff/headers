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

typedef struct _SYSTEM_TIMEOFDAY_INFORMATION
{
  /* 0x0000 */ union _LARGE_INTEGER BootTime;
  /* 0x0008 */ union _LARGE_INTEGER CurrentTime;
  /* 0x0010 */ union _LARGE_INTEGER TimeZoneBias;
  /* 0x0018 */ unsigned long TimeZoneId;
  /* 0x001c */ unsigned long Reserved;
  /* 0x0020 */ unsigned __int64 BootTimeBias;
  /* 0x0028 */ unsigned __int64 SleepTimeBias;
} SYSTEM_TIMEOFDAY_INFORMATION, *PSYSTEM_TIMEOFDAY_INFORMATION; /* size: 0x0030 */

