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

typedef struct _tagHIT_LOGGING_INFO
{
  /* 0x0000 */ unsigned long dwStructSize;
  /* 0x0008 */ char* lpszLoggedUrlName;
  /* 0x0010 */ struct _SYSTEMTIME StartTime;
  /* 0x0020 */ struct _SYSTEMTIME EndTime;
  /* 0x0030 */ char* lpszExtendedInfo;
} tagHIT_LOGGING_INFO, *PtagHIT_LOGGING_INFO; /* size: 0x0038 */

