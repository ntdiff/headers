typedef struct _MINIDUMP_SYSTEM_BASIC_INFORMATION
{
  /* 0x0000 */ unsigned long TimerResolution;
  /* 0x0004 */ unsigned long PageSize;
  /* 0x0008 */ unsigned long NumberOfPhysicalPages;
  /* 0x000c */ unsigned long LowestPhysicalPageNumber;
  /* 0x0010 */ unsigned long HighestPhysicalPageNumber;
  /* 0x0014 */ unsigned long AllocationGranularity;
  /* 0x0018 */ unsigned __int64 MinimumUserModeAddress;
  /* 0x0020 */ unsigned __int64 MaximumUserModeAddress;
  /* 0x0028 */ unsigned __int64 ActiveProcessorsAffinityMask;
  /* 0x0030 */ unsigned long NumberOfProcessors;
} MINIDUMP_SYSTEM_BASIC_INFORMATION, *PMINIDUMP_SYSTEM_BASIC_INFORMATION; /* size: 0x0034 */

