typedef struct _PROCESS_HEAP_INFORMATION
{
  /* 0x0000 */ unsigned long ReserveSize;
  /* 0x0004 */ unsigned long CommitSize;
  /* 0x0008 */ unsigned long NumberOfHeaps;
  /* 0x000c */ unsigned long FirstHeapInformationOffset;
} PROCESS_HEAP_INFORMATION, *PPROCESS_HEAP_INFORMATION; /* size: 0x0010 */

