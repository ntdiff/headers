struct tagPOINT
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
}; /* size: 0x0008 */

typedef struct _APPINFO_STARTUPINFO
{
  /* 0x0000 */ wchar_t* lpTitle;
  /* 0x0004 */ unsigned long dwX;
  /* 0x0008 */ unsigned long dwY;
  /* 0x000c */ unsigned long dwXSize;
  /* 0x0010 */ unsigned long dwYSize;
  /* 0x0014 */ unsigned long dwXCountChars;
  /* 0x0018 */ unsigned long dwYCountChars;
  /* 0x001c */ unsigned long dwFillAttribute;
  /* 0x0020 */ unsigned long dwFlags;
  /* 0x0024 */ unsigned short wShowWindow;
  /* 0x0028 */ struct tagPOINT ptMonitor;
} APPINFO_STARTUPINFO, *PAPPINFO_STARTUPINFO; /* size: 0x0030 */

