typedef struct _PROCESS_HEAP_INFORMATION
{
  /* 0x0000 */ unsigned __int64 ReserveSize;
  /* 0x0008 */ unsigned __int64 CommitSize;
  /* 0x0010 */ unsigned long NumberOfHeaps;
  /* 0x0018 */ unsigned __int64 FirstHeapInformationOffset;
} PROCESS_HEAP_INFORMATION, *PPROCESS_HEAP_INFORMATION; /* size: 0x0020 */

typedef struct _HEAP_INFORMATION
{
  /* 0x0000 */ unsigned __int64 Address;
  /* 0x0008 */ unsigned long Mode;
  /* 0x0010 */ unsigned __int64 ReserveSize;
  /* 0x0018 */ unsigned __int64 CommitSize;
  /* 0x0020 */ unsigned __int64 FirstRegionInformationOffset;
  /* 0x0028 */ unsigned __int64 NextHeapInformationOffset;
} HEAP_INFORMATION, *PHEAP_INFORMATION; /* size: 0x0030 */

typedef struct _HEAP_EXTENDED_INFORMATION
{
  /* 0x0000 */ void* Process;
  /* 0x0008 */ unsigned __int64 Heap;
  /* 0x0010 */ unsigned long Level;
  /* 0x0018 */ void* CallbackRoutine /* function */;
  /* 0x0020 */ void* CallbackContext;
  union
  {
    /* 0x0028 */ struct _PROCESS_HEAP_INFORMATION ProcessHeapInformation;
    /* 0x0028 */ struct _HEAP_INFORMATION HeapInformation;
  }; /* size: 0x0030 */
} HEAP_EXTENDED_INFORMATION, *PHEAP_EXTENDED_INFORMATION; /* size: 0x0058 */

