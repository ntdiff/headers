class CBasedPubStreamPtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CBasedBytePtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CPubMappedStream
{
  /* 0x0000 */ class CBasedPubStreamPtr _pst;
  /* 0x0008 */ class CBasedBytePtr _pb;
  /* 0x0010 */ class CBasedBytePtr _powner;
  /* 0x0018 */ unsigned long _cbUsed;
  /* 0x001c */ unsigned long _cbOriginalStreamSize;
  /* 0x0020 */ unsigned char _fDirty;
}; /* size: 0x0028 */

