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
  /* 0x0008 */ unsigned __int64 Lock;
  /* 0x0010 */ unsigned char MapFrozen;
  /* 0x0018 */ struct _RTL_BITMAP MemoryMap;
  /* 0x0028 */ struct _RTL_BITMAP DiscardedMemoryPages;
  /* 0x0038 */ struct _LIST_ENTRY ClonedRanges;
  /* 0x0048 */ unsigned long ClonedRangeCount;
  /* 0x0050 */ struct _LIST_ENTRY* NextCloneRange;
  /* 0x0058 */ unsigned __int64 NextPreserve;
  /* 0x0060 */ struct _MDL* LoaderMdl;
  /* 0x0068 */ struct _MDL* AllocatedMdl;
  /* 0x0070 */ unsigned __int64 PagesOut;
  /* 0x0078 */ void* IoPages;
  /* 0x0080 */ unsigned long IoPagesCount;
  /* 0x0088 */ void* CurrentMcb;
  /* 0x0090 */ struct _DUMP_STACK_CONTEXT* DumpStack;
  /* 0x0098 */ struct _KPROCESSOR_STATE* WakeState;
  /* 0x00a0 */ unsigned __int64 HiberVa;
  /* 0x00a8 */ union _LARGE_INTEGER HiberPte;
  /* 0x00b0 */ long Status;
  /* 0x00b8 */ struct PO_MEMORY_IMAGE* MemoryImage;
  /* 0x00c0 */ struct _PO_MEMORY_RANGE_ARRAY* TableHead;
  /* 0x00c8 */ unsigned char* CompressionWorkspace;
  /* 0x00d0 */ unsigned char* CompressedWriteBuffer;
  /* 0x00d8 */ unsigned long* PerformanceStats;
  /* 0x00e0 */ void* CompressionBlock;
  /* 0x00e8 */ void* DmaIO;
  /* 0x00f0 */ void* TemporaryHeap;
  /* 0x00f8 */ struct _PO_HIBER_PERF PerfInfo;
  /* 0x0158 */ struct _MDL* BootLoaderLogMdl;
  /* 0x0160 */ struct _MDL* FirmwareRuntimeInformationMdl;
  /* 0x0168 */ void* ResumeContext;
  /* 0x0170 */ unsigned long ResumeContextPages;
  /* 0x0174 */ long __PADDING__[1];
} POP_HIBER_CONTEXT, *PPOP_HIBER_CONTEXT; /* size: 0x0178 */

