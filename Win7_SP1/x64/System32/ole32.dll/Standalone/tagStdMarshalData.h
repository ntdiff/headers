struct tagStdMarshalData
{
  /* 0x0000 */ class CIDObject* pID;
  /* 0x0008 */ struct IUnknown* pServer;
  /* 0x0010 */ const struct _GUID* pIID;
  /* 0x0018 */ unsigned long dwDestCtx;
  /* 0x0020 */ void* pvDestCtx;
  /* 0x0028 */ unsigned long mshlflags;
  /* 0x0030 */ struct tagOBJREF* pobjref;
}; /* size: 0x0038 */

