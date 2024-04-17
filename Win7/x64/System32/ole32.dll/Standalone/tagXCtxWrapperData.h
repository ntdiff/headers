struct tagXCtxWrapperData
{
  /* 0x0000 */ const struct _GUID* pIID;
  /* 0x0008 */ struct IUnknown* pServer;
  /* 0x0010 */ unsigned long dwState;
  /* 0x0018 */ class CObjectContext* pServerCtx;
  /* 0x0020 */ class CObjectContext* pClientCtx;
  /* 0x0028 */ void* pv;
}; /* size: 0x0030 */

