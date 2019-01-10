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

typedef struct _PO_HIBER_PERF
{
  /* 0x0000 */ unsigned __int64 IoTicks;
  /* 0x0008 */ unsigned __int64 InitTicks;
  /* 0x0010 */ unsigned __int64 CopyTicks;
  /* 0x0018 */ unsigned __int64 StartCount;
  /* 0x0020 */ unsigned long ElapsedTime;
  /* 0x0024 */ unsigned long IoTime;
  /* 0x0028 */ unsigned long CopyTime;
  /* 0x002c */ unsigned long InitTime;
  /* 0x0030 */ unsigned long PagesWritten;
  /* 0x0034 */ unsigned long PagesProcessed;
  /* 0x0038 */ unsigned long BytesCopied;
  /* 0x003c */ unsigned long DumpCount;
  /* 0x0040 */ unsigned long FileRuns;
  /* 0x0048 */ unsigned __int64 ResumeAppStartTime;
  /* 0x0050 */ unsigned __int64 ResumeAppEndTime;
  /* 0x0058 */ unsigned __int64 HiberFileResumeTime;
} PO_HIBER_PERF, *PPO_HIBER_PERF; /* size: 0x0060 */

typedef struct _POP_HIBER_CONTEXT
{
  /* 0x0000 */ unsigned char WriteToFile;
  /* 0x0001 */ unsigned char ReserveLoaderMemory;
  /* 0x0002 */ unsigned char ReserveFreeMemory;
  /* 0x0003 */ unsigned char VerifyOnWake;
  /* 0x0004 */ unsigned char Reset;
  /* 0x0005 */ unsigned char HiberFlags;
  /* 0x0006 */ unsigned char WroteHiberFile;
  /* 0x0008 */ unsigned long Lock;
  /* 0x000c */ unsigned char MapFrozen;
  /* 0x0010 */ struct _RTL_BITMAP MemoryMap;
  /* 0x0018 */ struct _RTL_BITMAP DiscardedMemoryPages;
  /* 0x0020 */ struct _LIST_ENTRY ClonedRanges;
  /* 0x0028 */ unsigned long ClonedRangeCount;
  /* 0x002c */ struct _LIST_ENTRY* NextCloneRange;
  /* 0x0030 */ unsigned long NextPreserve;
  /* 0x0034 */ struct _MDL* LoaderMdl;
  /* 0x0038 */ struct _MDL* AllocatedMdl;
  /* 0x0040 */ unsigned __int64 PagesOut;
  /* 0x0048 */ void* IoPages;
  /* 0x004c */ unsigned long IoPagesCount;
  /* 0x0050 */ void* CurrentMcb;
  /* 0x0054 */ struct _DUMP_STACK_CONTEXT* DumpStack;
  /* 0x0058 */ struct _KPROCESSOR_STATE* WakeState;
  /* 0x005c */ unsigned long HiberVa;
  /* 0x0060 */ union _LARGE_INTEGER HiberPte;
  /* 0x0068 */ long Status;
  /* 0x006c */ struct PO_MEMORY_IMAGE* MemoryImage;
  /* 0x0070 */ struct _PO_MEMORY_RANGE_TABLE* TableHead;
  /* 0x0074 */ unsigned char* CompressionWorkspace;
  /* 0x0078 */ unsigned char* CompressedWriteBuffer;
  /* 0x007c */ unsigned long* PerformanceStats;
  /* 0x0080 */ void* CompressionBlock;
  /* 0x0084 */ void* DmaIO;
  /* 0x0088 */ void* TemporaryHeap;
  /* 0x0090 */ struct _PO_HIBER_PERF PerfInfo;
  /* 0x00f0 */ struct _MDL* BootLoaderLogMdl;
  /* 0x00f4 */ struct _MDL* FirmwareRuntimeInformationMdl;
  /* 0x00f8 */ void* ResumeContext;
  /* 0x00fc */ unsigned long ResumeContextPages;
} POP_HIBER_CONTEXT, *PPOP_HIBER_CONTEXT; /* size: 0x0100 */

