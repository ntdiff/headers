class CSSMappedStream
{
  /* 0x0004 */ long _cRefs;
  /* 0x0008 */ struct IStream* _pstm;
  /* 0x000c */ unsigned char* _pbMappedStream;
  /* 0x0010 */ unsigned long _cbMappedStream;
  /* 0x0014 */ unsigned long _cbActualStreamSize;
  /* 0x0018 */ void* _powner;
  /* 0x001c */ int _fDirty;
}; /* size: 0x0020 */

