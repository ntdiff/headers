struct tagPOINT
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
}; /* size: 0x0008 */

struct tagLITEM
{
  /* 0x0000 */ unsigned int mask;
  /* 0x0004 */ int iLink;
  /* 0x0008 */ unsigned int state;
  /* 0x000c */ unsigned int stateMask;
  /* 0x0010 */ wchar_t szID[48];
  /* 0x0070 */ wchar_t szUrl[2084];
}; /* size: 0x10b8 */

struct tagLHITTESTINFO
{
  /* 0x0000 */ struct tagPOINT pt;
  /* 0x0008 */ struct tagLITEM item;
}; /* size: 0x10c0 */

