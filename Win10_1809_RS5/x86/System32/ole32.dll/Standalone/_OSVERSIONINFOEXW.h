typedef struct _OSVERSIONINFOEXW
{
  /* 0x0000 */ unsigned long dwOSVersionInfoSize;
  /* 0x0004 */ unsigned long dwMajorVersion;
  /* 0x0008 */ unsigned long dwMinorVersion;
  /* 0x000c */ unsigned long dwBuildNumber;
  /* 0x0010 */ unsigned long dwPlatformId;
  /* 0x0014 */ wchar_t szCSDVersion[128];
  /* 0x0114 */ unsigned short wServicePackMajor;
  /* 0x0116 */ unsigned short wServicePackMinor;
  /* 0x0118 */ unsigned short wSuiteMask;
  /* 0x011a */ unsigned char wProductType;
  /* 0x011b */ unsigned char wReserved;
} OSVERSIONINFOEXW, *POSVERSIONINFOEXW; /* size: 0x011c */

