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
  /* 0x0004 */ int fErase;
  /* 0x0008 */ struct tagRECT rcPaint;
  /* 0x0018 */ int fRestore;
  /* 0x001c */ int fIncUpdate;
  /* 0x0020 */ unsigned char rgbReserved[32];
}; /* size: 0x0040 */

