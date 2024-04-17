typedef struct _RTLP_HEAP_STACK_TRACE_SERIALIZATION_HEADER
{
  /* 0x0000 */ unsigned short Version;
  /* 0x0002 */ unsigned short PointerSize;
  /* 0x0004 */ unsigned long Heap;
  /* 0x0008 */ unsigned long TotalCommit;
  /* 0x000c */ unsigned long TotalReserve;
} RTLP_HEAP_STACK_TRACE_SERIALIZATION_HEADER, *PRTLP_HEAP_STACK_TRACE_SERIALIZATION_HEADER; /* size: 0x0010 */

