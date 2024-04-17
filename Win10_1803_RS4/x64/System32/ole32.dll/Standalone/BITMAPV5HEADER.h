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

struct BITMAPV5HEADER
{
  /* 0x0000 */ unsigned long bV5Size;
  /* 0x0004 */ long bV5Width;
  /* 0x0008 */ long bV5Height;
  /* 0x000c */ unsigned short bV5Planes;
  /* 0x000e */ unsigned short bV5BitCount;
  /* 0x0010 */ unsigned long bV5Compression;
  /* 0x0014 */ unsigned long bV5SizeImage;
  /* 0x0018 */ long bV5XPelsPerMeter;
  /* 0x001c */ long bV5YPelsPerMeter;
  /* 0x0020 */ unsigned long bV5ClrUsed;
  /* 0x0024 */ unsigned long bV5ClrImportant;
  /* 0x0028 */ unsigned long bV5RedMask;
  /* 0x002c */ unsigned long bV5GreenMask;
  /* 0x0030 */ unsigned long bV5BlueMask;
  /* 0x0034 */ unsigned long bV5AlphaMask;
  /* 0x0038 */ unsigned long bV5CSType;
  /* 0x003c */ struct tagICEXYZTRIPLE bV5Endpoints;
  /* 0x0060 */ unsigned long bV5GammaRed;
  /* 0x0064 */ unsigned long bV5GammaGreen;
  /* 0x0068 */ unsigned long bV5GammaBlue;
  /* 0x006c */ unsigned long bV5Intent;
  /* 0x0070 */ unsigned long bV5ProfileData;
  /* 0x0074 */ unsigned long bV5ProfileSize;
  /* 0x0078 */ unsigned long bV5Reserved;
}; /* size: 0x007c */

