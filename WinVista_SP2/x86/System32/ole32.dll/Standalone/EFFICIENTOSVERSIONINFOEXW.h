struct EFFICIENTOSVERSIONINFOEXW
{
  /* 0x0000 */ unsigned long dwOSVersionInfoSize;
  /* 0x0004 */ unsigned long dwMajorVersion;
  /* 0x0008 */ unsigned long dwMinorVersion;
  /* 0x000c */ unsigned long dwBuildNumber;
  /* 0x0010 */ unsigned long dwPlatformId;
  /* 0x0014 */ unsigned short wServicePackMajor;
  /* 0x0016 */ unsigned short wServicePackMinor;
  /* 0x0018 */ unsigned short wSuiteMask;
  /* 0x001a */ unsigned char wProductType;
  /* 0x001b */ unsigned char wReserved;
  /* 0x001c */ wchar_t szCSDVersion[128];
}; /* size: 0x011c */

