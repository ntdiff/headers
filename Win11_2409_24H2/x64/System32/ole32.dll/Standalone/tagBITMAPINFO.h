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

struct tagRGBQUAD
{
  /* 0x0000 */ unsigned char rgbBlue;
  /* 0x0001 */ unsigned char rgbGreen;
  /* 0x0002 */ unsigned char rgbRed;
  /* 0x0003 */ unsigned char rgbReserved;
}; /* size: 0x0004 */

struct tagBITMAPINFO
{
  /* 0x0000 */ struct tagBITMAPINFOHEADER bmiHeader;
  /* 0x0028 */ struct tagRGBQUAD bmiColors[1];
}; /* size: 0x002c */

