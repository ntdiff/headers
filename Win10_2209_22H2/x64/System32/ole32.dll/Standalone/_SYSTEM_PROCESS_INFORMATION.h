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
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

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
  /* 0x0048 */ long BasePriority;
  /* 0x0050 */ void* UniqueProcessId;
  /* 0x0058 */ void* InheritedFromUniqueProcessId;
  /* 0x0060 */ unsigned long HandleCount;
  /* 0x0064 */ unsigned long SessionId;
  /* 0x0068 */ unsigned __int64 UniqueProcessKey;
  /* 0x0070 */ unsigned __int64 PeakVirtualSize;
  /* 0x0078 */ unsigned __int64 VirtualSize;
  /* 0x0080 */ unsigned long PageFaultCount;
  /* 0x0088 */ unsigned __int64 PeakWorkingSetSize;
  /* 0x0090 */ unsigned __int64 WorkingSetSize;
  /* 0x0098 */ unsigned __int64 QuotaPeakPagedPoolUsage;
  /* 0x00a0 */ unsigned __int64 QuotaPagedPoolUsage;
  /* 0x00a8 */ unsigned __int64 QuotaPeakNonPagedPoolUsage;
  /* 0x00b0 */ unsigned __int64 QuotaNonPagedPoolUsage;
  /* 0x00b8 */ unsigned __int64 PagefileUsage;
  /* 0x00c0 */ unsigned __int64 PeakPagefileUsage;
  /* 0x00c8 */ unsigned __int64 PrivatePageCount;
  /* 0x00d0 */ union _LARGE_INTEGER ReadOperationCount;
  /* 0x00d8 */ union _LARGE_INTEGER WriteOperationCount;
  /* 0x00e0 */ union _LARGE_INTEGER OtherOperationCount;
  /* 0x00e8 */ union _LARGE_INTEGER ReadTransferCount;
  /* 0x00f0 */ union _LARGE_INTEGER WriteTransferCount;
  /* 0x00f8 */ union _LARGE_INTEGER OtherTransferCount;
} SYSTEM_PROCESS_INFORMATION, *PSYSTEM_PROCESS_INFORMATION; /* size: 0x0100 */

