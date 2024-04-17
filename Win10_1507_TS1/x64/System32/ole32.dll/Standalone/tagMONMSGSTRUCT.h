struct tagDDEML_MSG_HOOK_DATA
{
  /* 0x0000 */ unsigned __int64 uiLo;
  /* 0x0008 */ unsigned __int64 uiHi;
  /* 0x0010 */ unsigned long cbData;
  /* 0x0014 */ unsigned long Data[8];
  /* 0x0034 */ long __PADDING__[1];
}; /* size: 0x0038 */

struct tagMONMSGSTRUCT
{
  /* 0x0000 */ unsigned int cb;
  /* 0x0008 */ struct HWND__* hwndTo;
  /* 0x0010 */ unsigned long dwTime;
  /* 0x0018 */ void* hTask;
  /* 0x0020 */ unsigned int wMsg;
  /* 0x0028 */ unsigned __int64 wParam;
  /* 0x0030 */ __int64 lParam;
  /* 0x0038 */ struct tagDDEML_MSG_HOOK_DATA dmhd;
}; /* size: 0x0070 */

