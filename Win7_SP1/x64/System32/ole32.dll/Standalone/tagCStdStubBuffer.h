struct tagCStdStubBuffer
{
  /* 0x0000 */ const struct IRpcStubBufferVtbl* lpVtbl;
  /* 0x0008 */ long RefCount;
  /* 0x0010 */ struct IUnknown* pvServerObject;
  /* 0x0018 */ const struct ICallFactoryVtbl* pCallFactoryVtbl;
  /* 0x0020 */ const struct _GUID* pAsyncIID;
  /* 0x0028 */ struct IPSFactoryBuffer* pPSFactory;
  /* 0x0030 */ const struct IReleaseMarshalBuffersVtbl* pRMBVtbl;
}; /* size: 0x0038 */

