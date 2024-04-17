struct tagBITMAP
{
  /* 0x0000 */ long bmType;
  /* 0x0004 */ long bmWidth;
  /* 0x0008 */ long bmHeight;
  /* 0x000c */ long bmWidthBytes;
  /* 0x0010 */ unsigned short bmPlanes;
  /* 0x0012 */ unsigned short bmBitsPixel;
  /* 0x0014 */ void* bmBits;
}; /* size: 0x0018 */

