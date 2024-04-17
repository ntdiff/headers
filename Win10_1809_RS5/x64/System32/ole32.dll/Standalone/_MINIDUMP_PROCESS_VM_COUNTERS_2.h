typedef struct _MINIDUMP_PROCESS_VM_COUNTERS_2
{
  /* 0x0000 */ unsigned short Revision;
  /* 0x0002 */ unsigned short Flags;
  /* 0x0004 */ unsigned long PageFaultCount;
  /* 0x0008 */ unsigned __int64 PeakWorkingSetSize;
  /* 0x0010 */ unsigned __int64 WorkingSetSize;
  /* 0x0018 */ unsigned __int64 QuotaPeakPagedPoolUsage;
  /* 0x0020 */ unsigned __int64 QuotaPagedPoolUsage;
  /* 0x0028 */ unsigned __int64 QuotaPeakNonPagedPoolUsage;
  /* 0x0030 */ unsigned __int64 QuotaNonPagedPoolUsage;
  /* 0x0038 */ unsigned __int64 PagefileUsage;
  /* 0x0040 */ unsigned __int64 PeakPagefileUsage;
  /* 0x0048 */ unsigned __int64 PeakVirtualSize;
  /* 0x0050 */ unsigned __int64 VirtualSize;
  /* 0x0058 */ unsigned __int64 PrivateUsage;
  /* 0x0060 */ unsigned __int64 PrivateWorkingSetSize;
  /* 0x0068 */ unsigned __int64 SharedCommitUsage;
  /* 0x0070 */ unsigned __int64 JobSharedCommitUsage;
  /* 0x0078 */ unsigned __int64 JobPrivateCommitUsage;
  /* 0x0080 */ unsigned __int64 JobPeakPrivateCommitUsage;
  /* 0x0088 */ unsigned __int64 JobPrivateCommitLimit;
  /* 0x0090 */ unsigned __int64 JobTotalCommitLimit;
} MINIDUMP_PROCESS_VM_COUNTERS_2, *PMINIDUMP_PROCESS_VM_COUNTERS_2; /* size: 0x0098 */

