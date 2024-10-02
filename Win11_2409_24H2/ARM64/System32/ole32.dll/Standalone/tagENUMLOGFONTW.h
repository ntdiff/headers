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

struct tagENUMLOGFONTW
{
  /* 0x0000 */ struct tagLOGFONTW elfLogFont;
  /* 0x005c */ wchar_t elfFullName[64];
  /* 0x00dc */ wchar_t elfStyle[32];
}; /* size: 0x011c */

