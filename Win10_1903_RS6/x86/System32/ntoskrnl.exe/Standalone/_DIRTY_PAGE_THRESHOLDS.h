typedef struct _DIRTY_PAGE_THRESHOLDS
{
  /* 0x0000 */ unsigned long DirtyPageThreshold;
  /* 0x0004 */ unsigned long DirtyPageThresholdTop;
  /* 0x0008 */ unsigned long DirtyPageThresholdBottom;
  /* 0x000c */ unsigned long DirtyPageTarget;
  /* 0x0010 */ unsigned __int64 AggregateAvailablePages;
  /* 0x0018 */ unsigned __int64 AggregateDirtyPages;
  /* 0x0020 */ unsigned long AvailableHistory;
  /* 0x0024 */ long __PADDING__[1];
} DIRTY_PAGE_THRESHOLDS, *PDIRTY_PAGE_THRESHOLDS; /* size: 0x0028 */

