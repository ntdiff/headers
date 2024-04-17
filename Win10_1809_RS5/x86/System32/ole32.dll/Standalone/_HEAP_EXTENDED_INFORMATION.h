typedef struct _PROCESS_HEAP_INFORMATION
{
  /* 0x0000 */ unsigned long ReserveSize;
  /* 0x0004 */ unsigned long CommitSize;
  /* 0x0008 */ unsigned long NumberOfHeaps;
  /* 0x000c */ unsigned long FirstHeapInformationOffset;
} PROCESS_HEAP_INFORMATION, *PPROCESS_HEAP_INFORMATION; /* size: 0x0010 */

typedef struct _HEAP_INFORMATION
{
  /* 0x0000 */ unsigned long Address;
  /* 0x0004 */ unsigned long Mode;
  /* 0x0008 */ unsigned long ReserveSize;
  /* 0x000c */ unsigned long CommitSize;
  /* 0x0010 */ unsigned long FirstRegionInformationOffset;
  /* 0x0014 */ unsigned long NextHeapInformationOffset;
} HEAP_INFORMATION, *PHEAP_INFORMATION; /* size: 0x0018 */

typedef struct _HEAP_EXTENDED_INFORMATION
{
  /* 0x0000 */ void* Process;
  /* 0x0004 */ unsigned long Heap;
  /* 0x0008 */ unsigned long Level;
  /* 0x000c */ void* CallbackRoutine /* function */;
  /* 0x0010 */ void* CallbackContext;
  union
  {
    /* 0x0014 */ struct _PROCESS_HEAP_INFORMATION ProcessHeapInformation;
    /* 0x0014 */ struct _HEAP_INFORMATION HeapInformation;
  }; /* size: 0x0018 */
} HEAP_EXTENDED_INFORMATION, *PHEAP_EXTENDED_INFORMATION; /* size: 0x002c */

