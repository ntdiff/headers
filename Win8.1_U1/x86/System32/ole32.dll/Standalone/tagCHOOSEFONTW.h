struct tagCHOOSEFONTW
{
  /* 0x0000 */ unsigned long lStructSize;
  /* 0x0004 */ struct HWND__* hwndOwner;
  /* 0x0008 */ struct HDC__* hDC;
  /* 0x000c */ struct tagLOGFONTW* lpLogFont;
  /* 0x0010 */ int iPointSize;
  /* 0x0014 */ unsigned long Flags;
  /* 0x0018 */ unsigned long rgbColors;
  /* 0x001c */ long lCustData;
  /* 0x0020 */ void* lpfnHook /* function */;
  /* 0x0024 */ const wchar_t* lpTemplateName;
  /* 0x0028 */ struct HINSTANCE__* hInstance;
  /* 0x002c */ wchar_t* lpszStyle;
  /* 0x0030 */ unsigned short nFontType;
  /* 0x0032 */ unsigned short ___MISSING_ALIGNMENT__;
  /* 0x0034 */ int nSizeMin;
  /* 0x0038 */ int nSizeMax;
}; /* size: 0x003c */

