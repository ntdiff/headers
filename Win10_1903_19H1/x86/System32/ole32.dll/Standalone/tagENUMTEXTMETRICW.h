struct tagNEWTEXTMETRICW
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
  /* 0x002c */ wchar_t tmFirstChar;
  /* 0x002e */ wchar_t tmLastChar;
  /* 0x0030 */ wchar_t tmDefaultChar;
  /* 0x0032 */ wchar_t tmBreakChar;
  /* 0x0034 */ unsigned char tmItalic;
  /* 0x0035 */ unsigned char tmUnderlined;
  /* 0x0036 */ unsigned char tmStruckOut;
  /* 0x0037 */ unsigned char tmPitchAndFamily;
  /* 0x0038 */ unsigned char tmCharSet;
  /* 0x003c */ unsigned long ntmFlags;
  /* 0x0040 */ unsigned int ntmSizeEM;
  /* 0x0044 */ unsigned int ntmCellHeight;
  /* 0x0048 */ unsigned int ntmAvgWidth;
}; /* size: 0x004c */

struct tagFONTSIGNATURE
{
  /* 0x0000 */ unsigned long fsUsb[4];
  /* 0x0010 */ unsigned long fsCsb[2];
}; /* size: 0x0018 */

struct tagNEWTEXTMETRICEXW
{
  /* 0x0000 */ struct tagNEWTEXTMETRICW ntmTm;
  /* 0x004c */ struct tagFONTSIGNATURE ntmFontSig;
}; /* size: 0x0064 */

struct tagAXISINFOW
{
  /* 0x0000 */ long axMinValue;
  /* 0x0004 */ long axMaxValue;
  /* 0x0008 */ wchar_t axAxisName[16];
}; /* size: 0x0028 */

struct tagAXESLISTW
{
  /* 0x0000 */ unsigned long axlReserved;
  /* 0x0004 */ unsigned long axlNumAxes;
  /* 0x0008 */ struct tagAXISINFOW axlAxisInfo[16];
}; /* size: 0x0288 */

struct tagENUMTEXTMETRICW
{
  /* 0x0000 */ struct tagNEWTEXTMETRICEXW etmNewTextMetricEx;
  /* 0x0064 */ struct tagAXESLISTW etmAxesList;
}; /* size: 0x02ec */

