struct tagPOINT
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
}; /* size: 0x0008 */

struct tagTOUCH_HIT_TESTING_PROXIMITY_EVALUATION
{
  /* 0x0000 */ unsigned short score;
  /* 0x0004 */ struct tagPOINT adjustedPoint;
}; /* size: 0x000c */

