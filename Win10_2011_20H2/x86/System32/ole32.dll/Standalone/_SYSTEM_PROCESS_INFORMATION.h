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

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _SYSTEM_PROCESS_INFORMATION
{
  /* 0x0000 */ unsigned long NextEntryOffset;
  /* 0x0004 */ unsigned long NumberOfThreads;
  /* 0x0008 */ union _LARGE_INTEGER WorkingSetPrivateSize;
  /* 0x0010 */ unsigned long HardFaultCount;
  /* 0x0014 */ unsigned long NumberOfThreadsHighWatermark;
  /* 0x0018 */ unsigned __int64 CycleTime;
  /* 0x0020 */ union _LARGE_INTEGER CreateTime;
  /* 0x0028 */ union _LARGE_INTEGER UserTime;
  /* 0x0030 */ union _LARGE_INTEGER KernelTime;
  /* 0x0038 */ struct _UNICODE_STRING ImageName;
  /* 0x0040 */ long BasePriority;
  /* 0x0044 */ void* UniqueProcessId;
  /* 0x0048 */ void* InheritedFromUniqueProcessId;
  /* 0x004c */ unsigned long HandleCount;
  /* 0x0050 */ unsigned long SessionId;
  /* 0x0054 */ unsigned long UniqueProcessKey;
  /* 0x0058 */ unsigned long PeakVirtualSize;
  /* 0x005c */ unsigned long VirtualSize;
  /* 0x0060 */ unsigned long PageFaultCount;
  /* 0x0064 */ unsigned long PeakWorkingSetSize;
  /* 0x0068 */ unsigned long WorkingSetSize;
  /* 0x006c */ unsigned long QuotaPeakPagedPoolUsage;
  /* 0x0070 */ unsigned long QuotaPagedPoolUsage;
  /* 0x0074 */ unsigned long QuotaPeakNonPagedPoolUsage;
  /* 0x0078 */ unsigned long QuotaNonPagedPoolUsage;
  /* 0x007c */ unsigned long PagefileUsage;
  /* 0x0080 */ unsigned long PeakPagefileUsage;
  /* 0x0084 */ unsigned long PrivatePageCount;
  /* 0x0088 */ union _LARGE_INTEGER ReadOperationCount;
  /* 0x0090 */ union _LARGE_INTEGER WriteOperationCount;
  /* 0x0098 */ union _LARGE_INTEGER OtherOperationCount;
  /* 0x00a0 */ union _LARGE_INTEGER ReadTransferCount;
  /* 0x00a8 */ union _LARGE_INTEGER WriteTransferCount;
  /* 0x00b0 */ union _LARGE_INTEGER OtherTransferCount;
} SYSTEM_PROCESS_INFORMATION, *PSYSTEM_PROCESS_INFORMATION; /* size: 0x00b8 */

