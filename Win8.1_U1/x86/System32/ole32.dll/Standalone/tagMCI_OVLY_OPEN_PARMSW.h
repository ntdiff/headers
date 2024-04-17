struct tagMCI_OVLY_OPEN_PARMSW
{
  /* 0x0000 */ unsigned long dwCallback;
  /* 0x0004 */ unsigned int wDeviceID;
  /* 0x0008 */ const wchar_t* lpstrDeviceType;
  /* 0x000c */ const wchar_t* lpstrElementName;
  /* 0x0010 */ const wchar_t* lpstrAlias;
  /* 0x0014 */ unsigned long dwStyle;
  /* 0x0018 */ struct HWND__* hWndParent;
}; /* size: 0x001c */

