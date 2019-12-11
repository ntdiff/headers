typedef struct _WOL_BITMAP_PATTERN
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned long MaskOffset;
  /* 0x0008 */ unsigned long MaskSize;
  /* 0x000c */ unsigned long PatternOffset;
  /* 0x0010 */ unsigned long PatternSize;
} WOL_BITMAP_PATTERN, *PWOL_BITMAP_PATTERN; /* size: 0x0014 */

