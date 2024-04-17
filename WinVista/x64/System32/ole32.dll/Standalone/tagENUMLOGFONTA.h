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

struct tagENUMLOGFONTA
{
  /* 0x0000 */ struct tagLOGFONTA elfLogFont;
  /* 0x003c */ unsigned char elfFullName[64];
  /* 0x007c */ unsigned char elfStyle[32];
}; /* size: 0x009c */

