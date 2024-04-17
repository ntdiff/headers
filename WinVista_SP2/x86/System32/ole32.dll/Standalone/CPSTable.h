class CPSHashTable
{
}; /* size: 0x0018 */

struct SHashChain
{
  /* 0x0000 */ struct SHashChain* pNext;
  /* 0x0004 */ struct SHashChain* pPrev;
}; /* size: 0x0008 */

class CPSTable
{
  union
  {
    /* 0x0000 */ int s_fInitialized;
    /* 0x0000 */ class CPSHashTable s_PSHashTbl;
    /* 0x0000 */ struct SHashChain s_PSBuckets[23];
  }; /* size: 0x00b8 */
}; /* size: 0x0001 */

