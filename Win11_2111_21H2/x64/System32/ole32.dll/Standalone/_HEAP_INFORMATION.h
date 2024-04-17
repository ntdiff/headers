typedef struct _HEAP_INFORMATION
{
  /* 0x0000 */ unsigned __int64 Address;
  /* 0x0008 */ unsigned long Mode;
  /* 0x0010 */ unsigned __int64 ReserveSize;
  /* 0x0018 */ unsigned __int64 CommitSize;
  /* 0x0020 */ unsigned __int64 FirstRegionInformationOffset;
  /* 0x0028 */ unsigned __int64 NextHeapInformationOffset;
} HEAP_INFORMATION, *PHEAP_INFORMATION; /* size: 0x0030 */

