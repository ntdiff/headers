class CBasedSStreamPtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CBasedPubDocFilePtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

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

class CPubStream
{
  /* 0x0058 */ class CBasedSStreamPtr _psParent;
  /* 0x0060 */ class CBasedPubDocFilePtr _ppdfParent;
  /* 0x0068 */ int _fDirty;
  /* 0x006c */ long _cReferences;
  /* 0x0070 */ class CPubMappedStream _PubMappedStream;
}; /* size: 0x0098 */

