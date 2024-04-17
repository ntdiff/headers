class CEnumCategories
{
  /* 0x0004 */ struct HKEY__* m_hKey;
  /* 0x0008 */ unsigned long m_dwIndex;
  /* 0x000c */ unsigned long m_lcid;
  /* 0x0010 */ struct IEnumCATEGORYINFO* m_pcsIEnumCat;
  /* 0x0014 */ int m_fromcs;
  /* 0x0018 */ unsigned long m_dwRefCount;
}; /* size: 0x001c */

