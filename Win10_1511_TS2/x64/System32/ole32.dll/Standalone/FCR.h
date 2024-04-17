union tagCY
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long Lo;
      /* 0x0004 */ long Hi;
    }; /* size: 0x0008 */
    /* 0x0000 */ __int64 int64;
  }; /* size: 0x0008 */
}; /* size: 0x0008 */

struct FR
{
  /* 0x0000 */ union tagCY cySize;
  /* 0x0008 */ long cyLogical;
  /* 0x000c */ long cyHimetric;
  /* 0x0010 */ short sCharset;
  /* 0x0012 */ short sWeight;
  union
  {
    struct /* bitfield */
    {
      /* 0x0014 */ unsigned char fBold : 1; /* bit position: 0 */
      /* 0x0014 */ unsigned char fItalic : 1; /* bit position: 1 */
      /* 0x0014 */ unsigned char fUnderline : 1; /* bit position: 2 */
      /* 0x0014 */ unsigned char fStrikethrough : 1; /* bit position: 3 */
    }; /* bitfield */
    /* 0x0014 */ unsigned char bFlags;
  }; /* size: 0x0001 */
  /* 0x0016 */ wchar_t rgchFace[32];
  /* 0x0056 */ char __PADDING__[2];
}; /* size: 0x0058 */

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

struct FCR
{
  /* 0x0000 */ struct FR frRequest;
  /* 0x0058 */ struct FR frActual;
  /* 0x00b0 */ unsigned long cRefs;
  /* 0x00b8 */ struct HFONT__* hfont;
  /* 0x00c0 */ struct tagTEXTMETRICW tm;
  /* 0x00fc */ long __PADDING__[1];
}; /* size: 0x0100 */

