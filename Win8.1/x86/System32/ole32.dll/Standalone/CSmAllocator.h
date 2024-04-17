class CSmAllocator
{
  /* 0x0004 */ class CSharedMemoryBlock* _psmb;
  /* 0x0008 */ unsigned char* _pbBase;
  /* 0x000c */ class CPerContext* _ppcOwner;
  /* 0x0010 */ unsigned long _cbSize;
  /* 0x0014 */ unsigned long _ulHeapName;
  /* 0x0018 */ unsigned long _cRefs;
}; /* size: 0x001c */

