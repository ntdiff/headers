struct KS_FRAMING_RANGE
{
  /* 0x0000 */ unsigned long MinFrameSize;
  /* 0x0004 */ unsigned long MaxFrameSize;
  /* 0x0008 */ unsigned long Stepping;
}; /* size: 0x000c */

struct KS_FRAMING_RANGE_WEIGHTED
{
  /* 0x0000 */ struct KS_FRAMING_RANGE Range;
  /* 0x000c */ unsigned long InPlaceWeight;
  /* 0x0010 */ unsigned long NotInPlaceWeight;
}; /* size: 0x0014 */

