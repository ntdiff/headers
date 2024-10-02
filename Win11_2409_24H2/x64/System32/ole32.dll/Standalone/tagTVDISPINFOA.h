struct tagNMHDR
{
  /* 0x0000 */ struct HWND__* hwndFrom;
  /* 0x0008 */ unsigned __int64 idFrom;
  /* 0x0010 */ unsigned int code;
  /* 0x0014 */ long __PADDING__[1];
}; /* size: 0x0018 */

struct tagTVITEMA
{
  /* 0x0000 */ unsigned int mask;
  /* 0x0008 */ struct _TREEITEM* hItem;
  /* 0x0010 */ unsigned int state;
  /* 0x0014 */ unsigned int stateMask;
  /* 0x0018 */ char* pszText;
  /* 0x0020 */ int cchTextMax;
  /* 0x0024 */ int iImage;
  /* 0x0028 */ int iSelectedImage;
  /* 0x002c */ int cChildren;
  /* 0x0030 */ __int64 lParam;
}; /* size: 0x0038 */

struct tagTVDISPINFOA
{
  /* 0x0000 */ struct tagNMHDR hdr;
  /* 0x0018 */ struct tagTVITEMA item;
}; /* size: 0x0050 */

