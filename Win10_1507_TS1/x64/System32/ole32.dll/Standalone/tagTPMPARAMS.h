struct tagRECT
{
  /* 0x0000 */ long left;
  /* 0x0004 */ long top;
  /* 0x0008 */ long right;
  /* 0x000c */ long bottom;
}; /* size: 0x0010 */

struct tagTPMPARAMS
{
  /* 0x0000 */ unsigned int cbSize;
  /* 0x0004 */ struct tagRECT rcExclude;
}; /* size: 0x0014 */

