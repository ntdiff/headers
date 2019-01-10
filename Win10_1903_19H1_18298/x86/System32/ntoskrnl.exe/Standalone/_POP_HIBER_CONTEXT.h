typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0004 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef enum _POP_IO_STATUS
{
  IoReady = 0,
  IoPending = 1,
  IoDone = 2,
} POP_IO_STATUS, *PPOP_IO_STATUS;

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

typedef struct _POP_IO_INFO
{
  /* 0x0000 */ struct _MDL* DumpMdl;
  /* 0x0004 */ enum _POP_IO_STATUS IoStatus;
  /* 0x0008 */ unsigned __int64 IoStartCount;
  /* 0x0010 */ unsigned __int64 IoBytesCompleted;
  /* 0x0018 */ unsigned __int64 IoBytesInProgress;
  /* 0x0020 */ unsigned __int64 RequestSize;
  /* 0x0028 */ union _LARGE_INTEGER IoLocation;
  /* 0x0030 */ unsigned __int64 FileOffset;
  /* 0x0038 */ void* Buffer;
  /* 0x003c */ unsigned char AsyncCapable;
  /* 0x0040 */ unsigned __int64 BytesToRead;
  /* 0x0048 */ unsigned long Pages;
  /* 0x0050 */ unsigned __int64 HighestChecksumIndex;
  /* 0x0058 */ unsigned short PreviousChecksum;
  /* 0x005a */ char __PADDING__[6];
} POP_IO_INFO, *PPOP_IO_INFO; /* size: 0x0060 */

typedef struct _POP_HIBER_CONTEXT
{
  /* 0x0000 */ unsigned char Reset;
  /* 0x0001 */ unsigned char HiberFlags;
  /* 0x0002 */ unsigned char WroteHiberFile;
  /* 0x0003 */ unsigned char KernelPhaseVerificationActive;
  /* 0x0004 */ volatile unsigned char InitializationFinished;
  /* 0x0008 */ volatile long NextTableLockHeld;
  /* 0x000c */ volatile long BootPhaseFinishedBarrier;
  /* 0x0010 */ volatile long KernelResumeFinishedBarrier;
  /* 0x0014 */ volatile long HvCaptureReadyBarrier;
  /* 0x0018 */ volatile long HvCaptureCompletedBarrier;
  /* 0x001c */ unsigned char MapFrozen;
  union
  {
    /* 0x0020 */ struct _RTL_BITMAP DiscardMap;
    /* 0x0020 */ struct _RTL_BITMAP KernelPhaseMap;
  }; /* size: 0x0008 */
  /* 0x0028 */ struct _RTL_BITMAP BootPhaseMap;
  /* 0x0030 */ struct _LIST_ENTRY ClonedRanges;
  /* 0x0038 */ unsigned long ClonedRangeCount;
  /* 0x0040 */ unsigned __int64 ClonedPageCount;
  /* 0x0048 */ struct _RTL_BITMAP* CurrentMap;
  /* 0x004c */ struct _LIST_ENTRY* NextCloneRange;
  /* 0x0050 */ unsigned long NextPreserve;
  /* 0x0054 */ struct _MDL* LoaderMdl;
  /* 0x0058 */ struct _MDL* AllocatedMdl;
  /* 0x0060 */ unsigned __int64 PagesOut;
  /* 0x0068 */ void* IoPages;
  /* 0x006c */ unsigned long IoPagesCount;
  /* 0x0070 */ void* CurrentMcb;
  /* 0x0074 */ struct _DUMP_STACK_CONTEXT* DumpStack;
  /* 0x0078 */ struct _KPROCESSOR_STATE* WakeState;
  /* 0x007c */ unsigned long IoProgress;
  /* 0x0080 */ long Status;
  /* 0x0084 */ unsigned long GraphicsProc;
  /* 0x0088 */ struct PO_MEMORY_IMAGE* MemoryImage;
  /* 0x008c */ unsigned long* PerformanceStats;
  /* 0x0090 */ struct _MDL* BootLoaderLogMdl;
  /* 0x0094 */ struct _MDL* FirmwareRuntimeInformationMdl;
  /* 0x0098 */ void* FirmwareRuntimeInformationVa;
  /* 0x009c */ void* ResumeContext;
  /* 0x00a0 */ unsigned long ResumeContextPages;
  /* 0x00a4 */ unsigned long ProcessorCount;
  /* 0x00a8 */ struct _POP_PER_PROCESSOR_CONTEXT* ProcessorContext;
  /* 0x00ac */ char* ProdConsBuffer;
  /* 0x00b0 */ unsigned long ProdConsSize;
  /* 0x00b4 */ unsigned long MaxDataPages;
  /* 0x00b8 */ void* ExtraBuffer;
  /* 0x00bc */ unsigned long ExtraBufferSize;
  /* 0x00c0 */ void* ExtraMapVa;
  /* 0x00c4 */ unsigned long BitlockerKeyPFN;
  /* 0x00c8 */ struct _POP_IO_INFO IoInfo;
  /* 0x0128 */ wchar_t* IoChecksums;
  /* 0x012c */ unsigned long IoChecksumsSize;
  /* 0x0130 */ unsigned long HardwareConfigurationSignature;
  /* 0x0134 */ unsigned char SecureBoot;
  /* 0x0135 */ char __PADDING__[3];
} POP_HIBER_CONTEXT, *PPOP_HIBER_CONTEXT; /* size: 0x0138 */

