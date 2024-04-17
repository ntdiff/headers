struct tagRECT
{
  /* 0x0000 */ long left;
  /* 0x0004 */ long top;
  /* 0x0008 */ long right;
  /* 0x000c */ long bottom;
}; /* size: 0x0010 */

struct tagWINDOWINFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ struct tagRECT rcWindow;
  /* 0x0014 */ struct tagRECT rcClient;
  /* 0x0024 */ unsigned long dwStyle;
  /* 0x0028 */ unsigned long dwExStyle;
  /* 0x002c */ unsigned long dwWindowStatus;
  /* 0x0030 */ unsigned int cxWindowBorders;
  /* 0x0034 */ unsigned int cyWindowBorders;
  /* 0x0038 */ unsigned short atomWindowType;
  /* 0x003a */ unsigned short wCreatorVersion;
}; /* size: 0x003c */

