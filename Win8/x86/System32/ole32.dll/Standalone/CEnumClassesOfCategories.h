class CEnumClassesOfCategories
{
  /* 0x0004 */ unsigned long m_dwRefCount;
  /* 0x0008 */ struct HKEY__* m_hClassKey;
  /* 0x000c */ unsigned long m_dwIndex;
  /* 0x0010 */ unsigned long m_cImplemented;
  /* 0x0014 */ struct _GUID* m_rgcatidImpl;
  /* 0x0018 */ unsigned long m_cRequired;
  /* 0x001c */ struct _GUID* m_rgcatidReq;
  /* 0x0020 */ struct IEnumGUID* m_pcsIEnumClsid;
  /* 0x0024 */ int m_fromcs;
  /* 0x0028 */ struct IUnknown* m_pCloned;
}; /* size: 0x002c */

