struct tagTEXTMETRICW
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
  /* 0x0039 */ char __PADDING__[3];
}; /* size: 0x003c */

struct tagPANOSE
{
  /* 0x0000 */ unsigned char bFamilyType;
  /* 0x0001 */ unsigned char bSerifStyle;
  /* 0x0002 */ unsigned char bWeight;
  /* 0x0003 */ unsigned char bProportion;
  /* 0x0004 */ unsigned char bContrast;
  /* 0x0005 */ unsigned char bStrokeVariation;
  /* 0x0006 */ unsigned char bArmStyle;
  /* 0x0007 */ unsigned char bLetterform;
  /* 0x0008 */ unsigned char bMidline;
  /* 0x0009 */ unsigned char bXHeight;
}; /* size: 0x000a */

struct tagRECT
{
  /* 0x0000 */ long left;
  /* 0x0004 */ long top;
  /* 0x0008 */ long right;
  /* 0x000c */ long bottom;
}; /* size: 0x0010 */

struct tagPOINT
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
}; /* size: 0x0008 */

typedef struct _OUTLINETEXTMETRICW
{
  /* 0x0000 */ unsigned int otmSize;
  /* 0x0004 */ struct tagTEXTMETRICW otmTextMetrics;
  /* 0x0040 */ unsigned char otmFiller;
  /* 0x0041 */ struct tagPANOSE otmPanoseNumber;
  /* 0x004c */ unsigned int otmfsSelection;
  /* 0x0050 */ unsigned int otmfsType;
  /* 0x0054 */ int otmsCharSlopeRise;
  /* 0x0058 */ int otmsCharSlopeRun;
  /* 0x005c */ int otmItalicAngle;
  /* 0x0060 */ unsigned int otmEMSquare;
  /* 0x0064 */ int otmAscent;
  /* 0x0068 */ int otmDescent;
  /* 0x006c */ unsigned int otmLineGap;
  /* 0x0070 */ unsigned int otmsCapEmHeight;
  /* 0x0074 */ unsigned int otmsXHeight;
  /* 0x0078 */ struct tagRECT otmrcFontBox;
  /* 0x0088 */ int otmMacAscent;
  /* 0x008c */ int otmMacDescent;
  /* 0x0090 */ unsigned int otmMacLineGap;
  /* 0x0094 */ unsigned int otmusMinimumPPEM;
  /* 0x0098 */ struct tagPOINT otmptSubscriptSize;
  /* 0x00a0 */ struct tagPOINT otmptSubscriptOffset;
  /* 0x00a8 */ struct tagPOINT otmptSuperscriptSize;
  /* 0x00b0 */ struct tagPOINT otmptSuperscriptOffset;
  /* 0x00b8 */ unsigned int otmsStrikeoutSize;
  /* 0x00bc */ int otmsStrikeoutPosition;
  /* 0x00c0 */ int otmsUnderscoreSize;
  /* 0x00c4 */ int otmsUnderscorePosition;
  /* 0x00c8 */ char* otmpFamilyName;
  /* 0x00cc */ char* otmpFaceName;
  /* 0x00d0 */ char* otmpStyleName;
  /* 0x00d4 */ char* otmpFullName;
} OUTLINETEXTMETRICW, *POUTLINETEXTMETRICW; /* size: 0x00d8 */

