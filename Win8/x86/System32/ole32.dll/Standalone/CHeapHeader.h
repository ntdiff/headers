class CHeapHeader
{
  /* 0x0000 */ unsigned long _ulFirstFree;
  /* 0x0004 */ unsigned long _ulAllocedBlocks;
  /* 0x0008 */ int _fIsCompacted;
  /* 0x000c */ unsigned long _dfLuid;
}; /* size: 0x0010 */

