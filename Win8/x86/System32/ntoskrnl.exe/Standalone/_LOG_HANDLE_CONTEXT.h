typedef struct _DIRTY_PAGE_STATISTICS
{
  /* 0x0000 */ unsigned long DirtyPages;
  /* 0x0004 */ unsigned long DirtyPagesLastScan;
  /* 0x0008 */ unsigned long DirtyPagesScheduledLastScan;
} DIRTY_PAGE_STATISTICS, *PDIRTY_PAGE_STATISTICS; /* size: 0x000c */

typedef struct _DIRTY_PAGE_THRESHOLDS
{
  /* 0x0000 */ unsigned long DirtyPageThreshold;
  /* 0x0004 */ unsigned long DirtyPageThresholdTop;
  /* 0x0008 */ unsigned long DirtyPageThresholdBottom;
  /* 0x000c */ unsigned long DirtyPageTarget;
} DIRTY_PAGE_THRESHOLDS, *PDIRTY_PAGE_THRESHOLDS; /* size: 0x0010 */

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _LOG_HANDLE_CONTEXT
{
  /* 0x0000 */ void* LogHandle;
  /* 0x0004 */ void* FlushToLsnRoutine /* function */;
  /* 0x0008 */ void* QueryLogHandleInfoRoutine /* function */;
  /* 0x000c */ struct _DIRTY_PAGE_STATISTICS DirtyPageStatistics;
  /* 0x0018 */ struct _DIRTY_PAGE_THRESHOLDS DirtyPageThresholds;
  /* 0x0028 */ unsigned long AdditionalPagesToWrite;
  /* 0x002c */ unsigned long CcLWScanDPThreshold;
  /* 0x0030 */ union _LARGE_INTEGER LargestLsnForCurrentLWScan;
  /* 0x0038 */ struct _FILE_OBJECT* RelatedFileObject;
  /* 0x003c */ unsigned long LargestLsnFileObjectKey;
  /* 0x0040 */ union _LARGE_INTEGER LastLWTimeStamp;
  /* 0x0048 */ unsigned long Flags;
  /* 0x004c */ long __PADDING__[1];
} LOG_HANDLE_CONTEXT, *PLOG_HANDLE_CONTEXT; /* size: 0x0050 */

