typedef struct _HEAP_DEBUGGING_INFORMATION
{
  /* 0x0000 */ void* InterceptorFunction;
  /* 0x0008 */ unsigned short InterceptorValue;
  /* 0x000c */ unsigned long ExtendedOptions;
  /* 0x0010 */ unsigned long StackTraceDepth;
  /* 0x0018 */ unsigned __int64 MinTotalBlockSize;
  /* 0x0020 */ unsigned __int64 MaxTotalBlockSize;
  /* 0x0028 */ void* HeapLeakEnumerationRoutine /* function */;
} HEAP_DEBUGGING_INFORMATION, *PHEAP_DEBUGGING_INFORMATION; /* size: 0x0030 */

