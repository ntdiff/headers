struct tagNMHDR
{
  /* 0x0000 */ struct HWND__* hwndFrom;
  /* 0x0008 */ unsigned __int64 idFrom;
  /* 0x0010 */ unsigned int code;
  /* 0x0014 */ long __PADDING__[1];
}; /* size: 0x0018 */

struct tagNMTTDISPINFOA
{
  /* 0x0000 */ struct tagNMHDR hdr;
  /* 0x0018 */ char* lpszText;
  /* 0x0020 */ char szText[80];
  /* 0x0070 */ struct HINSTANCE__* hinst;
  /* 0x0078 */ unsigned int uFlags;
  /* 0x0080 */ __int64 lParam;
}; /* size: 0x0088 */

