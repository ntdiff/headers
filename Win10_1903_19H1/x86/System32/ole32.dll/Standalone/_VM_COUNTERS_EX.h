typedef struct _VM_COUNTERS_EX
{
  /* 0x0000 */ unsigned long PeakVirtualSize;
  /* 0x0004 */ unsigned long VirtualSize;
  /* 0x0008 */ unsigned long PageFaultCount;
  /* 0x000c */ unsigned long PeakWorkingSetSize;
  /* 0x0010 */ unsigned long WorkingSetSize;
  /* 0x0014 */ unsigned long QuotaPeakPagedPoolUsage;
  /* 0x0018 */ unsigned long QuotaPagedPoolUsage;
  /* 0x001c */ unsigned long QuotaPeakNonPagedPoolUsage;
  /* 0x0020 */ unsigned long QuotaNonPagedPoolUsage;
  /* 0x0024 */ unsigned long PagefileUsage;
  /* 0x0028 */ unsigned long PeakPagefileUsage;
  /* 0x002c */ unsigned long PrivateUsage;
} VM_COUNTERS_EX, *PVM_COUNTERS_EX; /* size: 0x0030 */

