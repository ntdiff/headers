typedef struct _SHFILEOPSTRUCTW
{
  /* 0x0000 */ struct HWND__* hwnd;
  /* 0x0008 */ unsigned int wFunc;
  /* 0x0010 */ const wchar_t* pFrom;
  /* 0x0018 */ const wchar_t* pTo;
  /* 0x0020 */ unsigned short fFlags;
  /* 0x0024 */ int fAnyOperationsAborted;
  /* 0x0028 */ void* hNameMappings;
  /* 0x0030 */ const wchar_t* lpszProgressTitle;
} SHFILEOPSTRUCTW, *PSHFILEOPSTRUCTW; /* size: 0x0038 */

