struct tagPDW
{
  /* 0x0000 */ unsigned long lStructSize;
  /* 0x0004 */ struct HWND__* hwndOwner;
  /* 0x0008 */ void* hDevMode;
  /* 0x000c */ void* hDevNames;
  /* 0x0010 */ struct HDC__* hDC;
  /* 0x0014 */ unsigned long Flags;
  /* 0x0018 */ unsigned short nFromPage;
  /* 0x001a */ unsigned short nToPage;
  /* 0x001c */ unsigned short nMinPage;
  /* 0x001e */ unsigned short nMaxPage;
  /* 0x0020 */ unsigned short nCopies;
  /* 0x0022 */ struct HINSTANCE__* hInstance;
  /* 0x0026 */ long lCustData;
  /* 0x002a */ void* lpfnPrintHook /* function */;
  /* 0x002e */ void* lpfnSetupHook /* function */;
  /* 0x0032 */ const wchar_t* lpPrintTemplateName;
  /* 0x0036 */ const wchar_t* lpSetupTemplateName;
  /* 0x003a */ void* hPrintTemplate;
  /* 0x003e */ void* hSetupTemplate;
}; /* size: 0x0042 */

