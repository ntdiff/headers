class CBasedFreeBlockPtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CFreeList
{
  /* 0x0000 */ class CBasedFreeBlockPtr _pfbHead;
}; /* size: 0x0004 */

