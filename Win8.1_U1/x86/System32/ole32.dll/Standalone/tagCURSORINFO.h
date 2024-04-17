struct tagPOINT
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
}; /* size: 0x0008 */

struct tagCURSORINFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ unsigned long flags;
  /* 0x0008 */ struct HICON__* hCursor;
  /* 0x000c */ struct tagPOINT ptScreenPos;
}; /* size: 0x0014 */

