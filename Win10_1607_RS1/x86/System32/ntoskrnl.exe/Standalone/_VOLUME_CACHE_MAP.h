typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

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
  /* 0x0010 */ unsigned __int64 AggregateAvailablePages;
  /* 0x0018 */ unsigned __int64 AggregateDirtyPages;
  /* 0x0020 */ unsigned long AvailableHistory;
  /* 0x0024 */ long __PADDING__[1];
} DIRTY_PAGE_THRESHOLDS, *PDIRTY_PAGE_THRESHOLDS; /* size: 0x0028 */

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
  /* 0x0040 */ unsigned long AdditionalPagesToWrite;
  /* 0x0044 */ unsigned long CcLWScanDPThreshold;
  /* 0x0048 */ union _LARGE_INTEGER LargestLsnForCurrentLWScan;
  /* 0x0050 */ struct _FILE_OBJECT* RelatedFileObject;
  /* 0x0054 */ unsigned long LargestLsnFileObjectKey;
  /* 0x0058 */ union _LARGE_INTEGER LastLWTimeStamp;
  /* 0x0060 */ unsigned long Flags;
  /* 0x0064 */ long __PADDING__[1];
} LOG_HANDLE_CONTEXT, *PLOG_HANDLE_CONTEXT; /* size: 0x0068 */

typedef struct _VOLUME_CACHE_MAP
{
  /* 0x0000 */ short NodeTypeCode;
  /* 0x0002 */ short NodeByteCode;
  /* 0x0004 */ unsigned long UseCount;
  /* 0x0008 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x000c */ struct _LIST_ENTRY VolumeCacheMapLinks;
  /* 0x0014 */ unsigned long DirtyPages;
  /* 0x0018 */ struct _LOG_HANDLE_CONTEXT LogHandleContext;
  /* 0x0080 */ unsigned long Flags;
  /* 0x0084 */ unsigned long PagesQueuedToDisk;
  /* 0x0088 */ unsigned long LoggedPagesQueuedToDisk;
  /* 0x008c */ long __PADDING__[1];
} VOLUME_CACHE_MAP, *PVOLUME_CACHE_MAP; /* size: 0x0090 */

