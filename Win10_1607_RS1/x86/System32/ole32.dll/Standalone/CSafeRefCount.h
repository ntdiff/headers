class CSafeRefCount
{
  /* 0x0004 */ unsigned long m_cRefs;
  /* 0x0008 */ int m_fInDelete;
  /* 0x000c */ struct IUnknown* m_pUnkOuter;
}; /* size: 0x0010 */

