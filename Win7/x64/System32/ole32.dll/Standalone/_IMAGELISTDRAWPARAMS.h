typedef struct _IMAGELISTDRAWPARAMS
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0008 */ struct _IMAGELIST* himl;
  /* 0x0010 */ int i;
  /* 0x0018 */ struct HDC__* hdcDst;
  /* 0x0020 */ int x;
  /* 0x0024 */ int y;
  /* 0x0028 */ int cx;
  /* 0x002c */ int cy;
  /* 0x0030 */ int xBitmap;
  /* 0x0034 */ int yBitmap;
  /* 0x0038 */ unsigned long rgbBk;
  /* 0x003c */ unsigned long rgbFg;
  /* 0x0040 */ unsigned int fStyle;
  /* 0x0044 */ unsigned long dwRop;
  /* 0x0048 */ unsigned long fState;
  /* 0x004c */ unsigned long Frame;
  /* 0x0050 */ unsigned long crEffect;
  /* 0x0054 */ long __PADDING__[1];
} IMAGELISTDRAWPARAMS, *PIMAGELISTDRAWPARAMS; /* size: 0x0058 */

