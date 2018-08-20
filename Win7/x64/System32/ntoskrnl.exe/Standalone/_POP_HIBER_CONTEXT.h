typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0008 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0010 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct // _TAG_UNNAMED_1
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _POP_HIBER_CONTEXT
{
  /* 0x0000 */ unsigned char WriteToFile;
  /* 0x0001 */ unsigned char ReserveLoaderMemory;
  /* 0x0002 */ unsigned char ReserveFreeMemory;
  /* 0x0003 */ unsigned char Reset;
  /* 0x0004 */ unsigned char HiberFlags;
  /* 0x0005 */ unsigned char WroteHiberFile;
  /* 0x0006 */ unsigned char MapFrozen;
  /* 0x0008 */ struct _RTL_BITMAP MemoryMap;
  /* 0x0018 */ struct _RTL_BITMAP DiscardedMemoryPages;
  /* 0x0028 */ struct _LIST_ENTRY ClonedRanges;
  /* 0x0038 */ unsigned long ClonedRangeCount;
  /* 0x0040 */ struct _LIST_ENTRY* NextCloneRange;
  /* 0x0048 */ unsigned __int64 NextPreserve;
  /* 0x0050 */ struct _MDL* LoaderMdl;
  /* 0x0058 */ struct _MDL* AllocatedMdl;
  /* 0x0060 */ unsigned __int64 PagesOut;
  /* 0x0068 */ void* IoPages;
  /* 0x0070 */ unsigned long IoPagesCount;
  /* 0x0078 */ void* CurrentMcb;
  /* 0x0080 */ struct _DUMP_STACK_CONTEXT* DumpStack;
  /* 0x0088 */ struct _KPROCESSOR_STATE* WakeState;
  /* 0x0090 */ unsigned long PreferredIoWriteSize;
  /* 0x0094 */ unsigned long IoProgress;
  /* 0x0098 */ unsigned __int64 HiberVa;
  /* 0x00a0 */ union _LARGE_INTEGER HiberPte;
  /* 0x00a8 */ long Status;
  /* 0x00b0 */ struct PO_MEMORY_IMAGE* MemoryImage;
  /* 0x00b8 */ void* CompressionWorkspace;
  /* 0x00c0 */ unsigned char* CompressedWriteBuffer;
  /* 0x00c8 */ unsigned long CompressedWriteBufferSize;
  /* 0x00cc */ unsigned long MaxCompressedOutputSize;
  /* 0x00d0 */ unsigned long* PerformanceStats;
  /* 0x00d8 */ void* CompressionBlock;
  /* 0x00e0 */ void* DmaIO;
  /* 0x00e8 */ void* TemporaryHeap;
  /* 0x00f0 */ struct _MDL* BootLoaderLogMdl;
  /* 0x00f8 */ struct _MDL* FirmwareRuntimeInformationMdl;
  /* 0x0100 */ void* ResumeContext;
  /* 0x0108 */ unsigned long ResumeContextPages;
  /* 0x010c */ long __PADDING__[1];
} POP_HIBER_CONTEXT, *PPOP_HIBER_CONTEXT; /* size: 0x0110 */

