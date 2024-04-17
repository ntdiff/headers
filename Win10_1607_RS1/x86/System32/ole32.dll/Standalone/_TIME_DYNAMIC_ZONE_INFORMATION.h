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

typedef struct _TIME_DYNAMIC_ZONE_INFORMATION
{
  /* 0x0000 */ long Bias;
  /* 0x0004 */ wchar_t StandardName[32];
  /* 0x0044 */ struct _SYSTEMTIME StandardDate;
  /* 0x0054 */ long StandardBias;
  /* 0x0058 */ wchar_t DaylightName[32];
  /* 0x0098 */ struct _SYSTEMTIME DaylightDate;
  /* 0x00a8 */ long DaylightBias;
  /* 0x00ac */ wchar_t TimeZoneKeyName[128];
  /* 0x01ac */ unsigned char DynamicDaylightTimeDisabled;
  /* 0x01ad */ char __PADDING__[3];
} TIME_DYNAMIC_ZONE_INFORMATION, *PTIME_DYNAMIC_ZONE_INFORMATION; /* size: 0x01b0 */

