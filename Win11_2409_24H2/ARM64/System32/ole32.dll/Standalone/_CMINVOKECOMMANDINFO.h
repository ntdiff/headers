typedef struct _CMINVOKECOMMANDINFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ unsigned long fMask;
  /* 0x0008 */ struct HWND__* hwnd;
  /* 0x0010 */ const char* lpVerb;
  /* 0x0018 */ const char* lpParameters;
  /* 0x0020 */ const char* lpDirectory;
  /* 0x0028 */ int nShow;
  /* 0x002c */ unsigned long dwHotKey;
  /* 0x0030 */ void* hIcon;
} CMINVOKECOMMANDINFO, *PCMINVOKECOMMANDINFO; /* size: 0x0038 */

