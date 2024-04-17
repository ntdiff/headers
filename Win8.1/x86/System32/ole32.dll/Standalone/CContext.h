class CBasedContextPtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CContext
{
  /* 0x0000 */ unsigned long ctxid;
  /* 0x0004 */ class CBasedContextPtr pctxNext;
}; /* size: 0x0008 */

