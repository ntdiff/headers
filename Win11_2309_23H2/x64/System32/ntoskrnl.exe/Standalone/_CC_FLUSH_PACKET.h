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

typedef struct _CC_FLUSH_PACKET
{
  /* 0x0000 */ struct _CC_PARTITION* Partition;
  /* 0x0008 */ struct _PRIVATE_VOLUME_CACHEMAP* PrivateVolumeCacheMap;
  /* 0x0010 */ struct _SHARED_CACHE_MAP* SharedCacheMap;
  /* 0x0018 */ struct _SECTION_OBJECT_POINTERS* SectionObjectPointer;
  /* 0x0020 */ union _LARGE_INTEGER TargetOffset;
  /* 0x0028 */ union _LARGE_INTEGER NextFileOffset;
  /* 0x0030 */ unsigned long NextLength;
  /* 0x0034 */ unsigned long BytesWritten;
  /* 0x0038 */ unsigned long MmFlushFlags;
  /* 0x003c */ unsigned long HotSpot;
  /* 0x0040 */ unsigned long VerifyRequired;
  /* 0x0048 */ struct _KEVENT* FlushEvent;
  /* 0x0050 */ union _LARGE_INTEGER FlushLargestLsn;
  /* 0x0058 */ union _LARGE_INTEGER* LargestLsn;
  /* 0x0060 */ union _LARGE_INTEGER* CallersFileOffset;
  /* 0x0068 */ unsigned long CallersLength;
  /* 0x006c */ unsigned char MarkWritethrough;
  /* 0x0070 */ struct _IO_STATUS_BLOCK* CallersIoStatus;
  /* 0x0078 */ struct _BCB* FirstBcb;
  /* 0x0080 */ long FirstFailureStatus;
  /* 0x0084 */ unsigned char IsLazyWriter;
  /* 0x0085 */ unsigned char FastLazyWrite;
  /* 0x0086 */ unsigned char ForceFullFlush;
  /* 0x0087 */ unsigned char PerformedFlushForMemMapped;
  /* 0x0088 */ unsigned char TeardownFlagBeforeFlush;
  /* 0x0089 */ unsigned char ShouldRetryTeardown;
  /* 0x008a */ unsigned char FlushForImageSection;
  /* 0x008b */ unsigned char ForceSynchronousLazyWrite;
  /* 0x008c */ unsigned long AcquireForLazyWriteOutFlags;
  /* 0x0090 */ union _LARGE_INTEGER StartTick;
  /* 0x0098 */ union _LARGE_INTEGER EndTick;
  /* 0x00a0 */ struct _FSRTL_COMMON_FCB_HEADER* FsContext;
  /* 0x00a8 */ struct _WORK_QUEUE_ENTRY* WorkEntry;
  /* 0x00b0 */ struct _LIST_ENTRY* DeferredWritesList;
  /* 0x00b8 */ unsigned char* CoalescingState;
  /* 0x00c0 */ unsigned char DoSinglePassFlush;
  /* 0x00c1 */ unsigned char RecordedSinglePassStartOffset;
  /* 0x00c8 */ union _LARGE_INTEGER SinglePassStartOffset;
  /* 0x00d0 */ unsigned __int64 DirtyPagesAtStart;
  /* 0x00d8 */ unsigned __int64 TotalBytesWritten;
  /* 0x00e0 */ union _LARGE_INTEGER LwFlushStart;
  /* 0x00e8 */ union _LARGE_INTEGER LwFlushEnd;
  /* 0x00f0 */ unsigned long TotalPagesFlushed;
  /* 0x00f4 */ unsigned long PagesToWrite;
  /* 0x00f8 */ unsigned long RequeueToHeadCount;
  /* 0x0100 */ struct _WORK_QUEUE_ENTRY* WorkQueueEntry;
} CC_FLUSH_PACKET, *PCC_FLUSH_PACKET; /* size: 0x0108 */

