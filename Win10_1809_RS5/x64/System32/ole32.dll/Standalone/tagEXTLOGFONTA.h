struct tagLOGFONTA
{
  /* 0x0000 */ long lfHeight;
  /* 0x0004 */ long lfWidth;
  /* 0x0008 */ long lfEscapement;
  /* 0x000c */ long lfOrientation;
  /* 0x0010 */ long lfWeight;
  /* 0x0014 */ unsigned char lfItalic;
  /* 0x0015 */ unsigned char lfUnderline;
  /* 0x0016 */ unsigned char lfStrikeOut;
  /* 0x0017 */ unsigned char lfCharSet;
  /* 0x0018 */ unsigned char lfOutPrecision;
  /* 0x0019 */ unsigned char lfClipPrecision;
  /* 0x001a */ unsigned char lfQuality;
  /* 0x001b */ unsigned char lfPitchAndFamily;
  /* 0x001c */ char lfFaceName[32];
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

struct tagEXTLOGFONTA
{
  /* 0x0000 */ struct tagLOGFONTA elfLogFont;
  /* 0x003c */ unsigned char elfFullName[64];
  /* 0x007c */ unsigned char elfStyle[32];
  /* 0x009c */ unsigned long elfVersion;
  /* 0x00a0 */ unsigned long elfStyleSize;
  /* 0x00a4 */ unsigned long elfMatch;
  /* 0x00a8 */ unsigned long elfReserved;
  /* 0x00ac */ unsigned char elfVendorId[4];
  /* 0x00b0 */ unsigned long elfCulture;
  /* 0x00b4 */ struct tagPANOSE elfPanose;
  /* 0x00be */ char __PADDING__[2];
}; /* size: 0x00c0 */

