typedef struct _HEAP_DEBUGGING_INFORMATION
{
  /* 0x0000 */ void* InterceptorFunction;
  /* 0x0004 */ unsigned short InterceptorValue;
  /* 0x0008 */ unsigned long ExtendedOptions;
  /* 0x000c */ unsigned long StackTraceDepth;
  /* 0x0010 */ unsigned long MinTotalBlockSize;
  /* 0x0014 */ unsigned long MaxTotalBlockSize;
  /* 0x0018 */ void* HeapLeakEnumerationRoutine /* function */;
} HEAP_DEBUGGING_INFORMATION, *PHEAP_DEBUGGING_INFORMATION; /* size: 0x001c */

