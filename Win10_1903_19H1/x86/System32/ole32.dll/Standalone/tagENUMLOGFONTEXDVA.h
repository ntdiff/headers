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

struct tagENUMLOGFONTEXA
{
  /* 0x0000 */ struct tagLOGFONTA elfLogFont;
  /* 0x003c */ unsigned char elfFullName[64];
  /* 0x007c */ unsigned char elfStyle[32];
  /* 0x009c */ unsigned char elfScript[32];
}; /* size: 0x00bc */

struct tagDESIGNVECTOR
{
  /* 0x0000 */ unsigned long dvReserved;
  /* 0x0004 */ unsigned long dvNumAxes;
  /* 0x0008 */ long dvValues[16];
}; /* size: 0x0048 */

struct tagENUMLOGFONTEXDVA
{
  /* 0x0000 */ struct tagENUMLOGFONTEXA elfEnumLogfontEx;
  /* 0x00bc */ struct tagDESIGNVECTOR elfDesignVector;
}; /* size: 0x0104 */

