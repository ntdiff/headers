struct tagActivationContextInfoData
{
  /* 0x0000 */ int clientOK;
  /* 0x0004 */ int bReserved1;
  /* 0x0008 */ unsigned long dwReserved1;
  /* 0x000c */ unsigned long dwReserved2;
  /* 0x0010 */ struct tagMInterfacePointer* pIFDClientCtx;
  /* 0x0018 */ struct tagMInterfacePointer* pIFDPrototypeCtx;
}; /* size: 0x0020 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

class ContextInfo
{
  /* 0x0028 */ struct tagActivationContextInfoData _contextInfoData;
  /* 0x0048 */ struct _GUID _ctxOverride;
  /* 0x0058 */ class CObjectContext* _pClientCtx;
  /* 0x0060 */ class CObjectContext* _pPrototypeCtx;
  /* 0x0068 */ int _toReleaseIFD;
}; /* size: 0x0070 */

