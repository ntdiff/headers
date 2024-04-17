struct tagPOINT
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
}; /* size: 0x0008 */

struct tagRECT
{
  /* 0x0000 */ long left;
  /* 0x0004 */ long top;
  /* 0x0008 */ long right;
  /* 0x000c */ long bottom;
}; /* size: 0x0010 */

struct tagTOUCH_HIT_TESTING_INPUT
{
  /* 0x0000 */ unsigned int pointerId;
  /* 0x0004 */ struct tagPOINT point;
  /* 0x000c */ struct tagRECT boundingBox;
  /* 0x001c */ struct tagRECT nonOccludedBoundingBox;
  /* 0x002c */ unsigned int orientation;
}; /* size: 0x0030 */

