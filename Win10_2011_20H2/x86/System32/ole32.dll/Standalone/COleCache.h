class COleCache::CCacheUnkImpl
{
}; /* size: 0x0004 */

class COleCache::CCacheDataImpl
{
}; /* size: 0x0004 */

class COleCache::CCacheViewImpl
{
}; /* size: 0x0004 */

class COleCache::CAdviseSinkImpl
{
}; /* size: 0x0004 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

class COleCache
{
  /* 0x0028 */ class COleCache::CCacheUnkImpl m_UnkPrivate;
  /* 0x002c */ class COleCache::CCacheDataImpl m_Data;
  /* 0x0030 */ class COleCache::CCacheViewImpl m_ViewObject;
  /* 0x0034 */ class COleCache::CAdviseSinkImpl m_AdviseSink;
  /* 0x0038 */ struct IUnknown* m_pUnkOuter;
  /* 0x003c */ struct IStorage* m_pStg;
  /* 0x0040 */ struct _GUID m_clsid;
  /* 0x0050 */ unsigned short m_cfFormat;
  /* 0x0054 */ unsigned long m_ulFlags;
  /* 0x0058 */ class CArray<CCacheNode>* m_pCacheArray;
  /* 0x005c */ struct IAdviseSink* m_pViewAdvSink;
  /* 0x0060 */ unsigned long m_advfView;
  /* 0x0064 */ unsigned long m_aspectsView;
  /* 0x0068 */ unsigned long m_dwFrozenAspects;
  /* 0x006c */ struct IDataObject* m_pDataObject;
}; /* size: 0x0070 */

