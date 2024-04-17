typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

class CCliModalLoop
{
  /* 0x0000 */ HRESULT _hr;
  /* 0x0004 */ class CCliModalLoop* _pPrev;
  /* 0x0008 */ unsigned long _dwTIDCallee;
  /* 0x000c */ unsigned long _dwMsgQInputFlag;
  /* 0x0010 */ struct _GUID _lid;
  /* 0x0020 */ unsigned long _dwFlags;
  /* 0x0024 */ unsigned long _dwWaitFlags;
  /* 0x0028 */ unsigned int _wQuitCode;
  /* 0x002c */ unsigned long _dwTimeOfCall;
  /* 0x0030 */ unsigned long _dwWakeup;
  /* 0x0034 */ unsigned long _dwMillSecToWait;
  /* 0x0038 */ unsigned long _dwCancelTimeout;
  /* 0x003c */ int _fUseOldModalLoop;
  /* 0x0040 */ class CAptCallCtrl* _pACC;
  /* 0x0044 */ void* _hToken;
  /* 0x0048 */ int _fCoWaitCalled;
}; /* size: 0x004c */

