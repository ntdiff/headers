struct tagPOINT
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
}; /* size: 0x0008 */

struct tagMSG
{
  /* 0x0000 */ struct HWND__* hwnd;
  /* 0x0004 */ unsigned int message;
  /* 0x0008 */ unsigned int wParam;
  /* 0x000c */ long lParam;
  /* 0x0010 */ unsigned long time;
  /* 0x0014 */ struct tagPOINT pt;
}; /* size: 0x001c */

