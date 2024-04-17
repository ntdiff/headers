struct SHashChain
{
  /* 0x0000 */ struct SHashChain* pNext;
  /* 0x0008 */ struct SHashChain* pPrev;
}; /* size: 0x0010 */

struct SStringHashNode
{
  /* 0x0000 */ struct SHashChain chain;
  /* 0x0010 */ unsigned long dwHash;
  /* 0x0018 */ struct tagDUALSTRINGARRAY* psaKey;
}; /* size: 0x0020 */

