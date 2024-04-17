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

struct tagCANDIDATEFORM
{
  /* 0x0000 */ unsigned long dwIndex;
  /* 0x0004 */ unsigned long dwStyle;
  /* 0x0008 */ struct tagPOINT ptCurrentPos;
  /* 0x0010 */ struct tagRECT rcArea;
}; /* size: 0x0020 */

