typedef struct _OSVERSIONINFOW
{
  /* 0x0000 */ unsigned long dwOSVersionInfoSize;
  /* 0x0004 */ unsigned long dwMajorVersion;
  /* 0x0008 */ unsigned long dwMinorVersion;
  /* 0x000c */ unsigned long dwBuildNumber;
  /* 0x0010 */ unsigned long dwPlatformId;
  /* 0x0014 */ wchar_t szCSDVersion[128];
} OSVERSIONINFOW, *POSVERSIONINFOW; /* size: 0x0114 */

