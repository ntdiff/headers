struct tagTVITEMEXA
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
  /* 0x0038 */ int iIntegral;
  /* 0x003c */ unsigned int uStateEx;
  /* 0x0040 */ struct HWND__* hwnd;
  /* 0x0048 */ int iExpandedImage;
  /* 0x004c */ int iReserved;
}; /* size: 0x0050 */

