typedef struct _HEAP_SUBALLOCATOR_CALLBACKS
{
  /* 0x0000 */ unsigned __int64 Allocate;
  /* 0x0008 */ unsigned __int64 Free;
  /* 0x0010 */ unsigned __int64 Commit;
  /* 0x0018 */ unsigned __int64 Decommit;
  /* 0x0020 */ unsigned __int64 ExtendContext;
} HEAP_SUBALLOCATOR_CALLBACKS, *PHEAP_SUBALLOCATOR_CALLBACKS; /* size: 0x0028 */

typedef struct _RTL_HP_LFH_CONFIG
{
  /* 0x0000 */ unsigned short MaxBlockSize;
  struct /* bitfield */
  {
    /* 0x0002 */ unsigned short WitholdPageCrossingBlocks : 1; /* bit position: 0 */
    /* 0x0002 */ unsigned short DisableRandomization : 1; /* bit position: 1 */
  }; /* bitfield */
} RTL_HP_LFH_CONFIG, *PRTL_HP_LFH_CONFIG; /* size: 0x0004 */

typedef struct _HEAP_LFH_SUBSEGMENT_STAT
{
  /* 0x0000 */ unsigned char Index;
  /* 0x0001 */ unsigned char Count;
} HEAP_LFH_SUBSEGMENT_STAT, *PHEAP_LFH_SUBSEGMENT_STAT; /* size: 0x0002 */

typedef union _HEAP_LFH_SUBSEGMENT_STATS
{
  union
  {
    /* 0x0000 */ struct _HEAP_LFH_SUBSEGMENT_STAT Buckets[4];
    /* 0x0000 */ void* AllStats;
  }; /* size: 0x0008 */
} HEAP_LFH_SUBSEGMENT_STATS, *PHEAP_LFH_SUBSEGMENT_STATS; /* size: 0x0008 */

typedef struct _HEAP_LFH_CONTEXT
{
  /* 0x0000 */ void* BackendCtx;
  /* 0x0008 */ struct _HEAP_SUBALLOCATOR_CALLBACKS Callbacks;
  /* 0x0030 */ const unsigned char* AffinityModArray;
  /* 0x0038 */ unsigned char MaxAffinity;
  /* 0x0039 */ unsigned char LockType;
  /* 0x003a */ short MemStatsOffset;
  /* 0x003c */ struct _RTL_HP_LFH_CONFIG Config;
  /* 0x0040 */ union _HEAP_LFH_SUBSEGMENT_STATS BucketStats;
  /* 0x0048 */ unsigned __int64 SubsegmentCreationLock;
  /* 0x0080 */ struct _HEAP_LFH_BUCKET* Buckets[129];
  /* 0x0488 */ long __PADDING__[14];
} HEAP_LFH_CONTEXT, *PHEAP_LFH_CONTEXT; /* size: 0x04c0 */

