struct tagMOUSEINPUT
{
  /* 0x0000 */ long dx;
  /* 0x0004 */ long dy;
  /* 0x0008 */ unsigned long mouseData;
  /* 0x000c */ unsigned long dwFlags;
  /* 0x0010 */ unsigned long time;
  /* 0x0014 */ unsigned long dwExtraInfo;
}; /* size: 0x0018 */

struct tagKEYBDINPUT
{
  /* 0x0000 */ unsigned short wVk;
  /* 0x0002 */ unsigned short wScan;
  /* 0x0004 */ unsigned long dwFlags;
  /* 0x0008 */ unsigned long time;
  /* 0x000c */ unsigned long dwExtraInfo;
}; /* size: 0x0010 */

struct tagHARDWAREINPUT
{
  /* 0x0000 */ unsigned long uMsg;
  /* 0x0004 */ unsigned short wParamL;
  /* 0x0006 */ unsigned short wParamH;
}; /* size: 0x0008 */

struct tagINPUT
{
  /* 0x0000 */ unsigned long type;
  union
  {
    /* 0x0004 */ struct tagMOUSEINPUT mi;
    /* 0x0004 */ struct tagKEYBDINPUT ki;
    struct
    {
      /* 0x0004 */ struct tagHARDWAREINPUT hi;
      /* 0x000c */ long __PADDING__[4];
    }; /* size: 0x0018 */
  }; /* size: 0x0018 */
}; /* size: 0x001c */

