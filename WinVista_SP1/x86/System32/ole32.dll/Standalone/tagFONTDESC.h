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

struct tagFONTDESC
{
  /* 0x0000 */ unsigned int cbSizeofstruct;
  /* 0x0004 */ wchar_t* lpstrName;
  /* 0x0008 */ union tagCY cySize;
  /* 0x0010 */ short sWeight;
  /* 0x0012 */ short sCharset;
  /* 0x0014 */ int fItalic;
  /* 0x0018 */ int fUnderline;
  /* 0x001c */ int fStrikethrough;
}; /* size: 0x0020 */

