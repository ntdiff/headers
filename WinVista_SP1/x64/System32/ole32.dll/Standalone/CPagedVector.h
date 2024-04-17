class CBasedMSFPageTablePtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CBasedMStreamPtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CBasedMSFPagePtrPtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CBasedVectBitsPtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CPagedVector
{
  /* 0x0000 */ class CBasedMSFPageTablePtr _pmpt;
  /* 0x0008 */ class CBasedMStreamPtr _pmsParent;
  /* 0x0010 */ class CBasedMSFPagePtrPtr _amp;
  /* 0x0018 */ class CBasedVectBitsPtr _avb;
  /* 0x0020 */ const unsigned long _sid;
  /* 0x0024 */ unsigned long _ulSize;
  /* 0x0028 */ unsigned long _ulAllocSize;
}; /* size: 0x0030 */

