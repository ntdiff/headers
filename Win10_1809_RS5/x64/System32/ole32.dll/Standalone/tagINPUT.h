struct tagMOUSEINPUT
{
  /* 0x0000 */ long dx;
  /* 0x0004 */ long dy;
  /* 0x0008 */ unsigned long mouseData;
  /* 0x000c */ unsigned long dwFlags;
  /* 0x0010 */ unsigned long time;
  /* 0x0018 */ unsigned __int64 dwExtraInfo;
}; /* size: 0x0020 */

struct tagKEYBDINPUT
{
  /* 0x0000 */ unsigned short wVk;
  /* 0x0002 */ unsigned short wScan;
  /* 0x0004 */ unsigned long dwFlags;
  /* 0x0008 */ unsigned long time;
  /* 0x0010 */ unsigned __int64 dwExtraInfo;
}; /* size: 0x0018 */

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
    /* 0x0008 */ struct tagMOUSEINPUT mi;
    /* 0x0008 */ struct tagKEYBDINPUT ki;
    struct
    {
      /* 0x0008 */ struct tagHARDWAREINPUT hi;
      /* 0x0010 */ long __PADDING__[6];
    }; /* size: 0x0020 */
  }; /* size: 0x0020 */
}; /* size: 0x0028 */

