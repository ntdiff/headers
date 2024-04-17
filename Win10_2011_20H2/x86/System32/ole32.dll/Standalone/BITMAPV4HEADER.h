struct tagCIEXYZ
{
  /* 0x0000 */ long ciexyzX;
  /* 0x0004 */ long ciexyzY;
  /* 0x0008 */ long ciexyzZ;
}; /* size: 0x000c */

struct tagICEXYZTRIPLE
{
  /* 0x0000 */ struct tagCIEXYZ ciexyzRed;
  /* 0x000c */ struct tagCIEXYZ ciexyzGreen;
  /* 0x0018 */ struct tagCIEXYZ ciexyzBlue;
}; /* size: 0x0024 */

struct BITMAPV4HEADER
{
  /* 0x0000 */ unsigned long bV4Size;
  /* 0x0004 */ long bV4Width;
  /* 0x0008 */ long bV4Height;
  /* 0x000c */ unsigned short bV4Planes;
  /* 0x000e */ unsigned short bV4BitCount;
  /* 0x0010 */ unsigned long bV4V4Compression;
  /* 0x0014 */ unsigned long bV4SizeImage;
  /* 0x0018 */ long bV4XPelsPerMeter;
  /* 0x001c */ long bV4YPelsPerMeter;
  /* 0x0020 */ unsigned long bV4ClrUsed;
  /* 0x0024 */ unsigned long bV4ClrImportant;
  /* 0x0028 */ unsigned long bV4RedMask;
  /* 0x002c */ unsigned long bV4GreenMask;
  /* 0x0030 */ unsigned long bV4BlueMask;
  /* 0x0034 */ unsigned long bV4AlphaMask;
  /* 0x0038 */ unsigned long bV4CSType;
  /* 0x003c */ struct tagICEXYZTRIPLE bV4Endpoints;
  /* 0x0060 */ unsigned long bV4GammaRed;
  /* 0x0064 */ unsigned long bV4GammaGreen;
  /* 0x0068 */ unsigned long bV4GammaBlue;
}; /* size: 0x006c */

