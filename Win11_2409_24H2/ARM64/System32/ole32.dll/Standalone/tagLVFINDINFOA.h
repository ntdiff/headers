struct tagPOINT
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
}; /* size: 0x0008 */

struct tagLVFINDINFOA
{
  /* 0x0000 */ unsigned int flags;
  /* 0x0008 */ const char* psz;
  /* 0x0010 */ __int64 lParam;
  /* 0x0018 */ struct tagPOINT pt;
  /* 0x0020 */ unsigned int vkDirection;
  /* 0x0024 */ long __PADDING__[1];
}; /* size: 0x0028 */

