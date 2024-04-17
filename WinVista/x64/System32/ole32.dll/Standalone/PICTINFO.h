struct tagRECT
{
  /* 0x0000 */ long left;
  /* 0x0004 */ long top;
  /* 0x0008 */ long right;
  /* 0x000c */ long bottom;
}; /* size: 0x0010 */

struct PICTINFO
{
  /* 0x0000 */ void* hmf;
  /* 0x0008 */ struct tagRECT bbox;
  /* 0x0018 */ unsigned short inch;
  /* 0x001a */ char __PADDING__[6];
}; /* size: 0x0020 */

