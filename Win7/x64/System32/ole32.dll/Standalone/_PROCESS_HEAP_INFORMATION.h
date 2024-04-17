typedef struct _PROCESS_HEAP_INFORMATION
{
  /* 0x0000 */ unsigned __int64 ReserveSize;
  /* 0x0008 */ unsigned __int64 CommitSize;
  /* 0x0010 */ unsigned long NumberOfHeaps;
  /* 0x0018 */ unsigned __int64 FirstHeapInformationOffset;
} PROCESS_HEAP_INFORMATION, *PPROCESS_HEAP_INFORMATION; /* size: 0x0020 */

