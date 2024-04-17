class CClientCallMgr::CPrivUnknown
{
}; /* size: 0x0004 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

class CSTInnerUnknown
{
  /* 0x0004 */ unsigned long _iRefCount;
  /* 0x0008 */ class CStdEvent* _pParent;
}; /* size: 0x000c */

class CStdEvent
{
  /* 0x0008 */ class CSTInnerUnknown _cInner;
  /* 0x0014 */ struct IUnknown* _pControl;
  /* 0x0018 */ void* m_hEvent;
}; /* size: 0x001c */

class CClientCallMgr
{
  /* 0x0010 */ class CClientCallMgr::CPrivUnknown _privUnk;
  /* 0x0014 */ unsigned long _dwFlags;
  /* 0x0018 */ unsigned long _cRefs;
  /* 0x001c */ struct IUnknown* _pUnkOuter;
  /* 0x0020 */ class CClientCallMgr* _pNextMgr;
  /* 0x0024 */ struct _GUID _asyncIID;
  /* 0x0034 */ class CStdIdentity* _pStdId;
  /* 0x0038 */ struct IRpcProxyBuffer* _pProxyObj;
  /* 0x003c */ class CChannelObject* _pChnlObj;
  /* 0x0040 */ struct IClientSecurity* _pICS;
  /* 0x0044 */ struct ICancelMethodCalls* _pICMC;
  /* 0x0048 */ class CStdEvent _cStdEvent;
}; /* size: 0x0064 */

