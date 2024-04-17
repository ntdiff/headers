class GenericStream
{
  /* 0x0008 */ long _clRefs;
  /* 0x000c */ long _lOffset;
  /* 0x0010 */ long _cbDataSize;
  /* 0x0014 */ unsigned long _cbBufferSize;
  /* 0x0018 */ struct tagInterfaceData* _pifData;
  /* 0x001c */ int _fFree;
  /* 0x0020 */ unsigned long _copyAlignment;
}; /* size: 0x0024 */

struct ServerContextWorkData
{
  /* 0x0000 */ struct IActivationPropertiesIn* pInActProps;
  /* 0x0004 */ class GenericStream xrpcOutProps;
}; /* size: 0x0028 */

