typedef struct _MINIDUMP_PROCESS_VM_COUNTERS_1
{
  /* 0x0000 */ unsigned short Revision;
  /* 0x0004 */ unsigned long PageFaultCount;
  /* 0x0008 */ unsigned __int64 PeakWorkingSetSize;
  /* 0x0010 */ unsigned __int64 WorkingSetSize;
  /* 0x0018 */ unsigned __int64 QuotaPeakPagedPoolUsage;
  /* 0x0020 */ unsigned __int64 QuotaPagedPoolUsage;
  /* 0x0028 */ unsigned __int64 QuotaPeakNonPagedPoolUsage;
  /* 0x0030 */ unsigned __int64 QuotaNonPagedPoolUsage;
  /* 0x0038 */ unsigned __int64 PagefileUsage;
  /* 0x0040 */ unsigned __int64 PeakPagefileUsage;
  /* 0x0048 */ unsigned __int64 PrivateUsage;
} MINIDUMP_PROCESS_VM_COUNTERS_1, *PMINIDUMP_PROCESS_VM_COUNTERS_1; /* size: 0x0050 */

