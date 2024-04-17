struct tagCStdStubBuffer2
{
  /* 0x0000 */ const void* lpForwardingVtbl;
  /* 0x0008 */ struct IRpcStubBuffer* pBaseStubBuffer;
  /* 0x0010 */ const struct IRpcStubBufferVtbl* lpVtbl;
  /* 0x0018 */ long RefCount;
  /* 0x0020 */ struct IUnknown* pvServerObject;
  /* 0x0028 */ const struct ICallFactoryVtbl* pCallFactoryVtbl;
  /* 0x0030 */ const struct _GUID* pAsyncIID;
  /* 0x0038 */ struct IPSFactoryBuffer* pPSFactory;
  /* 0x0040 */ const struct IReleaseMarshalBuffersVtbl* pRMBVtbl;
}; /* size: 0x0048 */

