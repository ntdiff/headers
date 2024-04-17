class CBasedMarshalListPtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CMarshalList
{
  /* 0x0000 */ class CBasedMarshalListPtr _pmlNext;
  /* 0x0008 */ void* _pvBase;
  /* 0x0010 */ unsigned long _cntxid;
}; /* size: 0x0018 */

