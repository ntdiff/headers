class COIDHashTable
{
}; /* size: 0x0018 */

struct SHashChain
{
  /* 0x0000 */ struct SHashChain* pNext;
  /* 0x0004 */ struct SHashChain* pPrev;
}; /* size: 0x0008 */

class COIDTable
{
  union
  {
    /* 0x0000 */ int s_fInitialized;
    /* 0x0000 */ class COIDHashTable s_OIDHashTbl;
    /* 0x0000 */ struct SHashChain s_OIDBuckets[23];
    /* 0x0000 */ unsigned long s_UnpinReqsPending;
    /* 0x0000 */ struct SHashChain s_OIDUnpinRequests;
  }; /* size: 0x00b8 */
}; /* size: 0x0001 */

