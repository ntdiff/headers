class CBasedUpdatePtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CUpdateList
{
  /* 0x0000 */ class CBasedUpdatePtr _pudHead;
  /* 0x0004 */ class CBasedUpdatePtr _pudTail;
}; /* size: 0x0008 */

