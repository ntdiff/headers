struct tagNMHDR
{
  /* 0x0000 */ struct HWND__* hwndFrom;
  /* 0x0008 */ unsigned __int64 idFrom;
  /* 0x0010 */ unsigned int code;
  /* 0x0014 */ long __PADDING__[1];
}; /* size: 0x0018 */

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

struct tagNMDATETIMESTRINGW
{
  /* 0x0000 */ struct tagNMHDR nmhdr;
  /* 0x0018 */ const wchar_t* pszUserString;
  /* 0x0020 */ struct _SYSTEMTIME st;
  /* 0x0030 */ unsigned long dwFlags;
  /* 0x0034 */ long __PADDING__[1];
}; /* size: 0x0038 */

