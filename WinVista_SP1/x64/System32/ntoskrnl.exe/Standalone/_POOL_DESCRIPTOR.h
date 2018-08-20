typedef enum _POOL_TYPE
{
  NonPagedPool = 0,
  PagedPool = 1,
  NonPagedPoolMustSucceed = 2,
  DontUseThisType = 3,
  NonPagedPoolCacheAligned = 4,
  PagedPoolCacheAligned = 5,
  NonPagedPoolCacheAlignedMustS = 6,
  MaxPoolType = 7,
  NonPagedPoolSession = 32,
  PagedPoolSession = 33,
  NonPagedPoolMustSucceedSession = 34,
  DontUseThisTypeSession = 35,
  NonPagedPoolCacheAlignedSession = 36,
  PagedPoolCacheAlignedSession = 37,
  NonPagedPoolCacheAlignedMustSSession = 38,
} POOL_TYPE, *PPOOL_TYPE;

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _POOL_DESCRIPTOR
{
  /* 0x0000 */ enum _POOL_TYPE PoolType;
  /* 0x0004 */ unsigned long PoolIndex;
  /* 0x0008 */ volatile long RunningAllocs;
  /* 0x000c */ volatile long RunningDeAllocs;
  /* 0x0010 */ volatile long TotalPages;
  /* 0x0014 */ volatile long TotalBigPages;
  /* 0x0018 */ unsigned long Threshold;
  /* 0x0020 */ void* LockAddress;
  /* 0x0028 */ void** volatile PendingFrees;
  /* 0x0030 */ volatile long ThreadsProcessingDeferrals;
  /* 0x0034 */ volatile long PendingFreeDepth;
  /* 0x0038 */ volatile unsigned __int64 TotalBytes;
  /* 0x0040 */ unsigned __int64 Spare0;
  /* 0x0048 */ struct _LIST_ENTRY ListHeads[256];
} POOL_DESCRIPTOR, *PPOOL_DESCRIPTOR; /* size: 0x1048 */

