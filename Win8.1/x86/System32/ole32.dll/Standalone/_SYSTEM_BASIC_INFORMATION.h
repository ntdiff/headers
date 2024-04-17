typedef struct _SYSTEM_BASIC_INFORMATION
{
  /* 0x0000 */ unsigned long Reserved;
  /* 0x0004 */ unsigned long TimerResolution;
  /* 0x0008 */ unsigned long PageSize;
  /* 0x000c */ unsigned long NumberOfPhysicalPages;
  /* 0x0010 */ unsigned long LowestPhysicalPageNumber;
  /* 0x0014 */ unsigned long HighestPhysicalPageNumber;
  /* 0x0018 */ unsigned long AllocationGranularity;
  /* 0x001c */ unsigned long MinimumUserModeAddress;
  /* 0x0020 */ unsigned long MaximumUserModeAddress;
  /* 0x0024 */ unsigned long ActiveProcessorsAffinityMask;
  /* 0x0028 */ char NumberOfProcessors;
  /* 0x0029 */ char __PADDING__[3];
} SYSTEM_BASIC_INFORMATION, *PSYSTEM_BASIC_INFORMATION; /* size: 0x002c */

