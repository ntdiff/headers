struct tagPOINT
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
}; /* size: 0x0008 */

struct tagMINMAXINFO
{
  /* 0x0000 */ struct tagPOINT ptReserved;
  /* 0x0008 */ struct tagPOINT ptMaxSize;
  /* 0x0010 */ struct tagPOINT ptMaxPosition;
  /* 0x0018 */ struct tagPOINT ptMinTrackSize;
  /* 0x0020 */ struct tagPOINT ptMaxTrackSize;
}; /* size: 0x0028 */

