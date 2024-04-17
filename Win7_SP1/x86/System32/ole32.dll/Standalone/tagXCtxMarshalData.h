typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct tagXCtxMarshalData
{
  /* 0x0000 */ unsigned long dwSignature;
  /* 0x0004 */ struct _GUID iid;
  /* 0x0014 */ struct _GUID moxid;
  /* 0x0024 */ class CStdWrapper* pWrapper;
  /* 0x0028 */ class IFaceEntry* pEntry;
  /* 0x002c */ struct IUnknown* pServer;
  /* 0x0030 */ class CObjectContext* pServerCtx;
  /* 0x0034 */ unsigned long dwMarshalFlags;
}; /* size: 0x0038 */

