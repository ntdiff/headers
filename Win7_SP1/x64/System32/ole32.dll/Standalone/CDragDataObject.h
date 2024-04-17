class CDragDataObject
{
  /* 0x0008 */ unsigned long _cRefs;
  /* 0x0010 */ void* _pvMarshaledDataObject;
  /* 0x0018 */ struct IDataObject* _pIDataObject;
  /* 0x0020 */ struct FORMATETCDATAARRAY* m_pFormatEtcDataArray;
  /* 0x0028 */ unsigned long _dwSmId;
}; /* size: 0x0030 */

