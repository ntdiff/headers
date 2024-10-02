struct tagNMHDR
{
  /* 0x0000 */ struct HWND__* hwndFrom;
  /* 0x0008 */ unsigned __int64 idFrom;
  /* 0x0010 */ unsigned int code;
  /* 0x0014 */ long __PADDING__[1];
}; /* size: 0x0018 */

struct tagNMREBARAUTOBREAK
{
  /* 0x0000 */ struct tagNMHDR hdr;
  /* 0x0018 */ unsigned int uBand;
  /* 0x001c */ unsigned int wID;
  /* 0x0020 */ __int64 lParam;
  /* 0x0028 */ unsigned int uMsg;
  /* 0x002c */ unsigned int fStyleCurrent;
  /* 0x0030 */ int fAutoBreak;
  /* 0x0034 */ long __PADDING__[1];
}; /* size: 0x0038 */

