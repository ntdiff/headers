struct SHashChain
{
  /* 0x0000 */ struct SHashChain* pNext;
  /* 0x0008 */ struct SHashChain* pPrev;
}; /* size: 0x0010 */

struct SActivatableClassIdHashNode
{
  /* 0x0000 */ struct SHashChain chain;
  /* 0x0010 */ const wchar_t* activatableClassId;
}; /* size: 0x0018 */

