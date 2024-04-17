struct tagCHOOSEFONTW
{
  /* 0x0000 */ unsigned long lStructSize;
  /* 0x0008 */ struct HWND__* hwndOwner;
  /* 0x0010 */ struct HDC__* hDC;
  /* 0x0018 */ struct tagLOGFONTW* lpLogFont;
  /* 0x0020 */ int iPointSize;
  /* 0x0024 */ unsigned long Flags;
  /* 0x0028 */ unsigned long rgbColors;
  /* 0x0030 */ __int64 lCustData;
  /* 0x0038 */ void* lpfnHook /* function */;
  /* 0x0040 */ const wchar_t* lpTemplateName;
  /* 0x0048 */ struct HINSTANCE__* hInstance;
  /* 0x0050 */ wchar_t* lpszStyle;
  /* 0x0058 */ unsigned short nFontType;
  /* 0x005a */ unsigned short ___MISSING_ALIGNMENT__;
  /* 0x005c */ int nSizeMin;
  /* 0x0060 */ int nSizeMax;
  /* 0x0064 */ long __PADDING__[1];
}; /* size: 0x0068 */

