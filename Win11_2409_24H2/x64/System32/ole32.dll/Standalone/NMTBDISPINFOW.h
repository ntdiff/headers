struct tagNMHDR
{
  /* 0x0000 */ struct HWND__* hwndFrom;
  /* 0x0008 */ unsigned __int64 idFrom;
  /* 0x0010 */ unsigned int code;
  /* 0x0014 */ long __PADDING__[1];
}; /* size: 0x0018 */

struct NMTBDISPINFOW
{
  /* 0x0000 */ struct tagNMHDR hdr;
  /* 0x0018 */ unsigned long dwMask;
  /* 0x001c */ int idCommand;
  /* 0x0020 */ unsigned __int64 lParam;
  /* 0x0028 */ int iImage;
  /* 0x0030 */ wchar_t* pszText;
  /* 0x0038 */ int cchText;
  /* 0x003c */ long __PADDING__[1];
}; /* size: 0x0040 */

