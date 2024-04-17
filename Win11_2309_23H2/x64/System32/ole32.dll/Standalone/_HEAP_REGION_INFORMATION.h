typedef struct _HEAP_REGION_INFORMATION
{
  /* 0x0000 */ unsigned __int64 Address;
  /* 0x0008 */ unsigned __int64 ReserveSize;
  /* 0x0010 */ unsigned __int64 CommitSize;
  /* 0x0018 */ unsigned __int64 FirstRangeInformationOffset;
  /* 0x0020 */ unsigned __int64 NextRegionInformationOffset;
} HEAP_REGION_INFORMATION, *PHEAP_REGION_INFORMATION; /* size: 0x0028 */

