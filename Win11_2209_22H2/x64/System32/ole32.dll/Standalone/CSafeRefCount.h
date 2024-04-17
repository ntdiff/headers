class CSafeRefCount
{
  /* 0x0008 */ unsigned long m_cRefs;
  /* 0x000c */ int m_fInDelete;
  /* 0x0010 */ struct IUnknown* m_pUnkOuter;
}; /* size: 0x0018 */

