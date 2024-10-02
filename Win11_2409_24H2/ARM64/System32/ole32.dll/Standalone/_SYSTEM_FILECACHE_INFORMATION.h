typedef struct _SYSTEM_FILECACHE_INFORMATION
{
  /* 0x0000 */ unsigned __int64 CurrentSize;
  /* 0x0008 */ unsigned __int64 PeakSize;
  /* 0x0010 */ unsigned long PageFaultCount;
  /* 0x0018 */ unsigned __int64 MinimumWorkingSet;
  /* 0x0020 */ unsigned __int64 MaximumWorkingSet;
  /* 0x0028 */ unsigned __int64 CurrentSizeIncludingTransitionInPages;
  /* 0x0030 */ unsigned __int64 PeakSizeIncludingTransitionInPages;
  /* 0x0038 */ unsigned long TransitionRePurposeCount;
  /* 0x003c */ unsigned long Flags;
} SYSTEM_FILECACHE_INFORMATION, *PSYSTEM_FILECACHE_INFORMATION; /* size: 0x0040 */

