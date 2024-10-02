struct tagNMHDR
{
  /* 0x0000 */ struct HWND__* hwndFrom;
  /* 0x0008 */ unsigned __int64 idFrom;
  /* 0x0010 */ unsigned int code;
  /* 0x0014 */ long __PADDING__[1];
}; /* size: 0x0018 */

struct tagNMREBAR
{
  /* 0x0000 */ struct tagNMHDR hdr;
  /* 0x0018 */ unsigned long dwMask;
  /* 0x001c */ unsigned int uBand;
  /* 0x0020 */ unsigned int fStyle;
  /* 0x0024 */ unsigned int wID;
  /* 0x0028 */ __int64 lParam;
}; /* size: 0x0030 */

