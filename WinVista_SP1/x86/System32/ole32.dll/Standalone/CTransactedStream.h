class CBasedSStreamPtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CBasedDeltaBlockPtrPtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CBasedMStreamPtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CBasedTransactedStreamPtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CDeltaList
{
  /* 0x0000 */ class CBasedDeltaBlockPtrPtr _apdb;
  /* 0x0004 */ unsigned long _ulSize;
  /* 0x0008 */ class CBasedMStreamPtr _pmsScratch;
  /* 0x000c */ class CBasedMStreamPtr _pms;
  /* 0x0010 */ class CBasedTransactedStreamPtr _ptsParent;
  /* 0x0014 */ unsigned long _sectStart;
}; /* size: 0x0018 */

class CBasedDeltaListPtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CTransactedStream
{
  /* 0x0068 */ unsigned __int64 _ulSize;
  /* 0x0070 */ class CBasedSStreamPtr _pssBase;
  /* 0x0074 */ unsigned long _sectLastUsed;
  /* 0x0078 */ class CDeltaList _dl;
  /* 0x0090 */ unsigned long _df;
  /* 0x0094 */ int _fBeginCommit;
  /* 0x0098 */ class CBasedDeltaListPtr _pdlOld;
  /* 0x00a0 */ unsigned __int64 _ulOldSize;
}; /* size: 0x00a8 */

