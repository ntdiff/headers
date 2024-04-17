typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct XLOCK_LEAF
{
}; /* size: 0x0030 */

struct LEGACY_INTERCEPTOR
{
  /* 0x0040 */ struct ICallFrameEvents* m_psink;
  /* 0x0048 */ struct _GUID m_iid;
  /* 0x0058 */ unsigned long m_cMethods;
  /* 0x0060 */ struct XLOCK_LEAF m_frameLock;
  /* 0x0090 */ struct ICallFrame** m_ppframeCustomer;
  /* 0x0098 */ struct ICallInterceptor* m_premoteInterceptor;
  /* 0x00a0 */ int m_fRegdWithRemoteInterceptor;
  /* 0x00a8 */ struct ICallInterceptor* m_pmemoryInterceptor;
  /* 0x00b0 */ int m_fRegdWithMemoryInterceptor;
  /* 0x00b8 */ struct MD_INTERFACE* m_pmdMostDerived;
  /* 0x00c0 */ struct IUnknown* m_punkOuter;
  /* 0x00c8 */ long m_refs;
  /* 0x00cc */ int m_fShuttingDown;
}; /* size: 0x00d0 */

