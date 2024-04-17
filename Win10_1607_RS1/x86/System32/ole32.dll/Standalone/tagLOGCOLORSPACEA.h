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

struct tagLOGCOLORSPACEA
{
  /* 0x0000 */ unsigned long lcsSignature;
  /* 0x0004 */ unsigned long lcsVersion;
  /* 0x0008 */ unsigned long lcsSize;
  /* 0x000c */ long lcsCSType;
  /* 0x0010 */ long lcsIntent;
  /* 0x0014 */ struct tagICEXYZTRIPLE lcsEndpoints;
  /* 0x0038 */ unsigned long lcsGammaRed;
  /* 0x003c */ unsigned long lcsGammaGreen;
  /* 0x0040 */ unsigned long lcsGammaBlue;
  /* 0x0044 */ char lcsFilename[260];
}; /* size: 0x0148 */

