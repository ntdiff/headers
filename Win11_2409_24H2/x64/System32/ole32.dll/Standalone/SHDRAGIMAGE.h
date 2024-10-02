struct tagSIZE
{
  /* 0x0000 */ long cx;
  /* 0x0004 */ long cy;
}; /* size: 0x0008 */

struct tagPOINT
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
}; /* size: 0x0008 */

struct SHDRAGIMAGE
{
  /* 0x0000 */ struct tagSIZE sizeDragImage;
  /* 0x0008 */ struct tagPOINT ptOffset;
  /* 0x0010 */ struct HBITMAP__* hbmpDragImage;
  /* 0x0018 */ unsigned long crColorKey;
  /* 0x001c */ long __PADDING__[1];
}; /* size: 0x0020 */

