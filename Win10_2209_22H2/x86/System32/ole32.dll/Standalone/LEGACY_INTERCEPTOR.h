typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct XLOCK_LEAF
{
}; /* size: 0x001c */

struct LEGACY_INTERCEPTOR
{
  /* 0x0020 */ struct ICallFrameEvents* m_psink;
  /* 0x0024 */ struct _GUID m_iid;
  /* 0x0034 */ unsigned long m_cMethods;
  /* 0x0038 */ struct XLOCK_LEAF m_frameLock;
  /* 0x0054 */ struct ICallFrame** m_ppframeCustomer;
  /* 0x0058 */ struct ICallInterceptor* m_premoteInterceptor;
  /* 0x005c */ int m_fRegdWithRemoteInterceptor;
  /* 0x0060 */ struct ICallInterceptor* m_pmemoryInterceptor;
  /* 0x0064 */ int m_fRegdWithMemoryInterceptor;
  /* 0x0068 */ struct MD_INTERFACE* m_pmdMostDerived;
  /* 0x006c */ struct IUnknown* m_punkOuter;
  /* 0x0070 */ long m_refs;
  /* 0x0074 */ int m_fShuttingDown;
}; /* size: 0x0078 */

