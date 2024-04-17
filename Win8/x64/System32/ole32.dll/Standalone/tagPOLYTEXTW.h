struct tagRECT
{
  /* 0x0000 */ long left;
  /* 0x0004 */ long top;
  /* 0x0008 */ long right;
  /* 0x000c */ long bottom;
}; /* size: 0x0010 */

struct tagPOLYTEXTW
{
  /* 0x0000 */ int x;
  /* 0x0004 */ int y;
  /* 0x0008 */ unsigned int n;
  /* 0x0010 */ const wchar_t* lpstr;
  /* 0x0018 */ unsigned int uiFlags;
  /* 0x001c */ struct tagRECT rcl;
  /* 0x0030 */ int* pdx;
}; /* size: 0x0038 */

