typedef struct _RTLP_HEAP_STACK_TRACE_SERIALIZATION_HEADER
{
  /* 0x0000 */ unsigned short Version;
  /* 0x0002 */ unsigned short PointerSize;
  /* 0x0008 */ unsigned __int64 Heap;
  /* 0x0010 */ unsigned __int64 TotalCommit;
  /* 0x0018 */ unsigned __int64 TotalReserve;
} RTLP_HEAP_STACK_TRACE_SERIALIZATION_HEADER, *PRTLP_HEAP_STACK_TRACE_SERIALIZATION_HEADER; /* size: 0x0020 */

