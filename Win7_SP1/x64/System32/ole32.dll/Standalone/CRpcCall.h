typedef enum _CALLSOURCE
{
  CALLSOURCE_CROSSAPT = 0,
  CALLSOURCE_CROSSCTX = 1,
} CALLSOURCE, *PCALLSOURCE;

class CRpcCall
{
  /* 0x0018 */ unsigned long _cRefs;
  /* 0x0020 */ struct IUnknown*& _pIdentity;
  /* 0x0028 */ struct tagRPCOLEMESSAGE* _pMessage;
  /* 0x0030 */ const struct _GUID& _riid;
  /* 0x0038 */ HRESULT& _hrRet;
  /* 0x0040 */ enum _CALLSOURCE _callSource;
  /* 0x0044 */ HRESULT _ServerHR;
}; /* size: 0x0048 */

