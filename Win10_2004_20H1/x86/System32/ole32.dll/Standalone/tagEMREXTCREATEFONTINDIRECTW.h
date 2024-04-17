struct tagEMR
{
  /* 0x0000 */ unsigned long iType;
  /* 0x0004 */ unsigned long nSize;
}; /* size: 0x0008 */

struct tagLOGFONTW
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
  /* 0x001c */ wchar_t lfFaceName[32];
}; /* size: 0x005c */

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

struct tagEXTLOGFONTW
{
  /* 0x0000 */ struct tagLOGFONTW elfLogFont;
  /* 0x005c */ wchar_t elfFullName[64];
  /* 0x00dc */ wchar_t elfStyle[32];
  /* 0x011c */ unsigned long elfVersion;
  /* 0x0120 */ unsigned long elfStyleSize;
  /* 0x0124 */ unsigned long elfMatch;
  /* 0x0128 */ unsigned long elfReserved;
  /* 0x012c */ unsigned char elfVendorId[4];
  /* 0x0130 */ unsigned long elfCulture;
  /* 0x0134 */ struct tagPANOSE elfPanose;
  /* 0x013e */ char __PADDING__[2];
}; /* size: 0x0140 */

struct tagEMREXTCREATEFONTINDIRECTW
{
  /* 0x0000 */ struct tagEMR emr;
  /* 0x0008 */ unsigned long ihFont;
  /* 0x000c */ struct tagEXTLOGFONTW elfw;
}; /* size: 0x014c */

