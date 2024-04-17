struct MD_INTERFACE
{
  /* 0x0000 */ volatile long m_refs;
  /* 0x0004 */ unsigned long m_cMethods;
  /* 0x0008 */ unsigned long m_cMethodsInBaseInterface;
  /* 0x0010 */ struct MD_METHOD* m_rgMethodsAlloc;
  /* 0x0018 */ struct MD_METHOD* m_rgMethods;
  /* 0x0020 */ struct MD_PARAM* m_rgParams;
  /* 0x0028 */ int m_fFreeInfoOnRelease;
  /* 0x002c */ int m_fDerivesFromIDispatch;
  /* 0x0030 */ const struct tagCInterfaceStubHeader* m_pHeader;
  /* 0x0038 */ const char* m_szInterfaceName;
  /* 0x0040 */ struct MD_INTERFACE_CACHE* m_pcache;
}; /* size: 0x0048 */

