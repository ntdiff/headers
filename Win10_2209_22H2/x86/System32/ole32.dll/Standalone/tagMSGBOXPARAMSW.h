struct tagMSGBOXPARAMSW
{
  /* 0x0000 */ unsigned int cbSize;
  /* 0x0004 */ struct HWND__* hwndOwner;
  /* 0x0008 */ struct HINSTANCE__* hInstance;
  /* 0x000c */ const wchar_t* lpszText;
  /* 0x0010 */ const wchar_t* lpszCaption;
  /* 0x0014 */ unsigned long dwStyle;
  /* 0x0018 */ const wchar_t* lpszIcon;
  /* 0x001c */ unsigned long dwContextHelpId;
  /* 0x0020 */ void* lpfnMsgBoxCallback /* function */;
  /* 0x0024 */ unsigned long dwLanguageId;
}; /* size: 0x0028 */

