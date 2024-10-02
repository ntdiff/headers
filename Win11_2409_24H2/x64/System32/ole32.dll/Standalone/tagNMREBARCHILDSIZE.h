struct tagNMHDR
{
  /* 0x0000 */ struct HWND__* hwndFrom;
  /* 0x0008 */ unsigned __int64 idFrom;
  /* 0x0010 */ unsigned int code;
  /* 0x0014 */ long __PADDING__[1];
}; /* size: 0x0018 */

struct tagRECT
{
  /* 0x0000 */ long left;
  /* 0x0004 */ long top;
  /* 0x0008 */ long right;
  /* 0x000c */ long bottom;
}; /* size: 0x0010 */

struct tagNMREBARCHILDSIZE
{
  /* 0x0000 */ struct tagNMHDR hdr;
  /* 0x0018 */ unsigned int uBand;
  /* 0x001c */ unsigned int wID;
  /* 0x0020 */ struct tagRECT rcChild;
  /* 0x0030 */ struct tagRECT rcBand;
}; /* size: 0x0040 */

