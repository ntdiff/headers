typedef struct _SHFILEOPSTRUCTW
{
  /* 0x0000 */ struct HWND__* hwnd;
  /* 0x0004 */ unsigned int wFunc;
  /* 0x0008 */ const wchar_t* pFrom;
  /* 0x000c */ const wchar_t* pTo;
  /* 0x0010 */ unsigned short fFlags;
  /* 0x0012 */ int fAnyOperationsAborted;
  /* 0x0016 */ void* hNameMappings;
  /* 0x001a */ const wchar_t* lpszProgressTitle;
} SHFILEOPSTRUCTW, *PSHFILEOPSTRUCTW; /* size: 0x001e */

