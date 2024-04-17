struct tagIFaceSvrRefs
{
  /* 0x0000 */ struct IRpcStubBuffer* pRpcStub;
  /* 0x0004 */ struct IRpcProxyBuffer* pRpcProxy;
  /* 0x0008 */ void* pServer;
  /* 0x000c */ class CCtxChnl* pCtxChnl;
}; /* size: 0x0010 */

