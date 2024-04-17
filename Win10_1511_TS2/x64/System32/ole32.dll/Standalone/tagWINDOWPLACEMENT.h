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

struct tagWINDOWPLACEMENT
{
  /* 0x0000 */ unsigned int length;
  /* 0x0004 */ unsigned int flags;
  /* 0x0008 */ unsigned int showCmd;
  /* 0x000c */ struct tagPOINT ptMinPosition;
  /* 0x0014 */ struct tagPOINT ptMaxPosition;
  /* 0x001c */ struct tagRECT rcNormalPosition;
}; /* size: 0x002c */

