struct LEGACY_FRAME
{
  /* 0x0008 */ void* m_pvArgs;
  /* 0x000c */ const unsigned long m_iMethod;
  /* 0x0010 */ int m_hrReturnValue;
  /* 0x0014 */ struct LEGACY_INTERCEPTOR* m_pInterceptor;
  /* 0x0018 */ struct ICallFrame* m_premoteFrame;
  /* 0x001c */ struct ICallFrame* m_pmemoryFrame;
  /* 0x0020 */ int m_fAfterCall;
  /* 0x0024 */ struct IUnknown* m_punkOuter;
  /* 0x0028 */ long m_refs;
}; /* size: 0x002c */

