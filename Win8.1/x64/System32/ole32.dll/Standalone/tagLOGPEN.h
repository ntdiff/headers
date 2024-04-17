struct tagPOINT
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
}; /* size: 0x0008 */

struct tagLOGPEN
{
  /* 0x0000 */ unsigned int lopnStyle;
  /* 0x0004 */ struct tagPOINT lopnWidth;
  /* 0x000c */ unsigned long lopnColor;
}; /* size: 0x0010 */

