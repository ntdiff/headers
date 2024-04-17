typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct tagCStdProxyBuffer
{
  /* 0x0000 */ const struct IRpcProxyBufferVtbl* lpVtbl;
  /* 0x0004 */ const void* pProxyVtbl;
  /* 0x0008 */ long RefCount;
  /* 0x000c */ struct IUnknown* punkOuter;
  /* 0x0010 */ struct IRpcChannelBuffer* pChannel;
  /* 0x0014 */ struct IPSFactoryBuffer* pPSFactory;
  /* 0x0018 */ struct IRpcProxyBuffer* Pad_pBaseProxyBuffer;
  /* 0x001c */ struct IPSFactoryBuffer* Pad_pPSFactory;
  /* 0x0020 */ struct _GUID Pad_iidBase;
  /* 0x0030 */ const struct ICallFactoryVtbl* pCallFactoryVtbl;
  /* 0x0034 */ const struct _GUID* pAsyncIID;
  /* 0x0038 */ const struct IReleaseMarshalBuffersVtbl* pRMBVtbl;
}; /* size: 0x003c */

