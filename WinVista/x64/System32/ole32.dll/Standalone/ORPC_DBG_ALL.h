struct ORPC_DBG_ALL
{
  /* 0x0000 */ unsigned char* pSignature;
  /* 0x0008 */ struct tagRPCOLEMESSAGE* pMessage;
  /* 0x0010 */ const struct _GUID* refiid;
  /* 0x0018 */ struct IRpcChannelBuffer* pChannel;
  /* 0x0020 */ struct IUnknown* pUnkProxyMgr;
  /* 0x0028 */ void* pInterface;
  /* 0x0030 */ struct IUnknown* pUnkObject;
  /* 0x0038 */ HRESULT hresult;
  /* 0x0040 */ void* pvBuffer;
  /* 0x0048 */ unsigned long cbBuffer;
  /* 0x0050 */ unsigned long* lpcbBuffer;
  /* 0x0058 */ void* reserved;
}; /* size: 0x0060 */

