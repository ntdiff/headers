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

struct tagNMRBAUTOSIZE
{
  /* 0x0000 */ struct tagNMHDR hdr;
  /* 0x0018 */ int fChanged;
  /* 0x001c */ struct tagRECT rcTarget;
  /* 0x002c */ struct tagRECT rcActual;
  /* 0x003c */ long __PADDING__[1];
}; /* size: 0x0040 */

