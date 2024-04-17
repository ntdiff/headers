class CDefObject::CPrivUnknown
{
}; /* size: 0x0004 */

class CDefObject::CAdvSinkImpl
{
}; /* size: 0x0004 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

class CDefObject
{
  /* 0x0030 */ class CDefObject::CPrivUnknown m_Unknown;
  /* 0x0034 */ class CDefObject::CAdvSinkImpl m_AdviseSink;
  /* 0x0038 */ HRESULT m_ContentSRVMSHResult;
  /* 0x003c */ unsigned long m_ContentSRVMSBits;
  /* 0x0040 */ HRESULT m_ContentREGMSHResult;
  /* 0x0044 */ unsigned long m_ContentREGMSBits;
  /* 0x0048 */ struct IOleObject* m_pOleDelegate;
  /* 0x004c */ struct IDataObject* m_pDataDelegate;
  /* 0x0050 */ struct IPersistStorage* m_pPSDelegate;
  /* 0x0054 */ unsigned long m_cConnections;
  /* 0x0058 */ struct IUnknown* m_pUnkOuter;
  /* 0x005c */ struct _GUID m_clsidServer;
  /* 0x006c */ struct _GUID m_clsidBits;
  /* 0x007c */ unsigned long m_flags;
  /* 0x0080 */ unsigned long m_dwObjFlags;
  /* 0x0084 */ struct IClassFactory* m_pCFDelegate;
  /* 0x0088 */ struct IUnknown* m_pUnkDelegate;
  /* 0x008c */ struct IProxyManager* m_pProxyMgr;
  /* 0x0090 */ class COleCache* m_pCOleCache;
  /* 0x0094 */ class COAHolder* m_pOAHolder;
  /* 0x0098 */ unsigned long m_dwConnOle;
  /* 0x009c */ struct IOleClientSite* m_pAppClientSite;
  /* 0x00a0 */ struct IStorage* m_pStg;
  /* 0x00a4 */ char* m_pHostNames;
  /* 0x00a8 */ unsigned long m_ibCntrObj;
  /* 0x00ac */ class CDataAdviseCache* m_pDataAdvCache;
}; /* size: 0x00b0 */

