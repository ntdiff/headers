class CBasedContextPtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CContext
{
  /* 0x0000 */ unsigned long ctxid;
  /* 0x0008 */ class CBasedContextPtr pctxNext;
}; /* size: 0x0010 */

