class CBasedContextPtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CContextList
{
  /* 0x0000 */ class CBasedContextPtr _pctxHead;
  /* 0x0004 */ long _cReferences;
}; /* size: 0x0008 */

