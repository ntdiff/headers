struct tagNMHDR
{
  /* 0x0000 */ struct HWND__* hwndFrom;
  /* 0x0008 */ unsigned __int64 idFrom;
  /* 0x0010 */ unsigned int code;
  /* 0x0014 */ long __PADDING__[1];
}; /* size: 0x0018 */

struct tagNMTTDISPINFOW
{
  /* 0x0000 */ struct tagNMHDR hdr;
  /* 0x0018 */ wchar_t* lpszText;
  /* 0x0020 */ wchar_t szText[80];
  /* 0x00c0 */ struct HINSTANCE__* hinst;
  /* 0x00c8 */ unsigned int uFlags;
  /* 0x00d0 */ __int64 lParam;
}; /* size: 0x00d8 */

