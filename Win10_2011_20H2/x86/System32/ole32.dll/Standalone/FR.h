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

