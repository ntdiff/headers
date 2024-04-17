class CClipDataObject
{
  /* 0x0008 */ void* m_hOle1;
  /* 0x000c */ struct IUnknown* m_pUnkOle1;
  /* 0x0010 */ unsigned long m_refs;
  /* 0x0014 */ unsigned long m_Internalrefs;
  /* 0x0018 */ struct FORMATETCDATAARRAY* m_pFormatEtcDataArray;
  /* 0x001c */ struct IDataObject* m_pDataObject;
  /* 0x0020 */ int m_fTriedToGetDataObject;
}; /* size: 0x0024 */

