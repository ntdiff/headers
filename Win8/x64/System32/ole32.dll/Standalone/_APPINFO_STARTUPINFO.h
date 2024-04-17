struct tagPOINT
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
}; /* size: 0x0008 */

typedef struct _APPINFO_STARTUPINFO
{
  /* 0x0000 */ wchar_t* lpTitle;
  /* 0x0008 */ unsigned long dwX;
  /* 0x000c */ unsigned long dwY;
  /* 0x0010 */ unsigned long dwXSize;
  /* 0x0014 */ unsigned long dwYSize;
  /* 0x0018 */ unsigned long dwXCountChars;
  /* 0x001c */ unsigned long dwYCountChars;
  /* 0x0020 */ unsigned long dwFillAttribute;
  /* 0x0024 */ unsigned long dwFlags;
  /* 0x0028 */ unsigned short wShowWindow;
  /* 0x002c */ struct tagPOINT ptMonitor;
  /* 0x0034 */ long __PADDING__[1];
} APPINFO_STARTUPINFO, *PAPPINFO_STARTUPINFO; /* size: 0x0038 */

