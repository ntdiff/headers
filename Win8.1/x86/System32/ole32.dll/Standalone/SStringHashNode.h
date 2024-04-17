struct SHashChain
{
  /* 0x0000 */ struct SHashChain* pNext;
  /* 0x0004 */ struct SHashChain* pPrev;
}; /* size: 0x0008 */

struct SStringHashNode
{
  /* 0x0000 */ struct SHashChain chain;
  /* 0x0008 */ unsigned long dwHash;
  /* 0x000c */ struct tagDUALSTRINGARRAY* psaKey;
}; /* size: 0x0010 */

