typedef struct _SHFILEOPSTRUCTA
{
  /* 0x0000 */ struct HWND__* hwnd;
  /* 0x0008 */ unsigned int wFunc;
  /* 0x0010 */ const char* pFrom;
  /* 0x0018 */ const char* pTo;
  /* 0x0020 */ unsigned short fFlags;
  /* 0x0024 */ int fAnyOperationsAborted;
  /* 0x0028 */ void* hNameMappings;
  /* 0x0030 */ const char* lpszProgressTitle;
} SHFILEOPSTRUCTA, *PSHFILEOPSTRUCTA; /* size: 0x0038 */

