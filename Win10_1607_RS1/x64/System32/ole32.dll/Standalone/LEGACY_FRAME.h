struct LEGACY_FRAME
{
  /* 0x0010 */ void* m_pvArgs;
  /* 0x0018 */ const unsigned long m_iMethod;
  /* 0x0020 */ __int64 m_hrReturnValue;
  /* 0x0028 */ struct LEGACY_INTERCEPTOR* m_pInterceptor;
  /* 0x0030 */ struct ICallFrame* m_premoteFrame;
  /* 0x0038 */ struct ICallFrame* m_pmemoryFrame;
  /* 0x0040 */ int m_fAfterCall;
  /* 0x0048 */ struct IUnknown* m_punkOuter;
  /* 0x0050 */ long m_refs;
  /* 0x0054 */ long __PADDING__[1];
}; /* size: 0x0058 */

