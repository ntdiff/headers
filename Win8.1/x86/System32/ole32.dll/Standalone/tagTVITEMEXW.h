struct tagTVITEMEXW
{
  /* 0x0000 */ unsigned int mask;
  /* 0x0004 */ struct _TREEITEM* hItem;
  /* 0x0008 */ unsigned int state;
  /* 0x000c */ unsigned int stateMask;
  /* 0x0010 */ wchar_t* pszText;
  /* 0x0014 */ int cchTextMax;
  /* 0x0018 */ int iImage;
  /* 0x001c */ int iSelectedImage;
  /* 0x0020 */ int cChildren;
  /* 0x0024 */ long lParam;
  /* 0x0028 */ int iIntegral;
  /* 0x002c */ unsigned int uStateEx;
  /* 0x0030 */ struct HWND__* hwnd;
  /* 0x0034 */ int iExpandedImage;
  /* 0x0038 */ int iReserved;
}; /* size: 0x003c */

