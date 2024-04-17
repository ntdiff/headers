class CCtxPropHashTable
{
}; /* size: 0x0018 */

class CCtxUUIDHashTable
{
}; /* size: 0x0018 */

struct SHashChain
{
  /* 0x0000 */ struct SHashChain* pNext;
  /* 0x0004 */ struct SHashChain* pPrev;
}; /* size: 0x0008 */

class CCtxTable
{
  union
  {
    /* 0x0000 */ class CCtxPropHashTable s_CtxPropHashTable;
    /* 0x0000 */ class CCtxUUIDHashTable s_CtxUUIDHashTable;
    /* 0x0000 */ struct SHashChain s_CtxPropBuckets[23];
    /* 0x0000 */ struct SHashChain s_CtxUUIDBuckets[23];
    /* 0x0000 */ int s_fInitialized;
  }; /* size: 0x00b8 */
}; /* size: 0x0001 */

