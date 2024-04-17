class COleCache::CCacheUnkImpl
{
}; /* size: 0x0008 */

class COleCache::CCacheDataImpl
{
}; /* size: 0x0008 */

class COleCache::CCacheViewImpl
{
}; /* size: 0x0008 */

class COleCache::CAdviseSinkImpl
{
}; /* size: 0x0008 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

class COleCache
{
  /* 0x0040 */ class COleCache::CCacheUnkImpl m_UnkPrivate;
  /* 0x0048 */ class COleCache::CCacheDataImpl m_Data;
  /* 0x0050 */ class COleCache::CCacheViewImpl m_ViewObject;
  /* 0x0058 */ class COleCache::CAdviseSinkImpl m_AdviseSink;
  /* 0x0060 */ struct IUnknown* m_pUnkOuter;
  /* 0x0068 */ struct IStorage* m_pStg;
  /* 0x0070 */ struct _GUID m_clsid;
  /* 0x0080 */ unsigned short m_cfFormat;
  /* 0x0084 */ unsigned long m_ulFlags;
  /* 0x0088 */ class CArray<CCacheNode>* m_pCacheArray;
  /* 0x0090 */ struct IAdviseSink* m_pViewAdvSink;
  /* 0x0098 */ unsigned long m_advfView;
  /* 0x009c */ unsigned long m_aspectsView;
  /* 0x00a0 */ unsigned long m_dwFrozenAspects;
  /* 0x00a8 */ struct IDataObject* m_pDataObject;
}; /* size: 0x00b0 */

