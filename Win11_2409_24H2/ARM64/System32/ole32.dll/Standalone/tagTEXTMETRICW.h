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

