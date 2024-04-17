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

