struct tagSPSChain
{
  /* 0x0000 */ struct tagSPSChain* pNext;
  /* 0x0008 */ struct tagSPSChain* pPrev;
}; /* size: 0x0010 */

struct tagSPSCache
{
  /* 0x0000 */ struct tagSPSChain clientPSChain;
  /* 0x0010 */ struct tagSPSChain serverPSChain;
}; /* size: 0x0020 */

