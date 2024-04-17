struct SHashChain
{
  /* 0x0000 */ struct SHashChain* pNext;
  /* 0x0008 */ struct SHashChain* pPrev;
}; /* size: 0x0010 */

struct SDWORDHashNode
{
  /* 0x0000 */ struct SHashChain chain;
  /* 0x0010 */ unsigned long key;
  /* 0x0014 */ long __PADDING__[1];
}; /* size: 0x0018 */

