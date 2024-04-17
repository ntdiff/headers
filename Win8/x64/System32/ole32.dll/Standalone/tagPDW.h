struct tagPDW
{
  /* 0x0000 */ unsigned long lStructSize;
  /* 0x0008 */ struct HWND__* hwndOwner;
  /* 0x0010 */ void* hDevMode;
  /* 0x0018 */ void* hDevNames;
  /* 0x0020 */ struct HDC__* hDC;
  /* 0x0028 */ unsigned long Flags;
  /* 0x002c */ unsigned short nFromPage;
  /* 0x002e */ unsigned short nToPage;
  /* 0x0030 */ unsigned short nMinPage;
  /* 0x0032 */ unsigned short nMaxPage;
  /* 0x0034 */ unsigned short nCopies;
  /* 0x0038 */ struct HINSTANCE__* hInstance;
  /* 0x0040 */ __int64 lCustData;
  /* 0x0048 */ void* lpfnPrintHook /* function */;
  /* 0x0050 */ void* lpfnSetupHook /* function */;
  /* 0x0058 */ const wchar_t* lpPrintTemplateName;
  /* 0x0060 */ const wchar_t* lpSetupTemplateName;
  /* 0x0068 */ void* hPrintTemplate;
  /* 0x0070 */ void* hSetupTemplate;
}; /* size: 0x0078 */

