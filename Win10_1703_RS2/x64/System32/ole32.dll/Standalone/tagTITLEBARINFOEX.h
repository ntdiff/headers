struct tagRECT
{
  /* 0x0000 */ long left;
  /* 0x0004 */ long top;
  /* 0x0008 */ long right;
  /* 0x000c */ long bottom;
}; /* size: 0x0010 */

struct tagTITLEBARINFOEX
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ struct tagRECT rcTitleBar;
  /* 0x0014 */ unsigned long rgstate[6];
  /* 0x002c */ struct tagRECT rgrect[6];
}; /* size: 0x008c */

