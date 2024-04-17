typedef struct _SYSTEM_BASIC_INFORMATION
{
  /* 0x0000 */ unsigned long Reserved;
  /* 0x0004 */ unsigned long TimerResolution;
  /* 0x0008 */ unsigned long PageSize;
  /* 0x000c */ unsigned long NumberOfPhysicalPages;
  /* 0x0010 */ unsigned long LowestPhysicalPageNumber;
  /* 0x0014 */ unsigned long HighestPhysicalPageNumber;
  /* 0x0018 */ unsigned long AllocationGranularity;
  /* 0x0020 */ unsigned __int64 MinimumUserModeAddress;
  /* 0x0028 */ unsigned __int64 MaximumUserModeAddress;
  /* 0x0030 */ unsigned __int64 ActiveProcessorsAffinityMask;
  /* 0x0038 */ char NumberOfProcessors;
  /* 0x0039 */ char __PADDING__[7];
} SYSTEM_BASIC_INFORMATION, *PSYSTEM_BASIC_INFORMATION; /* size: 0x0040 */

