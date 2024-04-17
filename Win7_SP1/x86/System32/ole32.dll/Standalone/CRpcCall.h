typedef enum _CALLSOURCE
{
  CALLSOURCE_CROSSAPT = 0,
  CALLSOURCE_CROSSCTX = 1,
} CALLSOURCE, *PCALLSOURCE;

class CRpcCall
{
  /* 0x000c */ unsigned long _cRefs;
  /* 0x0010 */ struct IUnknown*& _pIdentity;
  /* 0x0014 */ struct tagRPCOLEMESSAGE* _pMessage;
  /* 0x0018 */ const struct _GUID& _riid;
  /* 0x001c */ HRESULT& _hrRet;
  /* 0x0020 */ enum _CALLSOURCE _callSource;
  /* 0x0024 */ HRESULT _ServerHR;
}; /* size: 0x0028 */

