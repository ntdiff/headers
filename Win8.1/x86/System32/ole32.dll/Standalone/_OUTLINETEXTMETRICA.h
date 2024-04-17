struct tagTEXTMETRICA
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
  /* 0x0035 */ char __PADDING__[3];
}; /* size: 0x0038 */

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

typedef struct _OUTLINETEXTMETRICA
{
  /* 0x0000 */ unsigned int otmSize;
  /* 0x0004 */ struct tagTEXTMETRICA otmTextMetrics;
  /* 0x003c */ unsigned char otmFiller;
  /* 0x003d */ struct tagPANOSE otmPanoseNumber;
  /* 0x0048 */ unsigned int otmfsSelection;
  /* 0x004c */ unsigned int otmfsType;
  /* 0x0050 */ int otmsCharSlopeRise;
  /* 0x0054 */ int otmsCharSlopeRun;
  /* 0x0058 */ int otmItalicAngle;
  /* 0x005c */ unsigned int otmEMSquare;
  /* 0x0060 */ int otmAscent;
  /* 0x0064 */ int otmDescent;
  /* 0x0068 */ unsigned int otmLineGap;
  /* 0x006c */ unsigned int otmsCapEmHeight;
  /* 0x0070 */ unsigned int otmsXHeight;
  /* 0x0074 */ struct tagRECT otmrcFontBox;
  /* 0x0084 */ int otmMacAscent;
  /* 0x0088 */ int otmMacDescent;
  /* 0x008c */ unsigned int otmMacLineGap;
  /* 0x0090 */ unsigned int otmusMinimumPPEM;
  /* 0x0094 */ struct tagPOINT otmptSubscriptSize;
  /* 0x009c */ struct tagPOINT otmptSubscriptOffset;
  /* 0x00a4 */ struct tagPOINT otmptSuperscriptSize;
  /* 0x00ac */ struct tagPOINT otmptSuperscriptOffset;
  /* 0x00b4 */ unsigned int otmsStrikeoutSize;
  /* 0x00b8 */ int otmsStrikeoutPosition;
  /* 0x00bc */ int otmsUnderscoreSize;
  /* 0x00c0 */ int otmsUnderscorePosition;
  /* 0x00c4 */ char* otmpFamilyName;
  /* 0x00c8 */ char* otmpFaceName;
  /* 0x00cc */ char* otmpStyleName;
  /* 0x00d0 */ char* otmpFullName;
} OUTLINETEXTMETRICA, *POUTLINETEXTMETRICA; /* size: 0x00d4 */

