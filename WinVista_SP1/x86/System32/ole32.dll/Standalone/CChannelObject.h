struct SPendingCall
{
  /* 0x0000 */ struct SPendingCall* pNext;
  /* 0x0004 */ struct SPendingCall* pPrev;
  /* 0x0008 */ class CChannelObject* pChnlObj;
}; /* size: 0x000c */

struct tagRPCOLEMESSAGE
{
  /* 0x0000 */ void* reserved1;
  /* 0x0004 */ unsigned long dataRepresentation;
  /* 0x0008 */ void* Buffer;
  /* 0x000c */ unsigned long cbBuffer;
  /* 0x0010 */ unsigned long iMethod;
  /* 0x0014 */ void* reserved2[5];
  /* 0x0028 */ unsigned long rpcFlags;
}; /* size: 0x002c */

class CChannelObject
{
  /* 0x0014 */ volatile unsigned long _dwState;
  /* 0x0018 */ unsigned long _cRefs;
  /* 0x001c */ unsigned long _dwAptID;
  /* 0x0020 */ class CClientCallMgr* _pCallMgr;
  /* 0x0024 */ class CCtxComChnl* _pChnl;
  /* 0x0028 */ HRESULT _hr;
  /* 0x002c */ class CAsyncCall* _pCall;
  /* 0x0030 */ struct ISynchronize* _pSync;
  /* 0x0034 */ struct SPendingCall _pendingCall;
  /* 0x0040 */ struct tagRPCOLEMESSAGE _msg;
}; /* size: 0x006c */

