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

struct tagENUMLOGFONTEXW
{
  /* 0x0000 */ struct tagLOGFONTW elfLogFont;
  /* 0x005c */ wchar_t elfFullName[64];
  /* 0x00dc */ wchar_t elfStyle[32];
  /* 0x011c */ wchar_t elfScript[32];
}; /* size: 0x015c */

struct tagDESIGNVECTOR
{
  /* 0x0000 */ unsigned long dvReserved;
  /* 0x0004 */ unsigned long dvNumAxes;
  /* 0x0008 */ long dvValues[16];
}; /* size: 0x0048 */

struct tagENUMLOGFONTEXDVW
{
  /* 0x0000 */ struct tagENUMLOGFONTEXW elfEnumLogfontEx;
  /* 0x015c */ struct tagDESIGNVECTOR elfDesignVector;
}; /* size: 0x01a4 */

