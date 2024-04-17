struct tagPOINT
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
}; /* size: 0x0008 */

struct tagMSG
{
  /* 0x0000 */ struct HWND__* hwnd;
  /* 0x0008 */ unsigned int message;
  /* 0x0010 */ unsigned __int64 wParam;
  /* 0x0018 */ __int64 lParam;
  /* 0x0020 */ unsigned long time;
  /* 0x0024 */ struct tagPOINT pt;
  /* 0x002c */ long __PADDING__[1];
}; /* size: 0x0030 */

