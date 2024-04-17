struct SHashChain
{
  /* 0x0000 */ struct SHashChain* pNext;
  /* 0x0004 */ struct SHashChain* pPrev;
}; /* size: 0x0008 */

struct SPointerHashNode
{
  /* 0x0000 */ struct SHashChain chain;
  /* 0x0008 */ void* key;
}; /* size: 0x000c */

