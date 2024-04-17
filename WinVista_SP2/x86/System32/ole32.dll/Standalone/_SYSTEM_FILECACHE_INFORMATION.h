typedef struct _SYSTEM_FILECACHE_INFORMATION
{
  /* 0x0000 */ unsigned long CurrentSize;
  /* 0x0004 */ unsigned long PeakSize;
  /* 0x0008 */ unsigned long PageFaultCount;
  /* 0x000c */ unsigned long MinimumWorkingSet;
  /* 0x0010 */ unsigned long MaximumWorkingSet;
  /* 0x0014 */ unsigned long CurrentSizeIncludingTransitionInPages;
  /* 0x0018 */ unsigned long PeakSizeIncludingTransitionInPages;
  /* 0x001c */ unsigned long TransitionRePurposeCount;
  /* 0x0020 */ unsigned long Flags;
} SYSTEM_FILECACHE_INFORMATION, *PSYSTEM_FILECACHE_INFORMATION; /* size: 0x0024 */

