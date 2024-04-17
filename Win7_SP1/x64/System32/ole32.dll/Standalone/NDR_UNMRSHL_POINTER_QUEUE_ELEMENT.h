class NDR_UNMRSHL_POINTER_QUEUE_ELEMENT
{
  /* 0x0010 */ unsigned char** const ppMemory;
  /* 0x0018 */ unsigned char* const pMemory;
  /* 0x0020 */ long* const pBufferPointer;
  /* 0x0028 */ const unsigned char* const pFormat;
  /* 0x0030 */ unsigned char* const Memory;
  /* 0x0038 */ const unsigned char uFlags;
  /* 0x003a */ const unsigned short uFlags2;
  /* 0x003c */ const int fInDontFree;
  /* 0x0040 */ unsigned char* const pCorrMemory;
  /* 0x0048 */ struct NDR_ALLOC_ALL_NODES_CONTEXT* const pAllocAllNodesContext;
}; /* size: 0x0050 */

