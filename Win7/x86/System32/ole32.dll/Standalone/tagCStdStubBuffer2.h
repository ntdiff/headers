struct tagCStdStubBuffer2
{
  /* 0x0000 */ const void* lpForwardingVtbl;
  /* 0x0004 */ struct IRpcStubBuffer* pBaseStubBuffer;
  /* 0x0008 */ const struct IRpcStubBufferVtbl* lpVtbl;
  /* 0x000c */ long RefCount;
  /* 0x0010 */ struct IUnknown* pvServerObject;
  /* 0x0014 */ const struct ICallFactoryVtbl* pCallFactoryVtbl;
  /* 0x0018 */ const struct _GUID* pAsyncIID;
  /* 0x001c */ struct IPSFactoryBuffer* pPSFactory;
  /* 0x0020 */ const struct IReleaseMarshalBuffersVtbl* pRMBVtbl;
}; /* size: 0x0024 */

