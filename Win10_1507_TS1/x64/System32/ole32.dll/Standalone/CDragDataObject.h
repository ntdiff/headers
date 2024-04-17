class CDragDataObject
{
  /* 0x0008 */ unsigned long _cRefs;
  /* 0x0010 */ struct tagInterfaceData* _pIFDDataObject;
  /* 0x0018 */ int _fSourceIsAppContainer;
  /* 0x0020 */ struct IDataObject* _pIDataObject;
  /* 0x0028 */ struct FORMATETCDATAARRAY* m_pFormatEtcDataArray;
  /* 0x0030 */ unsigned long _dwSmId;
}; /* size: 0x0038 */

