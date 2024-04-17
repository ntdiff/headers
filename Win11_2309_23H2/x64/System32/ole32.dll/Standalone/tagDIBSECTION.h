struct tagBITMAP
{
  /* 0x0000 */ long bmType;
  /* 0x0004 */ long bmWidth;
  /* 0x0008 */ long bmHeight;
  /* 0x000c */ long bmWidthBytes;
  /* 0x0010 */ unsigned short bmPlanes;
  /* 0x0012 */ unsigned short bmBitsPixel;
  /* 0x0018 */ void* bmBits;
}; /* size: 0x0020 */

struct tagBITMAPINFOHEADER
{
  /* 0x0000 */ unsigned long biSize;
  /* 0x0004 */ long biWidth;
  /* 0x0008 */ long biHeight;
  /* 0x000c */ unsigned short biPlanes;
  /* 0x000e */ unsigned short biBitCount;
  /* 0x0010 */ unsigned long biCompression;
  /* 0x0014 */ unsigned long biSizeImage;
  /* 0x0018 */ long biXPelsPerMeter;
  /* 0x001c */ long biYPelsPerMeter;
  /* 0x0020 */ unsigned long biClrUsed;
  /* 0x0024 */ unsigned long biClrImportant;
}; /* size: 0x0028 */

struct tagDIBSECTION
{
  /* 0x0000 */ struct tagBITMAP dsBm;
  /* 0x0020 */ struct tagBITMAPINFOHEADER dsBmih;
  /* 0x0048 */ unsigned long dsBitfields[3];
  /* 0x0058 */ void* dshSection;
  /* 0x0060 */ unsigned long dsOffset;
  /* 0x0064 */ long __PADDING__[1];
}; /* size: 0x0068 */

