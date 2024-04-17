typedef struct _RTL_HEAP_TAG_INFO
{
  /* 0x0000 */ unsigned long NumberOfAllocations;
  /* 0x0004 */ unsigned long NumberOfFrees;
  /* 0x0008 */ unsigned __int64 BytesAllocated;
} RTL_HEAP_TAG_INFO, *PRTL_HEAP_TAG_INFO; /* size: 0x0010 */

