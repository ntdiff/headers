typedef struct _DMA_ADAPTER
{
  /* 0x0000 */ unsigned short Version;
  /* 0x0002 */ unsigned short Size;
  /* 0x0008 */ struct _DMA_OPERATIONS* DmaOperations;
} DMA_ADAPTER, *PDMA_ADAPTER; /* size: 0x0010 */

typedef struct _HALP_DMA_TRANSLATION_BUFFER_POSITION
{
  /* 0x0000 */ struct _HALP_DMA_TRANSLATION_BUFFER* Buffer;
  /* 0x0008 */ unsigned long Offset;
  /* 0x000c */ long __PADDING__[1];
} HALP_DMA_TRANSLATION_BUFFER_POSITION, *PHALP_DMA_TRANSLATION_BUFFER_POSITION; /* size: 0x0010 */

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
  /* 0x0010 */ struct _RTL_BITMAP* ContiguousMapRegisters;
  /* 0x0018 */ struct _HALP_DMA_TRANSLATION_ENTRY* ScatterBufferListHead;
  /* 0x0020 */ unsigned long NumberOfFreeScatterBuffers;
  /* 0x0028 */ struct _HALP_DMA_TRANSLATION_BUFFER* ContiguousTranslations;
  /* 0x0030 */ struct _HALP_DMA_TRANSLATION_BUFFER* ScatterTranslations;
  /* 0x0038 */ struct _HALP_DMA_TRANSLATION_BUFFER_POSITION ContiguousTranslationEnd;
  /* 0x0048 */ struct _HALP_DMA_TRANSLATION_BUFFER_POSITION ScatterTranslationEnd;
  struct
  {
    /* 0x0058 */ struct _HALP_DMA_TRANSLATION_BUFFER_POSITION ContiguousHint;
    /* 0x0068 */ struct _HALP_DMA_TRANSLATION_BUFFER_POSITION ScatterHint;
  } /* size: 0x0020 */ CrashDump;
  /* 0x0078 */ unsigned __int64 SpinLock;
  /* 0x0080 */ unsigned __int64 GrowLock;
  /* 0x0088 */ union _LARGE_INTEGER MaximumPhysicalAddress;
  /* 0x0090 */ unsigned char IsMasterAdapter;
  /* 0x0091 */ unsigned char DmaCanCross64K;
  /* 0x0094 */ unsigned long LibraryVersion;
} HALP_DMA_ADAPTER_OBJECT, *PHALP_DMA_ADAPTER_OBJECT; /* size: 0x0098 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _HALP_DMA_MASTER_ADAPTER_OBJECT
{
  /* 0x0000 */ struct _HALP_DMA_ADAPTER_OBJECT AdapterObject;
  /* 0x0098 */ struct _LIST_ENTRY ContiguousAdapterQueue;
  /* 0x00a8 */ struct _LIST_ENTRY ScatterAdapterQueue;
  /* 0x00b8 */ unsigned long MapBufferSize;
  /* 0x00c0 */ union _LARGE_INTEGER MapBufferPhysicalAddress;
  /* 0x00c8 */ unsigned long ContiguousPageCount;
  /* 0x00cc */ unsigned long ContiguousPageLimit;
  /* 0x00d0 */ unsigned long ScatterPageCount;
  /* 0x00d4 */ unsigned long ScatterPageLimit;
} HALP_DMA_MASTER_ADAPTER_OBJECT, *PHALP_DMA_MASTER_ADAPTER_OBJECT; /* size: 0x00d8 */

