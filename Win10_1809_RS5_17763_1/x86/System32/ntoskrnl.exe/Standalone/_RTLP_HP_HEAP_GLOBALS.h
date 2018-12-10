typedef struct _RTL_HEAP_MEMORY_LIMIT_DATA
{
  /* 0x0000 */ unsigned long CommitLimitBytes;
  /* 0x0004 */ unsigned long CommitLimitFailureCode;
  /* 0x0008 */ unsigned long MaxAllocationSizeBytes;
  /* 0x000c */ unsigned long AllocationLimitFailureCode;
} RTL_HEAP_MEMORY_LIMIT_DATA, *PRTL_HEAP_MEMORY_LIMIT_DATA; /* size: 0x0010 */

typedef struct _RTLP_HP_HEAP_GLOBALS
{
  /* 0x0000 */ unsigned long HeapKey;
  /* 0x0004 */ unsigned long LfhKey;
  /* 0x0008 */ struct _HEAP_FAILURE_INFORMATION* FailureInfo;
  /* 0x000c */ struct _RTL_HEAP_MEMORY_LIMIT_DATA CommitLimitData;
} RTLP_HP_HEAP_GLOBALS, *PRTLP_HP_HEAP_GLOBALS; /* size: 0x001c */

