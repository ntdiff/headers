struct tagWIN16BITMAP
{
  /* 0x0000 */ short bmType;
  /* 0x0002 */ short bmWidth;
  /* 0x0004 */ short bmHeight;
  /* 0x0006 */ short bmWidthBytes;
  /* 0x0008 */ unsigned char bmPlanes;
  /* 0x0009 */ unsigned char bmBitsPixel;
  /* 0x000a */ void* bmBits;
}; /* size: 0x000e */

