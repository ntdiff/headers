class CClipDataObject
{
  /* 0x0018 */ void* m_hOle1;
  /* 0x0020 */ struct IUnknown* m_pUnkOle1;
  /* 0x0028 */ unsigned long m_refs;
  /* 0x002c */ unsigned long m_Internalrefs;
  /* 0x0030 */ struct FORMATETCDATAARRAY* m_pFormatEtcDataArray;
  /* 0x0038 */ struct IDataObject* m_pDataObject;
  /* 0x0040 */ int m_fTriedToGetDataObject;
  /* 0x0044 */ BOOL m_fIsClientAppContainer;
  /* 0x0045 */ BOOL m_fIsEdpAccessDenied;
  /* 0x0048 */ unsigned long m_dwPLMSourcePid;
}; /* size: 0x0050 */

