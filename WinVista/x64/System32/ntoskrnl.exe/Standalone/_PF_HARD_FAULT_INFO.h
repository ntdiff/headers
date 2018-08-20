typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct // _TAG_UNNAMED_5
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _ETW_KERNEL_TRACE_TIMESTAMP
{
  /* 0x0000 */ union _LARGE_INTEGER KernelTraceTimeStamp[2];
} ETW_KERNEL_TRACE_TIMESTAMP, *PETW_KERNEL_TRACE_TIMESTAMP; /* size: 0x0010 */

typedef struct _PERFINFO_HARDPAGEFAULT_INFORMATION
{
  /* 0x0000 */ union _LARGE_INTEGER ReadOffset;
  /* 0x0008 */ void* VirtualAddress;
  /* 0x0010 */ void* FileObject;
  /* 0x0018 */ unsigned long ThreadId;
  /* 0x001c */ unsigned long ByteCount;
} PERFINFO_HARDPAGEFAULT_INFORMATION, *PPERFINFO_HARDPAGEFAULT_INFORMATION; /* size: 0x0020 */

typedef struct _PF_HARD_FAULT_INFO
{
  /* 0x0000 */ struct _ETW_KERNEL_TRACE_TIMESTAMP KernelTimeStamp;
  /* 0x0010 */ struct _PERFINFO_HARDPAGEFAULT_INFORMATION HardFaultEvent;
  /* 0x0030 */ union _LARGE_INTEGER IoTimeInTicks;
} PF_HARD_FAULT_INFO, *PPF_HARD_FAULT_INFO; /* size: 0x0038 */

