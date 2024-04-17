typedef struct _HEAP_RANGE_INFORMATION
{
  /* 0x0000 */ unsigned __int64 Address;
  /* 0x0008 */ unsigned __int64 Size;
  /* 0x0010 */ unsigned long Type;
  /* 0x0014 */ unsigned long Protection;
  /* 0x0018 */ unsigned __int64 FirstBlockInformationOffset;
  /* 0x0020 */ unsigned __int64 NextRangeInformationOffset;
} HEAP_RANGE_INFORMATION, *PHEAP_RANGE_INFORMATION; /* size: 0x0028 */

