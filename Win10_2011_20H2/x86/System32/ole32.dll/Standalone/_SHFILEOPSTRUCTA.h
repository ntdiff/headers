typedef struct _SHFILEOPSTRUCTA
{
  /* 0x0000 */ struct HWND__* hwnd;
  /* 0x0004 */ unsigned int wFunc;
  /* 0x0008 */ const char* pFrom;
  /* 0x000c */ const char* pTo;
  /* 0x0010 */ unsigned short fFlags;
  /* 0x0012 */ int fAnyOperationsAborted;
  /* 0x0016 */ void* hNameMappings;
  /* 0x001a */ const char* lpszProgressTitle;
} SHFILEOPSTRUCTA, *PSHFILEOPSTRUCTA; /* size: 0x001e */

