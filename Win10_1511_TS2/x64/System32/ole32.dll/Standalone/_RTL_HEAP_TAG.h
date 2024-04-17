typedef struct _RTL_HEAP_TAG
{
  /* 0x0000 */ unsigned long NumberOfAllocations;
  /* 0x0004 */ unsigned long NumberOfFrees;
  /* 0x0008 */ unsigned __int64 BytesAllocated;
  /* 0x0010 */ unsigned short TagIndex;
  /* 0x0012 */ unsigned short CreatorBackTraceIndex;
  /* 0x0014 */ wchar_t TagName[24];
  /* 0x0044 */ long __PADDING__[1];
} RTL_HEAP_TAG, *PRTL_HEAP_TAG; /* size: 0x0048 */

