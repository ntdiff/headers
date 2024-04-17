class Interceptor
{
  /* 0x0030 */ struct ICallFrameEvents* m_pCallSink;
  /* 0x0038 */ void* const* m_pvtbl /* function */;
  /* 0x0040 */ struct MD_INTERFACE* m_pmdInterface;
  /* 0x0048 */ const struct tagCInterfaceStubHeader* m_pHeader;
  /* 0x0050 */ const struct tagProxyFileInfo** m_pProxyFileList;
  /* 0x0058 */ const char* m_szInterfaceName;
  /* 0x0060 */ int m_fMdOwnsHeader;
  /* 0x0064 */ int m_fUsingTypelib;
  /* 0x0068 */ struct TYPEINFOVTBL* m_ptypeinfovtbl;
  /* 0x0070 */ unsigned int m_cMethodsBase;
  /* 0x0078 */ struct ICallInterceptor* m_pBaseInterceptor;
  /* 0x0080 */ struct IUnknown* m_punkBaseInterceptor;
  /* 0x0088 */ struct MD_INTERFACE* m_pmdMostDerived;
  /* 0x0090 */ struct IUnknown* m_punkOuter;
  /* 0x0098 */ long m_refs;
}; /* size: 0x00a0 */

