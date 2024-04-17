class Interceptor
{
  /* 0x0018 */ struct ICallFrameEvents* m_pCallSink;
  /* 0x001c */ void* const* m_pvtbl /* function */;
  /* 0x0020 */ struct MD_INTERFACE* m_pmdInterface;
  /* 0x0024 */ const struct tagCInterfaceStubHeader* m_pHeader;
  /* 0x0028 */ const struct tagProxyFileInfo** m_pProxyFileList;
  /* 0x002c */ const char* m_szInterfaceName;
  /* 0x0030 */ int m_fMdOwnsHeader;
  /* 0x0034 */ int m_fUsingTypelib;
  /* 0x0038 */ struct TYPEINFOVTBL* m_ptypeinfovtbl;
  /* 0x003c */ unsigned int m_cMethodsBase;
  /* 0x0040 */ struct ICallInterceptor* m_pBaseInterceptor;
  /* 0x0044 */ struct IUnknown* m_punkBaseInterceptor;
  /* 0x0048 */ struct MD_INTERFACE* m_pmdMostDerived;
  /* 0x004c */ struct IUnknown* m_punkOuter;
  /* 0x0050 */ long m_refs;
}; /* size: 0x0054 */

