class CDefObject::CPrivUnknown
{
}; /* size: 0x0008 */

class CDefObject::CAdvSinkImpl
{
}; /* size: 0x0008 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

class CDefObject
{
  /* 0x0050 */ class CDefObject::CPrivUnknown m_Unknown;
  /* 0x0058 */ class CDefObject::CAdvSinkImpl m_AdviseSink;
  /* 0x0060 */ HRESULT m_ContentSRVMSHResult;
  /* 0x0064 */ unsigned long m_ContentSRVMSBits;
  /* 0x0068 */ HRESULT m_ContentREGMSHResult;
  /* 0x006c */ unsigned long m_ContentREGMSBits;
  /* 0x0070 */ struct IOleObject* m_pOleDelegate;
  /* 0x0078 */ struct IDataObject* m_pDataDelegate;
  /* 0x0080 */ struct IPersistStorage* m_pPSDelegate;
  /* 0x0088 */ unsigned long m_cConnections;
  /* 0x0090 */ struct IUnknown* m_pUnkOuter;
  /* 0x0098 */ struct _GUID m_clsidServer;
  /* 0x00a8 */ struct _GUID m_clsidBits;
  /* 0x00b8 */ unsigned long m_flags;
  /* 0x00bc */ unsigned long m_dwObjFlags;
  /* 0x00c0 */ struct IClassFactory* m_pCFDelegate;
  /* 0x00c8 */ struct IUnknown* m_pUnkDelegate;
  /* 0x00d0 */ struct IProxyManager* m_pProxyMgr;
  /* 0x00d8 */ class COleCache* m_pCOleCache;
  /* 0x00e0 */ class COAHolder* m_pOAHolder;
  /* 0x00e8 */ unsigned long m_dwConnOle;
  /* 0x00f0 */ struct IOleClientSite* m_pAppClientSite;
  /* 0x00f8 */ struct IStorage* m_pStg;
  /* 0x0100 */ char* m_pHostNames;
  /* 0x0108 */ unsigned long m_ibCntrObj;
  /* 0x0110 */ class CDataAdviseCache* m_pDataAdvCache;
}; /* size: 0x0118 */

