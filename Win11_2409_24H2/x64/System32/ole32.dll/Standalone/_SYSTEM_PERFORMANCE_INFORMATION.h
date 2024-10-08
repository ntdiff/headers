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

typedef struct _SYSTEM_PERFORMANCE_INFORMATION
{
  /* 0x0000 */ union _LARGE_INTEGER IdleProcessTime;
  /* 0x0008 */ union _LARGE_INTEGER IoReadTransferCount;
  /* 0x0010 */ union _LARGE_INTEGER IoWriteTransferCount;
  /* 0x0018 */ union _LARGE_INTEGER IoOtherTransferCount;
  /* 0x0020 */ unsigned long IoReadOperationCount;
  /* 0x0024 */ unsigned long IoWriteOperationCount;
  /* 0x0028 */ unsigned long IoOtherOperationCount;
  /* 0x002c */ unsigned long AvailablePages;
  /* 0x0030 */ unsigned long CommittedPages;
  /* 0x0034 */ unsigned long CommitLimit;
  /* 0x0038 */ unsigned long PeakCommitment;
  /* 0x003c */ unsigned long PageFaultCount;
  /* 0x0040 */ unsigned long CopyOnWriteCount;
  /* 0x0044 */ unsigned long TransitionCount;
  /* 0x0048 */ unsigned long CacheTransitionCount;
  /* 0x004c */ unsigned long DemandZeroCount;
  /* 0x0050 */ unsigned long PageReadCount;
  /* 0x0054 */ unsigned long PageReadIoCount;
  /* 0x0058 */ unsigned long CacheReadCount;
  /* 0x005c */ unsigned long CacheIoCount;
  /* 0x0060 */ unsigned long DirtyPagesWriteCount;
  /* 0x0064 */ unsigned long DirtyWriteIoCount;
  /* 0x0068 */ unsigned long MappedPagesWriteCount;
  /* 0x006c */ unsigned long MappedWriteIoCount;
  /* 0x0070 */ unsigned long PagedPoolPages;
  /* 0x0074 */ unsigned long NonPagedPoolPages;
  /* 0x0078 */ unsigned long PagedPoolAllocs;
  /* 0x007c */ unsigned long PagedPoolFrees;
  /* 0x0080 */ unsigned long NonPagedPoolAllocs;
  /* 0x0084 */ unsigned long NonPagedPoolFrees;
  /* 0x0088 */ unsigned long FreeSystemPtes;
  /* 0x008c */ unsigned long ResidentSystemCodePage;
  /* 0x0090 */ unsigned long TotalSystemDriverPages;
  /* 0x0094 */ unsigned long TotalSystemCodePages;
  /* 0x0098 */ unsigned long NonPagedPoolLookasideHits;
  /* 0x009c */ unsigned long PagedPoolLookasideHits;
  /* 0x00a0 */ unsigned long AvailablePagedPoolPages;
  /* 0x00a4 */ unsigned long ResidentSystemCachePage;
  /* 0x00a8 */ unsigned long ResidentPagedPoolPage;
  /* 0x00ac */ unsigned long ResidentSystemDriverPage;
  /* 0x00b0 */ unsigned long CcFastReadNoWait;
  /* 0x00b4 */ unsigned long CcFastReadWait;
  /* 0x00b8 */ unsigned long CcFastReadResourceMiss;
  /* 0x00bc */ unsigned long CcFastReadNotPossible;
  /* 0x00c0 */ unsigned long CcFastMdlReadNoWait;
  /* 0x00c4 */ unsigned long CcFastMdlReadWait;
  /* 0x00c8 */ unsigned long CcFastMdlReadResourceMiss;
  /* 0x00cc */ unsigned long CcFastMdlReadNotPossible;
  /* 0x00d0 */ unsigned long CcMapDataNoWait;
  /* 0x00d4 */ unsigned long CcMapDataWait;
  /* 0x00d8 */ unsigned long CcMapDataNoWaitMiss;
  /* 0x00dc */ unsigned long CcMapDataWaitMiss;
  /* 0x00e0 */ unsigned long CcPinMappedDataCount;
  /* 0x00e4 */ unsigned long CcPinReadNoWait;
  /* 0x00e8 */ unsigned long CcPinReadWait;
  /* 0x00ec */ unsigned long CcPinReadNoWaitMiss;
  /* 0x00f0 */ unsigned long CcPinReadWaitMiss;
  /* 0x00f4 */ unsigned long CcCopyReadNoWait;
  /* 0x00f8 */ unsigned long CcCopyReadWait;
  /* 0x00fc */ unsigned long CcCopyReadNoWaitMiss;
  /* 0x0100 */ unsigned long CcCopyReadWaitMiss;
  /* 0x0104 */ unsigned long CcMdlReadNoWait;
  /* 0x0108 */ unsigned long CcMdlReadWait;
  /* 0x010c */ unsigned long CcMdlReadNoWaitMiss;
  /* 0x0110 */ unsigned long CcMdlReadWaitMiss;
  /* 0x0114 */ unsigned long CcReadAheadIos;
  /* 0x0118 */ unsigned long CcLazyWriteIos;
  /* 0x011c */ unsigned long CcLazyWritePages;
  /* 0x0120 */ unsigned long CcDataFlushes;
  /* 0x0124 */ unsigned long CcDataPages;
  /* 0x0128 */ unsigned long ContextSwitches;
  /* 0x012c */ unsigned long FirstLevelTbFills;
  /* 0x0130 */ unsigned long SecondLevelTbFills;
  /* 0x0134 */ unsigned long SystemCalls;
  /* 0x0138 */ unsigned __int64 CcTotalDirtyPages;
  /* 0x0140 */ unsigned __int64 CcDirtyPageThreshold;
  /* 0x0148 */ __int64 ResidentAvailablePages;
  /* 0x0150 */ unsigned __int64 SharedCommittedPages;
  /* 0x0158 */ unsigned __int64 MdlPagesAllocated;
  /* 0x0160 */ unsigned __int64 PfnDatabaseCommittedPages;
  /* 0x0168 */ unsigned __int64 SystemPageTableCommittedPages;
  /* 0x0170 */ unsigned __int64 ContiguousPagesAllocated;
} SYSTEM_PERFORMANCE_INFORMATION, *PSYSTEM_PERFORMANCE_INFORMATION; /* size: 0x0178 */

