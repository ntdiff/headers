class CBasedSStreamPtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CBasedPubDocFilePtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CBasedPubStreamPtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CBasedBytePtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CPubMappedStream
{
  /* 0x0000 */ class CBasedPubStreamPtr _pst;
  /* 0x0004 */ class CBasedBytePtr _pb;
  /* 0x0008 */ class CBasedBytePtr _powner;
  /* 0x000c */ unsigned long _cbUsed;
  /* 0x0010 */ unsigned long _cbOriginalStreamSize;
  /* 0x0014 */ unsigned char _fDirty;
}; /* size: 0x0018 */

class CPubStream
{
  /* 0x0054 */ class CBasedSStreamPtr _psParent;
  /* 0x0058 */ class CBasedPubDocFilePtr _ppdfParent;
  /* 0x005c */ int _fDirty;
  /* 0x0060 */ long _cReferences;
  /* 0x0064 */ class CPubMappedStream _PubMappedStream;
}; /* size: 0x007c */

