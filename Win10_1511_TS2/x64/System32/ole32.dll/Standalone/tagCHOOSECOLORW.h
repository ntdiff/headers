struct tagCHOOSECOLORW
{
  /* 0x0000 */ unsigned long lStructSize;
  /* 0x0008 */ struct HWND__* hwndOwner;
  /* 0x0010 */ struct HWND__* hInstance;
  /* 0x0018 */ unsigned long rgbResult;
  /* 0x0020 */ unsigned long* lpCustColors;
  /* 0x0028 */ unsigned long Flags;
  /* 0x0030 */ __int64 lCustData;
  /* 0x0038 */ void* lpfnHook /* function */;
  /* 0x0040 */ const wchar_t* lpTemplateName;
}; /* size: 0x0048 */

