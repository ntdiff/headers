class CClipDataObject
{
  /* 0x000c */ void* m_hOle1;
  /* 0x0010 */ struct IUnknown* m_pUnkOle1;
  /* 0x0014 */ unsigned long m_refs;
  /* 0x0018 */ unsigned long m_Internalrefs;
  /* 0x001c */ struct FORMATETCDATAARRAY* m_pFormatEtcDataArray;
  /* 0x0020 */ struct IDataObject* m_pDataObject;
  /* 0x0024 */ int m_fTriedToGetDataObject;
  /* 0x0028 */ BOOL m_fIsClientAppContainer;
  /* 0x0029 */ BOOL m_fIsEdpAccessDenied;
  /* 0x002c */ unsigned long m_dwPLMSourcePid;
}; /* size: 0x0030 */

