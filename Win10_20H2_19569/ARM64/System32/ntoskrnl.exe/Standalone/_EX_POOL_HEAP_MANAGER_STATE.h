typedef struct _RTL_CSPARSE_BITMAP
{
  /* 0x0000 */ unsigned __int64* CommitBitmap;
  /* 0x0008 */ unsigned __int64* UserBitmap;
  /* 0x0010 */ unsigned __int64 BitCount;
  /* 0x0018 */ unsigned __int64 BitmapLock;
  /* 0x0020 */ unsigned __int64 DecommitPageIndex;
  /* 0x0028 */ unsigned __int64 RtlpCSparseBitmapWakeLock;
  /* 0x0030 */ unsigned char LockType;
  /* 0x0031 */ unsigned char AddressSpace;
  /* 0x0032 */ unsigned char MemType;
  /* 0x0033 */ unsigned char AllocAlignment;
  /* 0x0034 */ unsigned long CommitDirectoryMaxSize;
  /* 0x0038 */ unsigned __int64 CommitDirectory[1];
} RTL_CSPARSE_BITMAP, *PRTL_CSPARSE_BITMAP; /* size: 0x0040 */

typedef struct _RTLP_HP_ALLOC_TRACKER
{
  /* 0x0000 */ unsigned __int64 BaseAddress;
  union
  {
    /* 0x0008 */ struct _RTL_CSPARSE_BITMAP AllocTrackerBitmap;
    /* 0x0008 */ unsigned char AllocTrackerBitmapBuffer[72];
  }; /* size: 0x0048 */
} RTLP_HP_ALLOC_TRACKER, *PRTLP_HP_ALLOC_TRACKER; /* size: 0x0050 */

typedef enum _RTLP_HP_ADDRESS_SPACE_TYPE
{
  HeapAddressUser = 0,
  HeapAddressKernel = 1,
  HeapAddressSession = 2,
  HeapAddressSecure = 3,
  HeapAddressTypeMax = 4,
} RTLP_HP_ADDRESS_SPACE_TYPE, *PRTLP_HP_ADDRESS_SPACE_TYPE;

typedef struct _RTL_SPARSE_ARRAY
{
  /* 0x0000 */ unsigned __int64 ElementCount;
  /* 0x0008 */ unsigned long ElementSizeShift;
  /* 0x0010 */ struct _RTL_CSPARSE_BITMAP Bitmap;
} RTL_SPARSE_ARRAY, *PRTL_SPARSE_ARRAY; /* size: 0x0050 */

typedef struct _HEAP_VAMGR_VASPACE
{
  /* 0x0000 */ enum _RTLP_HP_ADDRESS_SPACE_TYPE AddressSpaceType;
  /* 0x0008 */ unsigned __int64 BaseAddress;
  union
  {
    /* 0x0010 */ struct _RTL_SPARSE_ARRAY VaRangeArray;
    /* 0x0010 */ unsigned char VaRangeArrayBuffer[2128];
  }; /* size: 0x0850 */
} HEAP_VAMGR_VASPACE, *PHEAP_VAMGR_VASPACE; /* size: 0x0860 */

typedef struct _RTL_RB_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
  union
  {
    /* 0x0008 */ unsigned char Encoded : 1; /* bit position: 0 */
    /* 0x0008 */ struct _RTL_BALANCED_NODE* Min;
  }; /* size: 0x0008 */
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0010 */

typedef struct _HEAP_VAMGR_ALLOCATOR
{
  /* 0x0000 */ unsigned __int64 TreeLock;
  /* 0x0008 */ struct _RTL_RB_TREE FreeRanges;
  /* 0x0018 */ struct _HEAP_VAMGR_VASPACE* VaSpace;
  /* 0x0020 */ void* PartitionHandle;
  /* 0x0028 */ unsigned short ChunksPerRegion;
  /* 0x002a */ unsigned short RefCount;
  /* 0x002c */ unsigned char AllocatorIndex;
  /* 0x002d */ unsigned char NumaNode;
  struct /* bitfield */
  {
    /* 0x002e */ unsigned char LockType : 1; /* bit position: 0 */
    /* 0x002e */ unsigned char MemoryType : 2; /* bit position: 1 */
    /* 0x002e */ unsigned char ConstrainedVA : 1; /* bit position: 3 */
    /* 0x002e */ unsigned char AllowFreeHead : 1; /* bit position: 4 */
    /* 0x002e */ unsigned char Spare0 : 3; /* bit position: 5 */
  }; /* bitfield */
  /* 0x002f */ unsigned char Spare1;
} HEAP_VAMGR_ALLOCATOR, *PHEAP_VAMGR_ALLOCATOR; /* size: 0x0030 */

typedef struct _HEAP_VAMGR_CTX
{
  /* 0x0000 */ struct _HEAP_VAMGR_VASPACE VaSpace;
  /* 0x0860 */ unsigned __int64 AllocatorLock;
  /* 0x0868 */ unsigned long AllocatorCount;
  /* 0x0870 */ struct _HEAP_VAMGR_ALLOCATOR Allocators[255];
} HEAP_VAMGR_CTX, *PHEAP_VAMGR_CTX; /* size: 0x3840 */

typedef union _RTL_RUN_ONCE
{
  union
  {
    /* 0x0000 */ void* Ptr;
    /* 0x0000 */ unsigned __int64 Value;
    /* 0x0000 */ unsigned __int64 State : 2; /* bit position: 0 */
  }; /* size: 0x0008 */
} RTL_RUN_ONCE, *PRTL_RUN_ONCE; /* size: 0x0008 */

typedef struct _RTLP_HP_METADATA_HEAP_CTX
{
  /* 0x0000 */ struct _SEGMENT_HEAP* Heap;
  /* 0x0008 */ union _RTL_RUN_ONCE InitOnce;
} RTLP_HP_METADATA_HEAP_CTX, *PRTLP_HP_METADATA_HEAP_CTX; /* size: 0x0010 */

typedef struct _RTL_HP_LFH_CONFIG
{
  /* 0x0000 */ unsigned short MaxBlockSize;
  struct /* bitfield */
  {
    /* 0x0002 */ unsigned short WitholdPageCrossingBlocks : 1; /* bit position: 0 */
    /* 0x0002 */ unsigned short DisableRandomization : 1; /* bit position: 1 */
  }; /* bitfield */
} RTL_HP_LFH_CONFIG, *PRTL_HP_LFH_CONFIG; /* size: 0x0004 */

typedef struct _RTL_HP_VS_CONFIG
{
  struct
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long PageAlignLargeAllocs : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long FullDecommit : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long EnableDelayFree : 1; /* bit position: 2 */
    }; /* bitfield */
  } /* size: 0x0004 */ Flags;
} RTL_HP_VS_CONFIG, *PRTL_HP_VS_CONFIG; /* size: 0x0004 */

typedef struct _RTL_HP_SUB_ALLOCATOR_CONFIGS
{
  /* 0x0000 */ struct _RTL_HP_LFH_CONFIG LfhConfigs;
  /* 0x0004 */ struct _RTL_HP_VS_CONFIG VsConfigs;
} RTL_HP_SUB_ALLOCATOR_CONFIGS, *PRTL_HP_SUB_ALLOCATOR_CONFIGS; /* size: 0x0008 */

typedef struct _RTLP_HP_HEAP_MANAGER
{
  /* 0x0000 */ struct _RTLP_HP_HEAP_GLOBALS* Globals;
  /* 0x0008 */ struct _RTLP_HP_ALLOC_TRACKER AllocTracker;
  /* 0x0058 */ struct _HEAP_VAMGR_CTX VaMgr;
  /* 0x3898 */ struct _RTLP_HP_METADATA_HEAP_CTX MetadataHeaps[3];
  /* 0x38c8 */ struct _RTL_HP_SUB_ALLOCATOR_CONFIGS SubAllocConfigs;
} RTLP_HP_HEAP_MANAGER, *PRTLP_HP_HEAP_MANAGER; /* size: 0x38d0 */

typedef union _SLIST_HEADER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned __int64 Alignment;
      /* 0x0008 */ unsigned __int64 Region;
    }; /* size: 0x0010 */
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Depth : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 Sequence : 48; /* bit position: 16 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 Reserved : 4; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 NextEntry : 60; /* bit position: 4 */
      }; /* bitfield */
    } /* size: 0x0010 */ HeaderArm64;
  }; /* size: 0x0010 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0010 */

typedef struct _RTL_LOOKASIDE
{
  /* 0x0000 */ union _SLIST_HEADER ListHead;
  /* 0x0010 */ unsigned short Depth;
  /* 0x0012 */ unsigned short MaximumDepth;
  /* 0x0014 */ unsigned long TotalAllocates;
  /* 0x0018 */ unsigned long AllocateMisses;
  /* 0x001c */ unsigned long TotalFrees;
  /* 0x0020 */ unsigned long FreeMisses;
  /* 0x0024 */ unsigned long LastTotalAllocates;
  /* 0x0028 */ unsigned long LastAllocateMisses;
  /* 0x002c */ unsigned long LastTotalFrees;
  /* 0x0030 */ long __PADDING__[4];
} RTL_LOOKASIDE, *PRTL_LOOKASIDE; /* size: 0x0040 */

typedef struct _RTL_DYNAMIC_LOOKASIDE
{
  /* 0x0000 */ unsigned __int64 EnabledBucketBitmap;
  /* 0x0008 */ unsigned long BucketCount;
  /* 0x000c */ unsigned long ActiveBucketCount;
  /* 0x0040 */ struct _RTL_LOOKASIDE Buckets[64];
} RTL_DYNAMIC_LOOKASIDE, *PRTL_DYNAMIC_LOOKASIDE; /* size: 0x1040 */

typedef struct _EX_HEAP_POOL_NODE
{
  /* 0x0000 */ struct _SEGMENT_HEAP* Heaps[4];
  /* 0x0040 */ struct _RTL_DYNAMIC_LOOKASIDE Lookasides[2];
} EX_HEAP_POOL_NODE, *PEX_HEAP_POOL_NODE; /* size: 0x20c0 */

typedef struct _EX_POOL_HEAP_MANAGER_STATE
{
  /* 0x0000 */ struct _RTLP_HP_HEAP_MANAGER HeapManager;
  /* 0x38d0 */ unsigned long NumberOfPools;
  /* 0x3900 */ struct _EX_HEAP_POOL_NODE PoolNode[64];
  /* 0x86900 */ struct _SEGMENT_HEAP* SpecialHeaps[4];
  /* 0x86920 */ long __PADDING__[8];
} EX_POOL_HEAP_MANAGER_STATE, *PEX_POOL_HEAP_MANAGER_STATE; /* size: 0x86940 */

