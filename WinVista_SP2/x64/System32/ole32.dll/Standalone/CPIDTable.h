class CPIDHashTable
{
}; /* size: 0x0028 */

struct SHashChain
{
  /* 0x0000 */ struct SHashChain* pNext;
  /* 0x0008 */ struct SHashChain* pPrev;
}; /* size: 0x0010 */

class CPIDTable
{
  union
  {
    /* 0x0000 */ int s_fInitialized;
    /* 0x0000 */ class CPIDHashTable s_PIDHashTbl;
    /* 0x0000 */ struct SHashChain s_PIDBuckets[23];
  }; /* size: 0x0170 */
}; /* size: 0x0001 */

