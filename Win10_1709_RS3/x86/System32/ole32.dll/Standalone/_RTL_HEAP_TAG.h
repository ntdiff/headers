typedef struct _RTL_HEAP_TAG
{
  /* 0x0000 */ unsigned long NumberOfAllocations;
  /* 0x0004 */ unsigned long NumberOfFrees;
  /* 0x0008 */ unsigned long BytesAllocated;
  /* 0x000c */ unsigned short TagIndex;
  /* 0x000e */ unsigned short CreatorBackTraceIndex;
  /* 0x0010 */ wchar_t TagName[24];
} RTL_HEAP_TAG, *PRTL_HEAP_TAG; /* size: 0x0040 */

