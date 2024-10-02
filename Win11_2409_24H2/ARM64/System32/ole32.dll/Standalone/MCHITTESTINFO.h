struct tagPOINT
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
}; /* size: 0x0008 */

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

struct MCHITTESTINFO
{
  /* 0x0000 */ unsigned int cbSize;
  /* 0x0004 */ struct tagPOINT pt;
  /* 0x000c */ unsigned int uHit;
  /* 0x0010 */ struct _SYSTEMTIME st;
  /* 0x0020 */ struct tagRECT rc;
  /* 0x0030 */ int iOffset;
  /* 0x0034 */ int iRow;
  /* 0x0038 */ int iCol;
}; /* size: 0x003c */

