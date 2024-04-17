typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct tagCStdProxyBuffer2
{
  /* 0x0000 */ const struct IRpcProxyBufferVtbl* lpVtbl;
  /* 0x0008 */ const void* pProxyVtbl;
  /* 0x0010 */ long RefCount;
  /* 0x0018 */ struct IUnknown* punkOuter;
  /* 0x0020 */ struct IRpcChannelBuffer* pChannel;
  /* 0x0028 */ struct IUnknown* pBaseProxy;
  /* 0x0030 */ struct IRpcProxyBuffer* pBaseProxyBuffer;
  /* 0x0038 */ struct IPSFactoryBuffer* pPSFactory;
  /* 0x0040 */ struct _GUID iidBase;
  /* 0x0050 */ const struct ICallFactoryVtbl* pCallFactoryVtbl;
  /* 0x0058 */ const struct _GUID* pAsyncIID;
  /* 0x0060 */ const struct IReleaseMarshalBuffersVtbl* pRMBVtbl;
}; /* size: 0x0068 */

