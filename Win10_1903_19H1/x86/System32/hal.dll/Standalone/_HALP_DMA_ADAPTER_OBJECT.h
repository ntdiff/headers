typedef struct _DMA_ADAPTER
{
  /* 0x0000 */ unsigned short Version;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ struct _DMA_OPERATIONS* DmaOperations;
} DMA_ADAPTER, *PDMA_ADAPTER; /* size: 0x0008 */

typedef struct _HALP_DMA_TRANSLATION_BUFFER_POSITION
{
  /* 0x0000 */ struct _HALP_DMA_TRANSLATION_BUFFER* Buffer;
  /* 0x0004 */ unsigned long Offset;
} HALP_DMA_TRANSLATION_BUFFER_POSITION, *PHALP_DMA_TRANSLATION_BUFFER_POSITION; /* size: 0x0008 */

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

typedef struct _HALP_DMA_ADAPTER_OBJECT
{
  /* 0x0000 */ struct _DMA_ADAPTER DmaHeader;
  /* 0x0008 */ struct _RTL_BITMAP* ContiguousMapRegisters;
  /* 0x000c */ struct _HALP_DMA_TRANSLATION_ENTRY* ScatterBufferListHead;
  /* 0x0010 */ unsigned long NumberOfFreeScatterBuffers;
  /* 0x0014 */ struct _HALP_DMA_TRANSLATION_BUFFER* ContiguousTranslations;
  /* 0x0018 */ struct _HALP_DMA_TRANSLATION_BUFFER* ScatterTranslations;
  /* 0x001c */ struct _HALP_DMA_TRANSLATION_BUFFER_POSITION ContiguousTranslationEnd;
  /* 0x0024 */ struct _HALP_DMA_TRANSLATION_BUFFER_POSITION ScatterTranslationEnd;
  struct
  {
    /* 0x002c */ struct _HALP_DMA_TRANSLATION_BUFFER_POSITION ContiguousHint;
    /* 0x0034 */ struct _HALP_DMA_TRANSLATION_BUFFER_POSITION ScatterHint;
  } /* size: 0x0010 */ CrashDump;
  /* 0x003c */ unsigned long SpinLock;
  /* 0x0040 */ unsigned long GrowLock;
  /* 0x0048 */ union _LARGE_INTEGER MaximumPhysicalAddress;
  /* 0x0050 */ unsigned char IsMasterAdapter;
  /* 0x0051 */ unsigned char DmaCanCross64K;
  /* 0x0054 */ unsigned long LibraryVersion;
} HALP_DMA_ADAPTER_OBJECT, *PHALP_DMA_ADAPTER_OBJECT; /* size: 0x0058 */

