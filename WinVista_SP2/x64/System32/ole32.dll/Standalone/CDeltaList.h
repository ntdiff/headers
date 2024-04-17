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

