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

struct tagIMECHARPOSITION
{
  /* 0x0000 */ unsigned long dwSize;
  /* 0x0004 */ unsigned long dwCharPos;
  /* 0x0008 */ struct tagPOINT pt;
  /* 0x0010 */ unsigned int cLineHeight;
  /* 0x0014 */ struct tagRECT rcDocument;
}; /* size: 0x0024 */

