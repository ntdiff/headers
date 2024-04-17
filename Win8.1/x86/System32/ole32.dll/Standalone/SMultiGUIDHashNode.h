struct SHashChain
{
  /* 0x0000 */ struct SHashChain* pNext;
  /* 0x0004 */ struct SHashChain* pPrev;
}; /* size: 0x0008 */

struct SMultiGUIDKey
{
  /* 0x0000 */ int cGUID;
  /* 0x0004 */ struct _GUID* aGUID;
}; /* size: 0x0008 */

struct SMultiGUIDHashNode
{
  /* 0x0000 */ struct SHashChain chain;
  /* 0x0008 */ struct SMultiGUIDKey key;
}; /* size: 0x0010 */

