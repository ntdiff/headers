class CBasedSStreamPtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CBasedDeltaBlockPtrPtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CBasedMStreamPtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CBasedTransactedStreamPtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CDeltaList
{
  /* 0x0000 */ class CBasedDeltaBlockPtrPtr _apdb;
  /* 0x0008 */ unsigned long _ulSize;
  /* 0x0010 */ class CBasedMStreamPtr _pmsScratch;
  /* 0x0018 */ class CBasedMStreamPtr _pms;
  /* 0x0020 */ class CBasedTransactedStreamPtr _ptsParent;
  /* 0x0028 */ unsigned long _sectStart;
}; /* size: 0x0030 */

class CBasedDeltaListPtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CTransactedStream
{
  /* 0x0070 */ unsigned __int64 _ulSize;
  /* 0x0078 */ class CBasedSStreamPtr _pssBase;
  /* 0x0080 */ unsigned long _sectLastUsed;
  /* 0x0088 */ class CDeltaList _dl;
  /* 0x00b8 */ unsigned long _df;
  /* 0x00bc */ int _fBeginCommit;
  /* 0x00c0 */ class CBasedDeltaListPtr _pdlOld;
  /* 0x00c8 */ unsigned __int64 _ulOldSize;
}; /* size: 0x00d0 */

