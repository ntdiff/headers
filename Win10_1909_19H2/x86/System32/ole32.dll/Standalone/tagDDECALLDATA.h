struct tagDDECALLDATA
{
  /* 0x0000 */ struct HWND__* hwndSvr;
  /* 0x0004 */ unsigned short wMsg;
  /* 0x0008 */ unsigned int wParam;
  /* 0x000c */ long lParam;
  /* 0x0010 */ struct HWND__* hwndCli;
  /* 0x0014 */ int fFreeOnError;
  /* 0x0018 */ int fDone;
  /* 0x001c */ class DDE_CHANNEL* pChannel;
}; /* size: 0x0020 */

