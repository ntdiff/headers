struct tagPOINT
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
}; /* size: 0x0008 */

typedef struct _CMINVOKECOMMANDINFOEX
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
  /* 0x0038 */ const char* lpTitle;
  /* 0x0040 */ const wchar_t* lpVerbW;
  /* 0x0048 */ const wchar_t* lpParametersW;
  /* 0x0050 */ const wchar_t* lpDirectoryW;
  /* 0x0058 */ const wchar_t* lpTitleW;
  /* 0x0060 */ struct tagPOINT ptInvoke;
} CMINVOKECOMMANDINFOEX, *PCMINVOKECOMMANDINFOEX; /* size: 0x0068 */

