struct tagXCtxWrapperData
{
  /* 0x0000 */ const struct _GUID* pIID;
  /* 0x0004 */ struct IUnknown* pServer;
  /* 0x0008 */ unsigned long dwState;
  /* 0x000c */ class CObjectContext* pServerCtx;
  /* 0x0010 */ class CObjectContext* pClientCtx;
  /* 0x0014 */ void* pv;
}; /* size: 0x0018 */

