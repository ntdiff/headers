class CEnumClassesOfCategories
{
  /* 0x0008 */ unsigned long m_dwRefCount;
  /* 0x0010 */ struct HKEY__* m_hClassKey;
  /* 0x0018 */ unsigned long m_dwIndex;
  /* 0x001c */ unsigned long m_cImplemented;
  /* 0x0020 */ struct _GUID* m_rgcatidImpl;
  /* 0x0028 */ unsigned long m_cRequired;
  /* 0x0030 */ struct _GUID* m_rgcatidReq;
  /* 0x0038 */ struct IEnumGUID* m_pcsIEnumClsid;
  /* 0x0040 */ int m_fromcs;
  /* 0x0048 */ struct IUnknown* m_pCloned;
}; /* size: 0x0050 */

