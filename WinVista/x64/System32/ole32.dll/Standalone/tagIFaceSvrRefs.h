struct tagIFaceSvrRefs
{
  /* 0x0000 */ struct IRpcStubBuffer* pRpcStub;
  /* 0x0008 */ struct IRpcProxyBuffer* pRpcProxy;
  /* 0x0010 */ void* pServer;
  /* 0x0018 */ class CCtxChnl* pCtxChnl;
}; /* size: 0x0020 */

