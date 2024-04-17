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
  /* 0x0010 */ unsigned long m_cRefs;
  /* 0x0018 */ struct HWND__* hwndCli;
  /* 0x0020 */ struct HWND__* hwndSvr;
  /* 0x0028 */ int bTerminating;
  /* 0x002c */ int iExtraTerms;
  /* 0x0030 */ unsigned short wTimer;
  /* 0x0034 */ unsigned long dwStartTickCount;
  /* 0x0038 */ unsigned short msgFirst;
  /* 0x003a */ unsigned short msgLast;
  /* 0x0040 */ struct HWND__* msghwnd;
  /* 0x0048 */ int fRejected;
  /* 0x004c */ unsigned short wMsg;
  /* 0x0050 */ __int64 lParam;
  /* 0x0058 */ int iAwaitAck;
  /* 0x005c */ HRESULT hres;
  /* 0x0060 */ void* hopt;
  /* 0x0068 */ void* hDdePoke;
  /* 0x0070 */ void* hCommands;
  /* 0x0078 */ unsigned short wChannelDeleted;
  /* 0x0080 */ struct tagDDECALLDATA* pCD;
  /* 0x0088 */ enum tagSERVERCALLEX CallState;
  /* 0x008c */ int bFreedhopt;
}; /* size: 0x0090 */

