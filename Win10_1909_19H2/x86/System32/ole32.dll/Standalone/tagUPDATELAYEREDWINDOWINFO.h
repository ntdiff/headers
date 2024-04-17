struct tagUPDATELAYEREDWINDOWINFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ struct HDC__* hdcDst;
  /* 0x0008 */ const struct tagPOINT* pptDst;
  /* 0x000c */ const struct tagSIZE* psize;
  /* 0x0010 */ struct HDC__* hdcSrc;
  /* 0x0014 */ const struct tagPOINT* pptSrc;
  /* 0x0018 */ unsigned long crKey;
  /* 0x001c */ const struct _BLENDFUNCTION* pblend;
  /* 0x0020 */ unsigned long dwFlags;
  /* 0x0024 */ const struct tagRECT* prcDirty;
}; /* size: 0x0028 */

