typedef enum _POOL_TYPE
{
  NonPagedPool = 0,
  NonPagedPoolExecute = 0,
  PagedPool = 1,
  NonPagedPoolMustSucceed = 2,
  DontUseThisType = 3,
  NonPagedPoolCacheAligned = 4,
  PagedPoolCacheAligned = 5,
  NonPagedPoolCacheAlignedMustS = 6,
  MaxPoolType = 7,
  NonPagedPoolBase = 0,
  NonPagedPoolBaseMustSucceed = 2,
  NonPagedPoolBaseCacheAligned = 4,
  NonPagedPoolBaseCacheAlignedMustS = 6,
  NonPagedPoolSession = 32,
  PagedPoolSession = 33,
  NonPagedPoolMustSucceedSession = 34,
  DontUseThisTypeSession = 35,
  NonPagedPoolCacheAlignedSession = 36,
  PagedPoolCacheAlignedSession = 37,
  NonPagedPoolCacheAlignedMustSSession = 38,
  NonPagedPoolNx = 512,
  NonPagedPoolNxCacheAligned = 516,
  NonPagedPoolSessionNx = 544,
} POOL_TYPE, *PPOOL_TYPE;

typedef struct _POOL_DESCRIPTOR
{
  /* 0x0000 */ enum _POOL_TYPE PoolType;
  /* 0x0040 */ volatile long RunningAllocs;
  /* 0x0044 */ volatile unsigned long PagesAllocated;
  /* 0x0048 */ volatile unsigned long BigPagesAllocated;
  /* 0x004c */ volatile unsigned long BytesAllocated;
  /* 0x0080 */ volatile long RunningDeallocs;
  /* 0x0084 */ volatile unsigned long PagesDeallocated;
  /* 0x0088 */ volatile unsigned long BigPagesDeallocated;
  /* 0x008c */ volatile unsigned long BytesDeallocated;
  /* 0x00c0 */ unsigned long PoolIndex;
  /* 0x00c4 */ long __PADDING__[15];
} POOL_DESCRIPTOR, *PPOOL_DESCRIPTOR; /* size: 0x0100 */

