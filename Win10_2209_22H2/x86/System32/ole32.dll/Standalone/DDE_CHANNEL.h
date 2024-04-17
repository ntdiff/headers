enum tagSERVERCALLEX
{
  SERVERCALLEX_ISHANDLED = 0,
  SERVERCALLEX_REJECTED = 1,
  SERVERCALLEX_RETRYLATER = 2,
  SERVERCALLEX_ERROR = 3,
  SERVERCALLEX_CANCELED = 5,
};

class DDE_CHANNEL
{
  /* 0x0008 */ unsigned long m_cRefs;
  /* 0x000c */ struct HWND__* hwndCli;
  /* 0x0010 */ struct HWND__* hwndSvr;
  /* 0x0014 */ int bTerminating;
  /* 0x0018 */ int iExtraTerms;
  /* 0x001c */ unsigned short wTimer;
  /* 0x0020 */ unsigned long dwStartTickCount;
  /* 0x0024 */ unsigned short msgFirst;
  /* 0x0026 */ unsigned short msgLast;
  /* 0x0028 */ struct HWND__* msghwnd;
  /* 0x002c */ int fRejected;
  /* 0x0030 */ unsigned short wMsg;
  /* 0x0034 */ long lParam;
  /* 0x0038 */ int iAwaitAck;
  /* 0x003c */ HRESULT hres;
  /* 0x0040 */ void* hopt;
  /* 0x0044 */ void* hDdePoke;
  /* 0x0048 */ void* hCommands;
  /* 0x004c */ unsigned short wChannelDeleted;
  /* 0x0050 */ struct tagDDECALLDATA* pCD;
  /* 0x0054 */ enum tagSERVERCALLEX CallState;
  /* 0x0058 */ int bFreedhopt;
}; /* size: 0x005c */

