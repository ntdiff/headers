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

struct NMPGSCROLL
{
  /* 0x0000 */ struct tagNMHDR hdr;
  /* 0x0018 */ unsigned short fwKeys;
  /* 0x001a */ struct tagRECT rcParent;
  /* 0x002a */ int iDir;
  /* 0x002e */ int iXpos;
  /* 0x0032 */ int iYpos;
  /* 0x0036 */ int iScroll;
}; /* size: 0x003a */

