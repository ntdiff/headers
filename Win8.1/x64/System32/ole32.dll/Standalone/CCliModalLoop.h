typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

class PushCallChainInfo
{
  /* 0x0000 */ unsigned long _cSavedTouchedAstasInActiveCall;
  /* 0x0008 */ unsigned __int64* _pSavedTouchedAstasInActiveCall;
  /* 0x0010 */ unsigned long _dwSavedAstaToAstaExemptTlsFlags;
}; /* size: 0x0018 */

class CCliModalLoop
{
  /* 0x0030 */ class CCliModalLoop* _pPrev;
  /* 0x0038 */ unsigned long _dwTIDCallee;
  /* 0x003c */ unsigned long _dwMsgQInputFlag;
  /* 0x0040 */ struct _GUID _lid;
  /* 0x0050 */ unsigned long _dwFlags;
  /* 0x0054 */ unsigned long _dwWaitFlags;
  /* 0x0058 */ unsigned int _wQuitCode;
  /* 0x005c */ unsigned long _dwTimeOfCall;
  /* 0x0060 */ unsigned long _dwBlockTime;
  /* 0x0064 */ unsigned long _dwCancelTimeout;
  /* 0x0068 */ int _fUseOldModalLoop;
  /* 0x006c */ int _fAttachedQueueInputMessageRemovalAllowed;
  /* 0x0070 */ class CAptCallCtrl* _pACC;
  /* 0x0078 */ void* _hToken;
  /* 0x0080 */ int _fCoWaitCalled;
  /* 0x0088 */ class PushCallChainInfo _pushCallChainInfo;
}; /* size: 0x00a0 */

