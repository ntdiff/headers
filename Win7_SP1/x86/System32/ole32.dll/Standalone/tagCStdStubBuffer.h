struct tagCStdStubBuffer
{
  /* 0x0000 */ const struct IRpcStubBufferVtbl* lpVtbl;
  /* 0x0004 */ long RefCount;
  /* 0x0008 */ struct IUnknown* pvServerObject;
  /* 0x000c */ const struct ICallFactoryVtbl* pCallFactoryVtbl;
  /* 0x0010 */ const struct _GUID* pAsyncIID;
  /* 0x0014 */ struct IPSFactoryBuffer* pPSFactory;
  /* 0x0018 */ const struct IReleaseMarshalBuffersVtbl* pRMBVtbl;
}; /* size: 0x001c */

