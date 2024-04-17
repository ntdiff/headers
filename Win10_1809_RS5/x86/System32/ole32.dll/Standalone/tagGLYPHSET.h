struct tagWCRANGE
{
  /* 0x0000 */ wchar_t wcLow;
  /* 0x0002 */ unsigned short cGlyphs;
}; /* size: 0x0004 */

struct tagGLYPHSET
{
  /* 0x0000 */ unsigned long cbThis;
  /* 0x0004 */ unsigned long flAccel;
  /* 0x0008 */ unsigned long cGlyphsSupported;
  /* 0x000c */ unsigned long cRanges;
  /* 0x0010 */ struct tagWCRANGE ranges[1];
}; /* size: 0x0014 */

