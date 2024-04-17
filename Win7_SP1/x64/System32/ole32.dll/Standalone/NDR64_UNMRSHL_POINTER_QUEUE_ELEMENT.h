class NDR64_UNMRSHL_POINTER_QUEUE_ELEMENT
{
  /* 0x0010 */ __int64 WirePtr;
  /* 0x0018 */ unsigned char** ppMemory;
  /* 0x0020 */ unsigned char* pMemory;
  /* 0x0028 */ const unsigned char* pFormat;
  /* 0x0030 */ unsigned char* pCorrMemory;
  /* 0x0038 */ struct NDR_ALLOC_ALL_NODES_CONTEXT* pAllocAllNodesContext;
  /* 0x0040 */ int fInDontFree;
  /* 0x0044 */ unsigned char uFlags;
}; /* size: 0x0048 */

