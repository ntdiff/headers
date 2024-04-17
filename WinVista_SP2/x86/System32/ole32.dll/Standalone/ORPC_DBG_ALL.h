struct ORPC_DBG_ALL
{
  /* 0x0000 */ unsigned char* pSignature;
  /* 0x0004 */ struct tagRPCOLEMESSAGE* pMessage;
  /* 0x0008 */ const struct _GUID* refiid;
  /* 0x000c */ struct IRpcChannelBuffer* pChannel;
  /* 0x0010 */ struct IUnknown* pUnkProxyMgr;
  /* 0x0014 */ void* pInterface;
  /* 0x0018 */ struct IUnknown* pUnkObject;
  /* 0x001c */ HRESULT hresult;
  /* 0x0020 */ void* pvBuffer;
  /* 0x0024 */ unsigned long cbBuffer;
  /* 0x0028 */ unsigned long* lpcbBuffer;
  /* 0x002c */ void* reserved;
}; /* size: 0x0030 */

