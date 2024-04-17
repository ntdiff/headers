class CDefLink::CPrivUnknown
{
}; /* size: 0x0008 */

class CDefLink::CAdvSinkImpl
{
}; /* size: 0x0008 */

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
  /* 0x0050 */ class CDefLink::CPrivUnknown m_Unknown;
  /* 0x0058 */ class CDefLink::CAdvSinkImpl m_AdviseSink;
  /* 0x0060 */ unsigned long m_flags;
  /* 0x0064 */ unsigned long m_dwObjFlags;
  /* 0x0068 */ struct IDataObject* m_pDataDelegate;
  /* 0x0070 */ struct IOleObject* m_pOleDelegate;
  /* 0x0078 */ struct IRunnableObject* m_pRODelegate;
  /* 0x0080 */ struct IOleItemContainer* m_pOleItemContainerDelegate;
  /* 0x0088 */ HRESULT m_ContentSRVMSHResult;
  /* 0x008c */ unsigned long m_ContentSRVMSBits;
  /* 0x0090 */ HRESULT m_ContentREGMSHResult;
  /* 0x0094 */ unsigned long m_ContentREGMSBits;
  /* 0x0098 */ unsigned long m_cRefsOnLink;
  /* 0x00a0 */ struct IUnknown* m_pUnkOuter;
  /* 0x00a8 */ struct IMoniker* m_pMonikerAbs;
  /* 0x00b0 */ struct IMoniker* m_pMonikerRel;
  /* 0x00b8 */ struct IUnknown* m_pUnkDelegate;
  /* 0x00c0 */ unsigned long m_dwUpdateOpt;
  /* 0x00c4 */ struct _GUID m_clsid;
  /* 0x00d8 */ struct IStorage* m_pStg;
  /* 0x00e0 */ class COleCache* m_pCOleCache;
  /* 0x00e8 */ class COAHolder* m_pCOAHolder;
  /* 0x00f0 */ unsigned long m_dwConnOle;
  /* 0x00f8 */ class CDataAdviseCache* m_pDataAdvCache;
  /* 0x0100 */ struct IOleClientSite* m_pAppClientSite;
  /* 0x0108 */ unsigned long m_dwConnTime;
  /* 0x010c */ struct _FILETIME m_ltChangeOfUpdate;
  /* 0x0114 */ struct _FILETIME m_ltKnownUpToDate;
  /* 0x011c */ struct _FILETIME m_rtUpdate;
}; /* size: 0x0128 */

