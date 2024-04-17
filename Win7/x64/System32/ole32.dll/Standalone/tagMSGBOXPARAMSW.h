struct tagMSGBOXPARAMSW
{
  /* 0x0000 */ unsigned int cbSize;
  /* 0x0008 */ struct HWND__* hwndOwner;
  /* 0x0010 */ struct HINSTANCE__* hInstance;
  /* 0x0018 */ const wchar_t* lpszText;
  /* 0x0020 */ const wchar_t* lpszCaption;
  /* 0x0028 */ unsigned long dwStyle;
  /* 0x0030 */ const wchar_t* lpszIcon;
  /* 0x0038 */ unsigned __int64 dwContextHelpId;
  /* 0x0040 */ void* lpfnMsgBoxCallback /* function */;
  /* 0x0048 */ unsigned long dwLanguageId;
  /* 0x004c */ long __PADDING__[1];
}; /* size: 0x0050 */

