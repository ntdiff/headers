struct tagSIZE
{
  /* 0x0000 */ long cx;
  /* 0x0004 */ long cy;
}; /* size: 0x0008 */

struct tagBUTTON_SPLITINFO
{
  /* 0x0000 */ unsigned int mask;
  /* 0x0008 */ struct _IMAGELIST* himlGlyph;
  /* 0x0010 */ unsigned int uSplitStyle;
  /* 0x0014 */ struct tagSIZE size;
  /* 0x001c */ long __PADDING__[1];
}; /* size: 0x0020 */

