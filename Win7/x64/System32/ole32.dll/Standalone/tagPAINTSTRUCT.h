struct tagRECT
{
  /* 0x0000 */ long left;
  /* 0x0004 */ long top;
  /* 0x0008 */ long right;
  /* 0x000c */ long bottom;
}; /* size: 0x0010 */

struct tagPAINTSTRUCT
{
  /* 0x0000 */ struct HDC__* hdc;
  /* 0x0008 */ int fErase;
  /* 0x000c */ struct tagRECT rcPaint;
  /* 0x001c */ int fRestore;
  /* 0x0020 */ int fIncUpdate;
  /* 0x0024 */ unsigned char rgbReserved[32];
  /* 0x0044 */ long __PADDING__[1];
}; /* size: 0x0048 */

