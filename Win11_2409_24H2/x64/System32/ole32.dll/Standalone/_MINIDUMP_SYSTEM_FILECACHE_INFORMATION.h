typedef struct _MINIDUMP_SYSTEM_FILECACHE_INFORMATION
{
  /* 0x0000 */ unsigned __int64 CurrentSize;
  /* 0x0008 */ unsigned __int64 PeakSize;
  /* 0x0010 */ unsigned long PageFaultCount;
  /* 0x0014 */ unsigned __int64 MinimumWorkingSet;
  /* 0x001c */ unsigned __int64 MaximumWorkingSet;
  /* 0x0024 */ unsigned __int64 CurrentSizeIncludingTransitionInPages;
  /* 0x002c */ unsigned __int64 PeakSizeIncludingTransitionInPages;
  /* 0x0034 */ unsigned long TransitionRePurposeCount;
  /* 0x0038 */ unsigned long Flags;
} MINIDUMP_SYSTEM_FILECACHE_INFORMATION, *PMINIDUMP_SYSTEM_FILECACHE_INFORMATION; /* size: 0x003c */

