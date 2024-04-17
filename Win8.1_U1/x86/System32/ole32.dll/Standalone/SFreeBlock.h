class CBasedFreeBlockPtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

struct SFreeBlock
{
  /* 0x0000 */ class CBasedFreeBlockPtr pfbNext;
}; /* size: 0x0004 */

