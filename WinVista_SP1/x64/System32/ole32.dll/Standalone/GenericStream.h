class GenericStream
{
  /* 0x0010 */ long _clRefs;
  /* 0x0014 */ long _lOffset;
  /* 0x0018 */ long _cbDataSize;
  /* 0x001c */ unsigned long _cbBufferSize;
  /* 0x0020 */ struct tagInterfaceData* _pifData;
  /* 0x0028 */ int _fFree;
  /* 0x002c */ unsigned long _copyAlignment;
}; /* size: 0x0030 */

