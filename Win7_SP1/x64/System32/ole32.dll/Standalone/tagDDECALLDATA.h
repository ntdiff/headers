struct tagDDECALLDATA
{
  /* 0x0000 */ struct HWND__* hwndSvr;
  /* 0x0008 */ unsigned short wMsg;
  /* 0x0010 */ unsigned __int64 wParam;
  /* 0x0018 */ __int64 lParam;
  /* 0x0020 */ struct HWND__* hwndCli;
  /* 0x0028 */ int fFreeOnError;
  /* 0x002c */ int fDone;
  /* 0x0030 */ class DDE_CHANNEL* pChannel;
}; /* size: 0x0038 */

