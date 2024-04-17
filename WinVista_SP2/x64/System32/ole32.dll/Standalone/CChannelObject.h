struct SPendingCall
{
  /* 0x0000 */ struct SPendingCall* pNext;
  /* 0x0008 */ struct SPendingCall* pPrev;
  /* 0x0010 */ class CChannelObject* pChnlObj;
}; /* size: 0x0018 */

struct tagRPCOLEMESSAGE
{
  /* 0x0000 */ void* reserved1;
  /* 0x0008 */ unsigned long dataRepresentation;
  /* 0x0010 */ void* Buffer;
  /* 0x0018 */ unsigned long cbBuffer;
  /* 0x001c */ unsigned long iMethod;
  /* 0x0020 */ void* reserved2[5];
  /* 0x0048 */ unsigned long rpcFlags;
  /* 0x004c */ long __PADDING__[1];
}; /* size: 0x0050 */

class CChannelObject
{
  /* 0x0030 */ volatile unsigned long _dwState;
  /* 0x0034 */ unsigned long _cRefs;
  /* 0x0038 */ unsigned long _dwAptID;
  /* 0x0040 */ class CClientCallMgr* _pCallMgr;
  /* 0x0048 */ class CCtxComChnl* _pChnl;
  /* 0x0050 */ HRESULT _hr;
  /* 0x0058 */ class CAsyncCall* _pCall;
  /* 0x0060 */ struct ISynchronize* _pSync;
  /* 0x0068 */ struct SPendingCall _pendingCall;
  /* 0x0080 */ struct tagRPCOLEMESSAGE _msg;
}; /* size: 0x00d0 */

