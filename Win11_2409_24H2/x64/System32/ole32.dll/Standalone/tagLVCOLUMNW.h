struct tagLVCOLUMNW
{
  /* 0x0000 */ unsigned int mask;
  /* 0x0004 */ int fmt;
  /* 0x0008 */ int cx;
  /* 0x0010 */ wchar_t* pszText;
  /* 0x0018 */ int cchTextMax;
  /* 0x001c */ int iSubItem;
  /* 0x0020 */ int iImage;
  /* 0x0024 */ int iOrder;
  /* 0x0028 */ int cxMin;
  /* 0x002c */ int cxDefault;
  /* 0x0030 */ int cxIdeal;
  /* 0x0034 */ long __PADDING__[1];
}; /* size: 0x0038 */

