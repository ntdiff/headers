class CBasedMSFPageTablePtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CBasedMStreamPtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CBasedMSFPagePtrPtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CBasedVectBitsPtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CPagedVector
{
  /* 0x0000 */ class CBasedMSFPageTablePtr _pmpt;
  /* 0x0004 */ class CBasedMStreamPtr _pmsParent;
  /* 0x0008 */ class CBasedMSFPagePtrPtr _amp;
  /* 0x000c */ class CBasedVectBitsPtr _avb;
  /* 0x0010 */ const unsigned long _sid;
  /* 0x0014 */ unsigned long _ulSize;
  /* 0x0018 */ unsigned long _ulAllocSize;
}; /* size: 0x001c */

