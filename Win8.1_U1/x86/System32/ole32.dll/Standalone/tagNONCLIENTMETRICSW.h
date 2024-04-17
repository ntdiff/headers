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

struct tagNONCLIENTMETRICSW
{
  /* 0x0000 */ unsigned int cbSize;
  /* 0x0004 */ int iBorderWidth;
  /* 0x0008 */ int iScrollWidth;
  /* 0x000c */ int iScrollHeight;
  /* 0x0010 */ int iCaptionWidth;
  /* 0x0014 */ int iCaptionHeight;
  /* 0x0018 */ struct tagLOGFONTW lfCaptionFont;
  /* 0x0074 */ int iSmCaptionWidth;
  /* 0x0078 */ int iSmCaptionHeight;
  /* 0x007c */ struct tagLOGFONTW lfSmCaptionFont;
  /* 0x00d8 */ int iMenuWidth;
  /* 0x00dc */ int iMenuHeight;
  /* 0x00e0 */ struct tagLOGFONTW lfMenuFont;
  /* 0x013c */ struct tagLOGFONTW lfStatusFont;
  /* 0x0198 */ struct tagLOGFONTW lfMessageFont;
  /* 0x01f4 */ int iPaddedBorderWidth;
}; /* size: 0x01f8 */

