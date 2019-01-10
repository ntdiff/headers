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
  /* 0x0008 */ enum _POP_IO_STATUS IoStatus;
  /* 0x0010 */ unsigned __int64 IoStartCount;
  /* 0x0018 */ unsigned __int64 IoBytesCompleted;
  /* 0x0020 */ unsigned __int64 IoBytesInProgress;
  /* 0x0028 */ unsigned __int64 RequestSize;
  /* 0x0030 */ union _LARGE_INTEGER IoLocation;
  /* 0x0038 */ unsigned __int64 FileOffset;
  /* 0x0040 */ void* Buffer;
  /* 0x0048 */ unsigned char AsyncCapable;
  /* 0x0050 */ unsigned __int64 BytesToRead;
  /* 0x0058 */ unsigned long Pages;
  /* 0x0060 */ unsigned __int64 HighestChecksumIndex;
  /* 0x0068 */ unsigned short PreviousChecksum;
  /* 0x006a */ char __PADDING__[6];
} POP_IO_INFO, *PPOP_IO_INFO; /* size: 0x0070 */

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
  }; /* size: 0x0010 */
  /* 0x0030 */ struct _RTL_BITMAP BootPhaseMap;
  /* 0x0040 */ struct _LIST_ENTRY ClonedRanges;
  /* 0x0050 */ unsigned long ClonedRangeCount;
  /* 0x0058 */ unsigned __int64 ClonedPageCount;
  /* 0x0060 */ struct _RTL_BITMAP* CurrentMap;
  /* 0x0068 */ struct _LIST_ENTRY* NextCloneRange;
  /* 0x0070 */ unsigned __int64 NextPreserve;
  /* 0x0078 */ struct _MDL* LoaderMdl;
  /* 0x0080 */ struct _MDL* AllocatedMdl;
  /* 0x0088 */ unsigned __int64 PagesOut;
  /* 0x0090 */ void* IoPages;
  /* 0x0098 */ unsigned long IoPagesCount;
  /* 0x00a0 */ void* CurrentMcb;
  /* 0x00a8 */ struct _DUMP_STACK_CONTEXT* DumpStack;
  /* 0x00b0 */ struct _KPROCESSOR_STATE* WakeState;
  /* 0x00b8 */ unsigned long IoProgress;
  /* 0x00bc */ long Status;
  /* 0x00c0 */ unsigned long GraphicsProc;
  /* 0x00c8 */ struct PO_MEMORY_IMAGE* MemoryImage;
  /* 0x00d0 */ unsigned long* PerformanceStats;
  /* 0x00d8 */ struct _MDL* BootLoaderLogMdl;
  /* 0x00e0 */ struct _MDL* FirmwareRuntimeInformationMdl;
  /* 0x00e8 */ void* FirmwareRuntimeInformationVa;
  /* 0x00f0 */ void* ResumeContext;
  /* 0x00f8 */ unsigned long ResumeContextPages;
  /* 0x00fc */ unsigned long SecurePages;
  /* 0x0100 */ unsigned long ProcessorCount;
  /* 0x0108 */ struct _POP_PER_PROCESSOR_CONTEXT* ProcessorContext;
  /* 0x0110 */ char* ProdConsBuffer;
  /* 0x0118 */ unsigned long ProdConsSize;
  /* 0x011c */ unsigned long MaxDataPages;
  /* 0x0120 */ void* ExtraBuffer;
  /* 0x0128 */ unsigned __int64 ExtraBufferSize;
  /* 0x0130 */ void* ExtraMapVa;
  /* 0x0138 */ unsigned __int64 BitlockerKeyPFN;
  /* 0x0140 */ struct _POP_IO_INFO IoInfo;
  /* 0x01b0 */ wchar_t* IoChecksums;
  /* 0x01b8 */ unsigned __int64 IoChecksumsSize;
  /* 0x01c0 */ unsigned long HardwareConfigurationSignature;
  /* 0x01c4 */ unsigned char IumEnabled;
  /* 0x01c5 */ unsigned char SecureBoot;
  /* 0x01c6 */ char __PADDING__[2];
} POP_HIBER_CONTEXT, *PPOP_HIBER_CONTEXT; /* size: 0x01c8 */

