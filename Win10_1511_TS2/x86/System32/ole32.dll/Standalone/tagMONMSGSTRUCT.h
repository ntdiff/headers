struct tagDDEML_MSG_HOOK_DATA
{
  /* 0x0000 */ unsigned int uiLo;
  /* 0x0004 */ unsigned int uiHi;
  /* 0x0008 */ unsigned long cbData;
  /* 0x000c */ unsigned long Data[8];
}; /* size: 0x002c */

struct tagMONMSGSTRUCT
{
  /* 0x0000 */ unsigned int cb;
  /* 0x0004 */ struct HWND__* hwndTo;
  /* 0x0008 */ unsigned long dwTime;
  /* 0x000c */ void* hTask;
  /* 0x0010 */ unsigned int wMsg;
  /* 0x0014 */ unsigned int wParam;
  /* 0x0018 */ long lParam;
  /* 0x001c */ struct tagDDEML_MSG_HOOK_DATA dmhd;
}; /* size: 0x0048 */

