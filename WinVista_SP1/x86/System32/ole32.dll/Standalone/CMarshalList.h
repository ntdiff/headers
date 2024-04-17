class CBasedMarshalListPtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CMarshalList
{
  /* 0x0000 */ class CBasedMarshalListPtr _pmlNext;
  /* 0x0004 */ void* _pvBase;
  /* 0x0008 */ unsigned long _cntxid;
}; /* size: 0x000c */

