class CBasedFreeBlockPtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

struct SFreeBlock
{
  /* 0x0000 */ class CBasedFreeBlockPtr pfbNext;
}; /* size: 0x0008 */

