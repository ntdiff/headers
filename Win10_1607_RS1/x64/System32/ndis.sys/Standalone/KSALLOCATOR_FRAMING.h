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

struct KSALLOCATOR_FRAMING
{
  union
  {
    /* 0x0000 */ unsigned long OptionsFlags;
    /* 0x0000 */ unsigned long RequirementsFlags;
  }; /* size: 0x0004 */
  /* 0x0004 */ enum _POOL_TYPE PoolType;
  /* 0x0008 */ unsigned long Frames;
  /* 0x000c */ unsigned long FrameSize;
  union
  {
    /* 0x0010 */ unsigned long FileAlignment;
    /* 0x0010 */ long FramePitch;
  }; /* size: 0x0004 */
  /* 0x0014 */ unsigned long Reserved;
}; /* size: 0x0018 */

