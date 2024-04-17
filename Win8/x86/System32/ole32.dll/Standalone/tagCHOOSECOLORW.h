struct tagCHOOSECOLORW
{
  /* 0x0000 */ unsigned long lStructSize;
  /* 0x0004 */ struct HWND__* hwndOwner;
  /* 0x0008 */ struct HWND__* hInstance;
  /* 0x000c */ unsigned long rgbResult;
  /* 0x0010 */ unsigned long* lpCustColors;
  /* 0x0014 */ unsigned long Flags;
  /* 0x0018 */ long lCustData;
  /* 0x001c */ void* lpfnHook /* function */;
  /* 0x0020 */ const wchar_t* lpTemplateName;
}; /* size: 0x0024 */

