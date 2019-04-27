typedef struct _TIME_FIELDS
{
  /* 0x0000 */ short Year;
  /* 0x0002 */ short Month;
  /* 0x0004 */ short Day;
  /* 0x0006 */ short Hour;
  /* 0x0008 */ short Minute;
  /* 0x000a */ short Second;
  /* 0x000c */ short Milliseconds;
  /* 0x000e */ short Weekday;
} TIME_FIELDS, *PTIME_FIELDS; /* size: 0x0010 */

typedef struct _RTL_TIME_ZONE_INFORMATION
{
  /* 0x0000 */ long Bias;
  /* 0x0004 */ wchar_t StandardName[32];
  /* 0x0044 */ struct _TIME_FIELDS StandardStart;
  /* 0x0054 */ long StandardBias;
  /* 0x0058 */ wchar_t DaylightName[32];
  /* 0x0098 */ struct _TIME_FIELDS DaylightStart;
  /* 0x00a8 */ long DaylightBias;
} RTL_TIME_ZONE_INFORMATION, *PRTL_TIME_ZONE_INFORMATION; /* size: 0x00ac */

