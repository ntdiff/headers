class CDragDataObject
{
  /* 0x0004 */ unsigned long _cRefs;
  /* 0x0008 */ struct tagInterfaceData* _pIFDDataObject;
  /* 0x000c */ int _fSourceIsAppContainer;
  /* 0x0010 */ struct IDataObject* _pIDataObject;
  /* 0x0014 */ struct FORMATETCDATAARRAY* m_pFormatEtcDataArray;
  /* 0x0018 */ unsigned long _dwSmId;
}; /* size: 0x001c */

