class CSSMappedStream
{
  /* 0x0008 */ long _cRefs;
  /* 0x0010 */ struct IStream* _pstm;
  /* 0x0018 */ unsigned char* _pbMappedStream;
  /* 0x0020 */ unsigned long _cbMappedStream;
  /* 0x0024 */ unsigned long _cbActualStreamSize;
  /* 0x0028 */ void* _powner;
  /* 0x0030 */ int _fDirty;
}; /* size: 0x0038 */

