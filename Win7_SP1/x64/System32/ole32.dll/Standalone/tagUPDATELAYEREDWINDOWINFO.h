struct tagUPDATELAYEREDWINDOWINFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0008 */ struct HDC__* hdcDst;
  /* 0x0010 */ const struct tagPOINT* pptDst;
  /* 0x0018 */ const struct tagSIZE* psize;
  /* 0x0020 */ struct HDC__* hdcSrc;
  /* 0x0028 */ const struct tagPOINT* pptSrc;
  /* 0x0030 */ unsigned long crKey;
  /* 0x0038 */ const struct _BLENDFUNCTION* pblend;
  /* 0x0040 */ unsigned long dwFlags;
  /* 0x0048 */ const struct tagRECT* prcDirty;
}; /* size: 0x0050 */

