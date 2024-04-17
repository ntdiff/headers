struct tagStdMarshalData
{
  /* 0x0000 */ class CIDObject* pID;
  /* 0x0004 */ struct IUnknown* pServer;
  /* 0x0008 */ const struct _GUID* pIID;
  /* 0x000c */ unsigned long dwDestCtx;
  /* 0x0010 */ void* pvDestCtx;
  /* 0x0014 */ unsigned long mshlflags;
  /* 0x0018 */ struct tagOBJREF* pobjref;
}; /* size: 0x001c */

