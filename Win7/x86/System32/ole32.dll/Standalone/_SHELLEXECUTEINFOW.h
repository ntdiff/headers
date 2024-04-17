typedef struct _SHELLEXECUTEINFOW
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ unsigned long fMask;
  /* 0x0008 */ struct HWND__* hwnd;
  /* 0x000c */ const wchar_t* lpVerb;
  /* 0x0010 */ const wchar_t* lpFile;
  /* 0x0014 */ const wchar_t* lpParameters;
  /* 0x0018 */ const wchar_t* lpDirectory;
  /* 0x001c */ int nShow;
  /* 0x0020 */ struct HINSTANCE__* hInstApp;
  /* 0x0024 */ void* lpIDList;
  /* 0x0028 */ const wchar_t* lpClass;
  /* 0x002c */ struct HKEY__* hkeyClass;
  /* 0x0030 */ unsigned long dwHotKey;
  union
  {
    /* 0x0034 */ void* hIcon;
    /* 0x0034 */ void* hMonitor;
  }; /* size: 0x0004 */
  /* 0x0038 */ void* hProcess;
} SHELLEXECUTEINFOW, *PSHELLEXECUTEINFOW; /* size: 0x003c */

