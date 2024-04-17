struct tagRECT
{
  /* 0x0000 */ long left;
  /* 0x0004 */ long top;
  /* 0x0008 */ long right;
  /* 0x000c */ long bottom;
}; /* size: 0x0010 */

struct tagMONITORINFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ struct tagRECT rcMonitor;
  /* 0x0014 */ struct tagRECT rcWork;
  /* 0x0024 */ unsigned long dwFlags;
}; /* size: 0x0028 */

