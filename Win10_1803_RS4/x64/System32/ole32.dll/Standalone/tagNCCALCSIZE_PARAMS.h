struct tagRECT
{
  /* 0x0000 */ long left;
  /* 0x0004 */ long top;
  /* 0x0008 */ long right;
  /* 0x000c */ long bottom;
}; /* size: 0x0010 */

struct tagNCCALCSIZE_PARAMS
{
  /* 0x0000 */ struct tagRECT rgrc[3];
  /* 0x0030 */ struct tagWINDOWPOS* lppos;
}; /* size: 0x0038 */

