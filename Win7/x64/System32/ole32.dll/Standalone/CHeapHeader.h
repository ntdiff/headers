class CHeapHeader
{
  /* 0x0000 */ unsigned __int64 _ulFirstFree;
  /* 0x0008 */ unsigned __int64 _ulAllocedBlocks;
  /* 0x0010 */ int _fIsCompacted;
  /* 0x0014 */ unsigned long _dfLuid;
}; /* size: 0x0018 */

