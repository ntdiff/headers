class CSharedMemoryBlock
{
  /* 0x0000 */ void* _hMem;
  /* 0x0008 */ unsigned char* _pbBase;
  /* 0x0010 */ unsigned long _culCommitSize;
  /* 0x0014 */ unsigned long _culInitCommitSize;
  /* 0x0018 */ int _fCreated;
  /* 0x001c */ int _fReadWrite;
}; /* size: 0x0020 */

