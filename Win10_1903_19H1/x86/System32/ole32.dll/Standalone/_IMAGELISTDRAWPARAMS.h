typedef struct _IMAGELISTDRAWPARAMS
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ struct _IMAGELIST* himl;
  /* 0x0008 */ int i;
  /* 0x000c */ struct HDC__* hdcDst;
  /* 0x0010 */ int x;
  /* 0x0014 */ int y;
  /* 0x0018 */ int cx;
  /* 0x001c */ int cy;
  /* 0x0020 */ int xBitmap;
  /* 0x0024 */ int yBitmap;
  /* 0x0028 */ unsigned long rgbBk;
  /* 0x002c */ unsigned long rgbFg;
  /* 0x0030 */ unsigned int fStyle;
  /* 0x0034 */ unsigned long dwRop;
  /* 0x0038 */ unsigned long fState;
  /* 0x003c */ unsigned long Frame;
  /* 0x0040 */ unsigned long crEffect;
} IMAGELISTDRAWPARAMS, *PIMAGELISTDRAWPARAMS; /* size: 0x0044 */

