class CSmAllocator
{
  /* 0x0008 */ class CSharedMemoryBlock* _psmb;
  /* 0x0010 */ unsigned char* _pbBase;
  /* 0x0018 */ class CPerContext* _ppcOwner;
  /* 0x0020 */ unsigned long _cbSize;
  /* 0x0024 */ unsigned long _ulHeapName;
  /* 0x0028 */ unsigned long _cRefs;
}; /* size: 0x0030 */

