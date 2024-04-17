class CSharedMemoryBlock
{
  /* 0x0000 */ void* _hMem;
  /* 0x0004 */ unsigned char* _pbBase;
  /* 0x0008 */ unsigned long _culCommitSize;
  /* 0x000c */ unsigned long _culInitCommitSize;
  /* 0x0010 */ int _fCreated;
  /* 0x0014 */ int _fReadWrite;
}; /* size: 0x0018 */

