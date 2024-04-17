struct tagPOINT
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
}; /* size: 0x0008 */

struct tagMSLLHOOKSTRUCT
{
  /* 0x0000 */ struct tagPOINT pt;
  /* 0x0008 */ unsigned long mouseData;
  /* 0x000c */ unsigned long flags;
  /* 0x0010 */ unsigned long time;
  /* 0x0014 */ unsigned long dwExtraInfo;
}; /* size: 0x0018 */

