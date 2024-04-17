class CPSHashTable
{
}; /* size: 0x0028 */

struct SHashChain
{
  /* 0x0000 */ struct SHashChain* pNext;
  /* 0x0008 */ struct SHashChain* pPrev;
}; /* size: 0x0010 */

class CPSTable
{
  union
  {
    /* 0x0000 */ int s_fInitialized;
    /* 0x0000 */ class CPSHashTable s_PSHashTbl;
    /* 0x0000 */ struct SHashChain s_PSBuckets[23];
  }; /* size: 0x0170 */
}; /* size: 0x0001 */

