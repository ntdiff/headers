struct tagNMHDR
{
  /* 0x0000 */ struct HWND__* hwndFrom;
  /* 0x0008 */ unsigned __int64 idFrom;
  /* 0x0010 */ unsigned int code;
  /* 0x0014 */ long __PADDING__[1];
}; /* size: 0x0018 */

struct tagPOINT
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
}; /* size: 0x0008 */

struct tagNMITEMACTIVATE
{
  /* 0x0000 */ struct tagNMHDR hdr;
  /* 0x0018 */ int iItem;
  /* 0x001c */ int iSubItem;
  /* 0x0020 */ unsigned int uNewState;
  /* 0x0024 */ unsigned int uOldState;
  /* 0x0028 */ unsigned int uChanged;
  /* 0x002c */ struct tagPOINT ptAction;
  /* 0x0038 */ __int64 lParam;
  /* 0x0040 */ unsigned int uKeyFlags;
  /* 0x0044 */ long __PADDING__[1];
}; /* size: 0x0048 */

