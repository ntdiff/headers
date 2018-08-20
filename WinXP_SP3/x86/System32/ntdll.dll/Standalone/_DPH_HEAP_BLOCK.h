typedef struct _DPH_HEAP_BLOCK
{
  /* 0x0000 */ struct _DPH_HEAP_BLOCK* pNextAlloc;
  /* 0x0004 */ unsigned char* pVirtualBlock;
  /* 0x0008 */ unsigned long nVirtualBlockSize;
  /* 0x000c */ unsigned long nVirtualAccessSize;
  /* 0x0010 */ unsigned char* pUserAllocation;
  /* 0x0014 */ unsigned long nUserRequestedSize;
  /* 0x0018 */ unsigned long nUserActualSize;
  /* 0x001c */ void* UserValue;
  /* 0x0020 */ unsigned long UserFlags;
  /* 0x0024 */ struct _RTL_TRACE_BLOCK* StackTrace;
} DPH_HEAP_BLOCK, *PDPH_HEAP_BLOCK; /* size: 0x0028 */

