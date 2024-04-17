class CEnumCategories
{
  /* 0x0008 */ struct HKEY__* m_hKey;
  /* 0x0010 */ unsigned long m_dwIndex;
  /* 0x0014 */ unsigned long m_lcid;
  /* 0x0018 */ struct IEnumCATEGORYINFO* m_pcsIEnumCat;
  /* 0x0020 */ int m_fromcs;
  /* 0x0024 */ unsigned long m_dwRefCount;
}; /* size: 0x0028 */

