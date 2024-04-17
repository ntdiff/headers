class CBasedContextPtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CContextList
{
  /* 0x0000 */ class CBasedContextPtr _pctxHead;
  /* 0x0008 */ long _cReferences;
}; /* size: 0x0010 */

