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

struct tagNONCLIENTMETRICSA
{
  /* 0x0000 */ unsigned int cbSize;
  /* 0x0004 */ int iBorderWidth;
  /* 0x0008 */ int iScrollWidth;
  /* 0x000c */ int iScrollHeight;
  /* 0x0010 */ int iCaptionWidth;
  /* 0x0014 */ int iCaptionHeight;
  /* 0x0018 */ struct tagLOGFONTA lfCaptionFont;
  /* 0x0054 */ int iSmCaptionWidth;
  /* 0x0058 */ int iSmCaptionHeight;
  /* 0x005c */ struct tagLOGFONTA lfSmCaptionFont;
  /* 0x0098 */ int iMenuWidth;
  /* 0x009c */ int iMenuHeight;
  /* 0x00a0 */ struct tagLOGFONTA lfMenuFont;
  /* 0x00dc */ struct tagLOGFONTA lfStatusFont;
  /* 0x0118 */ struct tagLOGFONTA lfMessageFont;
  /* 0x0154 */ int iPaddedBorderWidth;
}; /* size: 0x0158 */

