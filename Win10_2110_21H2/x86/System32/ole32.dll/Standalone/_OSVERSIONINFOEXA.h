typedef struct _OSVERSIONINFOEXA
{
  /* 0x0000 */ unsigned long dwOSVersionInfoSize;
  /* 0x0004 */ unsigned long dwMajorVersion;
  /* 0x0008 */ unsigned long dwMinorVersion;
  /* 0x000c */ unsigned long dwBuildNumber;
  /* 0x0010 */ unsigned long dwPlatformId;
  /* 0x0014 */ char szCSDVersion[128];
  /* 0x0094 */ unsigned short wServicePackMajor;
  /* 0x0096 */ unsigned short wServicePackMinor;
  /* 0x0098 */ unsigned short wSuiteMask;
  /* 0x009a */ unsigned char wProductType;
  /* 0x009b */ unsigned char wReserved;
} OSVERSIONINFOEXA, *POSVERSIONINFOEXA; /* size: 0x009c */

