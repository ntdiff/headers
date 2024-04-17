typedef struct _SHELLEXECUTEINFOA
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ unsigned long fMask;
  /* 0x0008 */ struct HWND__* hwnd;
  /* 0x0010 */ const char* lpVerb;
  /* 0x0018 */ const char* lpFile;
  /* 0x0020 */ const char* lpParameters;
  /* 0x0028 */ const char* lpDirectory;
  /* 0x0030 */ int nShow;
  /* 0x0038 */ struct HINSTANCE__* hInstApp;
  /* 0x0040 */ void* lpIDList;
  /* 0x0048 */ const char* lpClass;
  /* 0x0050 */ struct HKEY__* hkeyClass;
  /* 0x0058 */ unsigned long dwHotKey;
  union
  {
    /* 0x0060 */ void* hIcon;
    /* 0x0060 */ void* hMonitor;
  }; /* size: 0x0008 */
  /* 0x0068 */ void* hProcess;
} SHELLEXECUTEINFOA, *PSHELLEXECUTEINFOA; /* size: 0x0070 */

