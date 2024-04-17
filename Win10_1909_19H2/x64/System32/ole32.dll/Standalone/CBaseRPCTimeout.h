class CBaseRPCTimeout
{
  union
  {
    /* 0x0000 */ const unsigned long s_dwDefaultRPCTimeOut;
    /* 0x0000 */ const unsigned long s_dwRepeatRPCTimeOut;
    /* 0x0000 */ unsigned long _dwThreadId;
  }; /* size: 0x0004 */
  /* 0x0004 */ BOOL _fTimedOut;
  /* 0x0008 */ HRESULT _hrCancelEnabled;
  /* 0x0010 */ void* _hTimer;
}; /* size: 0x0018 */

