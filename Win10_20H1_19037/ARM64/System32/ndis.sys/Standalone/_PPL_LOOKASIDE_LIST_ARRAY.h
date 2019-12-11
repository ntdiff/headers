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

typedef struct _PPL_LOOKASIDE_LIST_ARRAY
{
  /* 0x0000 */ unsigned long ValidEntryCount;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long Tag;
  /* 0x000c */ unsigned long LookasideTag;
  /* 0x0010 */ unsigned __int64 Size;
  /* 0x0018 */ enum _POOL_TYPE PoolType;
  /* 0x001c */ unsigned short Depth;
  /* 0x0020 */ struct _PPL_LOOKASIDE_LIST** LookasideLists;
  /* 0x0028 */ long __PADDING__[22];
} PPL_LOOKASIDE_LIST_ARRAY, *PPPL_LOOKASIDE_LIST_ARRAY; /* size: 0x0080 */

