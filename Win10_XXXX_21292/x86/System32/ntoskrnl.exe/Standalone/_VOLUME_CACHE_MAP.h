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

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _CC_VOLUME_TELEMETRY
{
  /* 0x0000 */ struct _GUID DeviceGuid;
  /* 0x0010 */ unsigned __int64 TotalDirtyPages;
  /* 0x0018 */ unsigned __int64 MaxDirtyPages;
  /* 0x0020 */ unsigned __int64 DirtyPageSamples;
  /* 0x0028 */ unsigned __int64 TotalPagesQueuedToDisk;
  /* 0x0030 */ unsigned __int64 MaxPagesQueuedToDisk;
  /* 0x0038 */ unsigned __int64 PagesQueuedToDiskSamples;
  /* 0x0040 */ unsigned __int64 TotalLoggedPagesQueuedToDisk;
  /* 0x0048 */ unsigned __int64 MaxLoggedPagesQueuedToDisk;
  /* 0x0050 */ unsigned __int64 LoggedPagesQueuedToDiskSamples;
  /* 0x0058 */ unsigned __int64 ReadTotalBytes;
  /* 0x0060 */ unsigned __int64 ReadPagedInTotalBytes;
  /* 0x0068 */ unsigned __int64 ReadAheadTotalBytes;
  /* 0x0070 */ unsigned __int64 TotalSynchronousReadIoCount;
  /* 0x0078 */ unsigned __int64 TotalSynchronousNonBlockingReadIoCount;
  /* 0x0080 */ unsigned __int64 TotalFailedSynchronousNonBlockingReadIoCount;
  /* 0x0088 */ unsigned __int64 TotalWrites;
  /* 0x0090 */ unsigned __int64 TotalHardThrottleWrites;
  /* 0x0098 */ unsigned __int64 TotalSoftThrottleWrites;
  /* 0x00a0 */ unsigned __int64 SynchronousReadIoMaxLatency;
  /* 0x00a8 */ unsigned __int64 SynchronousReadIoNonBlockingMaxLatency;
  /* 0x00b0 */ unsigned __int64 SynchronousReadIoCounts[12];
  /* 0x0110 */ unsigned __int64 SynchronousReadTotalLatency[12];
  /* 0x0170 */ unsigned __int64 SynchronousReadNonBlockingIoCounts[12];
  /* 0x01d0 */ unsigned __int64 SynchronousReadNonBlockingTotalLatency[12];
  /* 0x0230 */ unsigned __int64 TotalSynchronousWriteIoCount;
  /* 0x0238 */ unsigned __int64 TotalSynchronousNonBlockingWriteIoCount;
  /* 0x0240 */ unsigned __int64 TotalFailedSynchronousNonBlockingWriteIoCount;
  /* 0x0248 */ unsigned __int64 SynchronousWriteIoMaxLatency;
  /* 0x0250 */ unsigned __int64 SynchronousWriteIoNonBlockingMaxLatency;
  /* 0x0258 */ unsigned __int64 SynchronousWriteIoCounts[12];
  /* 0x02b8 */ unsigned __int64 SynchronousWriteTotalLatency[12];
  /* 0x0318 */ unsigned __int64 SynchronousWriteNonBlockingIoCounts[12];
  /* 0x0378 */ unsigned __int64 SynchronousWriteNonBlockingTotalLatency[12];
  /* 0x03d8 */ unsigned __int64 TotalAsynchronousReadIoCount;
  /* 0x03e0 */ unsigned __int64 AsynchronousReadIoMaxLatency;
  /* 0x03e8 */ unsigned __int64 AsynchronousReadIoCounts[12];
  /* 0x0448 */ unsigned __int64 AsynchronousReadTotalLatency[12];
  /* 0x04a8 */ unsigned __int64 CumulativeTotalDirtyPages;
  /* 0x04b0 */ unsigned __int64 CumulativeMaxDirtyPages;
  /* 0x04b8 */ unsigned __int64 CumulativeDirtyPageSamples;
  /* 0x04c0 */ unsigned __int64 CumulativeTotalPagesQueuedToDisk;
  /* 0x04c8 */ unsigned __int64 CumulativeMaxPagesQueuedToDisk;
  /* 0x04d0 */ unsigned __int64 CumulativePagesQueuedToDiskSamples;
  /* 0x04d8 */ unsigned __int64 CumulativeTotalLoggedPagesQueuedToDisk;
  /* 0x04e0 */ unsigned __int64 CumulativeMaxLoggedPagesQueuedToDisk;
  /* 0x04e8 */ unsigned __int64 CumulativeLoggedPagesQueuedToDiskSamples;
  /* 0x04f0 */ unsigned __int64 CumulativeReadTotalBytes;
  /* 0x04f8 */ unsigned __int64 CumulativeReadPagedInTotalBytes;
  /* 0x0500 */ unsigned __int64 CumulativeReadAheadTotalBytes;
  /* 0x0508 */ unsigned __int64 CumulativeTotalSynchronousReadIoCount;
  /* 0x0510 */ unsigned __int64 CumulativeTotalSynchronousNonBlockingReadIoCount;
  /* 0x0518 */ unsigned __int64 CumulativeTotalFailedSynchronousNonBlockingReadIoCount;
  /* 0x0520 */ unsigned __int64 CumulativeTotalWrites;
  /* 0x0528 */ unsigned __int64 CumulativeTotalHardThrottleWrites;
  /* 0x0530 */ unsigned __int64 CumulativeTotalSoftThrottleWrites;
  /* 0x0538 */ unsigned __int64 CumulativeSynchronousReadIoMaxLatency;
  /* 0x0540 */ unsigned __int64 CumulativeSynchronousReadIoNonBlockingMaxLatency;
  /* 0x0548 */ unsigned __int64 CumulativeSynchronousReadIoCounts[12];
  /* 0x05a8 */ unsigned __int64 CumulativeSynchronousReadTotalLatency[12];
  /* 0x0608 */ unsigned __int64 CumulativeSynchronousReadNonBlockingIoCounts[12];
  /* 0x0668 */ unsigned __int64 CumulativeSynchronousReadNonBlockingTotalLatency[12];
  /* 0x06c8 */ unsigned __int64 CumulativeTotalSynchronousWriteIoCount;
  /* 0x06d0 */ unsigned __int64 CumulativeTotalSynchronousNonBlockingWriteIoCount;
  /* 0x06d8 */ unsigned __int64 CumulativeTotalFailedSynchronousNonBlockingWriteIoCount;
  /* 0x06e0 */ unsigned __int64 CumulativeSynchronousWriteIoMaxLatency;
  /* 0x06e8 */ unsigned __int64 CumulativeSynchronousWriteIoNonBlockingMaxLatency;
  /* 0x06f0 */ unsigned __int64 CumulativeSynchronousWriteIoCounts[12];
  /* 0x0750 */ unsigned __int64 CumulativeSynchronousWriteTotalLatency[12];
  /* 0x07b0 */ unsigned __int64 CumulativeSynchronousWriteNonBlockingIoCounts[12];
  /* 0x0810 */ unsigned __int64 CumulativeSynchronousWriteNonBlockingTotalLatency[12];
  /* 0x0870 */ unsigned __int64 CumulativeTotalAsynchronousReadIoCount;
  /* 0x0878 */ unsigned __int64 CumulativeAsynchronousReadIoMaxLatency;
  /* 0x0880 */ unsigned __int64 CumulativeAsynchronousReadIoCounts[12];
  /* 0x08e0 */ unsigned __int64 CumulativeAsynchronousReadTotalLatency[12];
} CC_VOLUME_TELEMETRY, *PCC_VOLUME_TELEMETRY; /* size: 0x0940 */

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
  /* 0x0090 */ struct _CC_VOLUME_TELEMETRY VolumeTelemetry;
} VOLUME_CACHE_MAP, *PVOLUME_CACHE_MAP; /* size: 0x09d0 */

