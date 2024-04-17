struct tagNEWTEXTMETRICA
{
  /* 0x0000 */ long tmHeight;
  /* 0x0004 */ long tmAscent;
  /* 0x0008 */ long tmDescent;
  /* 0x000c */ long tmInternalLeading;
  /* 0x0010 */ long tmExternalLeading;
  /* 0x0014 */ long tmAveCharWidth;
  /* 0x0018 */ long tmMaxCharWidth;
  /* 0x001c */ long tmWeight;
  /* 0x0020 */ long tmOverhang;
  /* 0x0024 */ long tmDigitizedAspectX;
  /* 0x0028 */ long tmDigitizedAspectY;
  /* 0x002c */ unsigned char tmFirstChar;
  /* 0x002d */ unsigned char tmLastChar;
  /* 0x002e */ unsigned char tmDefaultChar;
  /* 0x002f */ unsigned char tmBreakChar;
  /* 0x0030 */ unsigned char tmItalic;
  /* 0x0031 */ unsigned char tmUnderlined;
  /* 0x0032 */ unsigned char tmStruckOut;
  /* 0x0033 */ unsigned char tmPitchAndFamily;
  /* 0x0034 */ unsigned char tmCharSet;
  /* 0x0038 */ unsigned long ntmFlags;
  /* 0x003c */ unsigned int ntmSizeEM;
  /* 0x0040 */ unsigned int ntmCellHeight;
  /* 0x0044 */ unsigned int ntmAvgWidth;
}; /* size: 0x0048 */

struct tagFONTSIGNATURE
{
  /* 0x0000 */ unsigned long fsUsb[4];
  /* 0x0010 */ unsigned long fsCsb[2];
}; /* size: 0x0018 */

struct tagNEWTEXTMETRICEXA
{
  /* 0x0000 */ struct tagNEWTEXTMETRICA ntmTm;
  /* 0x0048 */ struct tagFONTSIGNATURE ntmFontSig;
}; /* size: 0x0060 */

