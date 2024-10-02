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

struct tagRECT
{
  /* 0x0000 */ long left;
  /* 0x0004 */ long top;
  /* 0x0008 */ long right;
  /* 0x000c */ long bottom;
}; /* size: 0x0010 */

struct tagMCGRIDINFO
{
  /* 0x0000 */ unsigned int cbSize;
  /* 0x0004 */ unsigned long dwPart;
  /* 0x0008 */ unsigned long dwFlags;
  /* 0x000c */ int iCalendar;
  /* 0x0010 */ int iRow;
  /* 0x0014 */ int iCol;
  /* 0x0018 */ int bSelected;
  /* 0x001c */ struct _SYSTEMTIME stStart;
  /* 0x002c */ struct _SYSTEMTIME stEnd;
  /* 0x003c */ struct tagRECT rc;
  /* 0x0050 */ wchar_t* pszName;
  /* 0x0058 */ unsigned __int64 cchName;
}; /* size: 0x0060 */

