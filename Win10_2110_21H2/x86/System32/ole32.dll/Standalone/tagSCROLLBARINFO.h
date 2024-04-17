struct tagRECT
{
  /* 0x0000 */ long left;
  /* 0x0004 */ long top;
  /* 0x0008 */ long right;
  /* 0x000c */ long bottom;
}; /* size: 0x0010 */

struct tagSCROLLBARINFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ struct tagRECT rcScrollBar;
  /* 0x0014 */ int dxyLineButton;
  /* 0x0018 */ int xyThumbTop;
  /* 0x001c */ int xyThumbBottom;
  /* 0x0020 */ int reserved;
  /* 0x0024 */ unsigned long rgstate[6];
}; /* size: 0x003c */

