struct tagNMHDR
{
  /* 0x0000 */ struct HWND__* hwndFrom;
  /* 0x0008 */ unsigned __int64 idFrom;
  /* 0x0010 */ unsigned int code;
  /* 0x0014 */ long __PADDING__[1];
}; /* size: 0x0018 */

struct tagNMHDDISPINFOA
{
  /* 0x0000 */ struct tagNMHDR hdr;
  /* 0x0018 */ int iItem;
  /* 0x001c */ unsigned int mask;
  /* 0x0020 */ char* pszText;
  /* 0x0028 */ int cchTextMax;
  /* 0x002c */ int iImage;
  /* 0x0030 */ __int64 lParam;
}; /* size: 0x0038 */

