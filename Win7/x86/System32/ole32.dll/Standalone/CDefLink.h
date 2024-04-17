class CDefLink::CPrivUnknown
{
}; /* size: 0x0004 */

class CDefLink::CAdvSinkImpl
{
}; /* size: 0x0004 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _FILETIME
{
  /* 0x0000 */ unsigned long dwLowDateTime;
  /* 0x0004 */ unsigned long dwHighDateTime;
} FILETIME, *PFILETIME; /* size: 0x0008 */

class CDefLink
{
  /* 0x0030 */ class CDefLink::CPrivUnknown m_Unknown;
  /* 0x0034 */ class CDefLink::CAdvSinkImpl m_AdviseSink;
  /* 0x0038 */ unsigned long m_flags;
  /* 0x003c */ unsigned long m_dwObjFlags;
  /* 0x0040 */ struct IDataObject* m_pDataDelegate;
  /* 0x0044 */ struct IOleObject* m_pOleDelegate;
  /* 0x0048 */ struct IRunnableObject* m_pRODelegate;
  /* 0x004c */ struct IOleItemContainer* m_pOleItemContainerDelegate;
  /* 0x0050 */ HRESULT m_ContentSRVMSHResult;
  /* 0x0054 */ unsigned long m_ContentSRVMSBits;
  /* 0x0058 */ HRESULT m_ContentREGMSHResult;
  /* 0x005c */ unsigned long m_ContentREGMSBits;
  /* 0x0060 */ unsigned long m_cRefsOnLink;
  /* 0x0064 */ struct IUnknown* m_pUnkOuter;
  /* 0x0068 */ struct IMoniker* m_pMonikerAbs;
  /* 0x006c */ struct IMoniker* m_pMonikerRel;
  /* 0x0070 */ struct IUnknown* m_pUnkDelegate;
  /* 0x0074 */ unsigned long m_dwUpdateOpt;
  /* 0x0078 */ struct _GUID m_clsid;
  /* 0x0088 */ struct IStorage* m_pStg;
  /* 0x008c */ class COleCache* m_pCOleCache;
  /* 0x0090 */ class COAHolder* m_pCOAHolder;
  /* 0x0094 */ unsigned long m_dwConnOle;
  /* 0x0098 */ class CDataAdviseCache* m_pDataAdvCache;
  /* 0x009c */ struct IOleClientSite* m_pAppClientSite;
  /* 0x00a0 */ unsigned long m_dwConnTime;
  /* 0x00a4 */ struct _FILETIME m_ltChangeOfUpdate;
  /* 0x00ac */ struct _FILETIME m_ltKnownUpToDate;
  /* 0x00b4 */ struct _FILETIME m_rtUpdate;
}; /* size: 0x00bc */

