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

typedef struct _TIME_ZONE_INFORMATION
{
  /* 0x0000 */ long Bias;
  /* 0x0004 */ wchar_t StandardName[32];
  /* 0x0044 */ struct _SYSTEMTIME StandardDate;
  /* 0x0054 */ long StandardBias;
  /* 0x0058 */ wchar_t DaylightName[32];
  /* 0x0098 */ struct _SYSTEMTIME DaylightDate;
  /* 0x00a8 */ long DaylightBias;
} TIME_ZONE_INFORMATION, *PTIME_ZONE_INFORMATION; /* size: 0x00ac */

typedef struct _MINIDUMP_MISC_INFO_3
{
  /* 0x0000 */ unsigned int SizeOfInfo;
  /* 0x0004 */ unsigned int Flags1;
  /* 0x0008 */ unsigned int ProcessId;
  /* 0x000c */ unsigned int ProcessCreateTime;
  /* 0x0010 */ unsigned int ProcessUserTime;
  /* 0x0014 */ unsigned int ProcessKernelTime;
  /* 0x0018 */ unsigned int ProcessorMaxMhz;
  /* 0x001c */ unsigned int ProcessorCurrentMhz;
  /* 0x0020 */ unsigned int ProcessorMhzLimit;
  /* 0x0024 */ unsigned int ProcessorMaxIdleState;
  /* 0x0028 */ unsigned int ProcessorCurrentIdleState;
  /* 0x002c */ unsigned int ProcessIntegrityLevel;
  /* 0x0030 */ unsigned int ProcessExecuteFlags;
  /* 0x0034 */ unsigned int ProtectedProcess;
  /* 0x0038 */ unsigned int TimeZoneId;
  /* 0x003c */ struct _TIME_ZONE_INFORMATION TimeZone;
} MINIDUMP_MISC_INFO_3, *PMINIDUMP_MISC_INFO_3; /* size: 0x00e8 */

