typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _DMA_COMMON_BUFFER_ENTRY
{
  /* 0x0000 */ void* VirtualAddress;
  /* 0x0008 */ union _LARGE_INTEGER LogicalAddress;
} DMA_COMMON_BUFFER_ENTRY, *PDMA_COMMON_BUFFER_ENTRY; /* size: 0x0010 */

