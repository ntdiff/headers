struct tagEVENTMSG
{
  /* 0x0000 */ unsigned int message;
  /* 0x0004 */ unsigned int paramL;
  /* 0x0008 */ unsigned int paramH;
  /* 0x000c */ unsigned long time;
  /* 0x0010 */ struct HWND__* hwnd;
}; /* size: 0x0018 */

