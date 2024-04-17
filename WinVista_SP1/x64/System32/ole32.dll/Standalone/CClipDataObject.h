class CClipDataObject
{
  /* 0x0010 */ void* m_hOle1;
  /* 0x0018 */ struct IUnknown* m_pUnkOle1;
  /* 0x0020 */ unsigned long m_refs;
  /* 0x0024 */ unsigned long m_Internalrefs;
  /* 0x0028 */ struct FORMATETCDATAARRAY* m_pFormatEtcDataArray;
  /* 0x0030 */ struct IDataObject* m_pDataObject;
  /* 0x0038 */ int m_fTriedToGetDataObject;
}; /* size: 0x0040 */

