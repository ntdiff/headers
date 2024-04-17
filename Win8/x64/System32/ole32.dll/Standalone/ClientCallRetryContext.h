class ClientCallRetryContext
{
  /* 0x0008 */ HRESULT _hr;
  /* 0x0010 */ unsigned __int64 _dwWakeup;
  /* 0x0018 */ unsigned long _dwMillSecToWait;
  /* 0x001c */ unsigned int _cAutoRetries;
  /* 0x0020 */ unsigned int _cLastAutoRetryWaitIn100ns;
  /* 0x0024 */ unsigned int _cMaxAutoRetryWaitIn100ns;
  /* 0x0028 */ unsigned int _cTotalAutoRetryWaitIn100ns;
}; /* size: 0x0030 */

