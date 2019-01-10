typedef struct _RTL_CSPARSE_BITMAP
{
  /* 0x0000 */ unsigned __int64 CommitDirectory;
  /* 0x0008 */ unsigned __int64* CommitBitmap;
  /* 0x0010 */ unsigned __int64* UserBitmap;
  /* 0x0018 */ __int64 BitCount;
  /* 0x0020 */ unsigned __int64 BitmapLock;
  /* 0x0028 */ unsigned __int64 DecommitPageIndex;
  /* 0x0030 */ unsigned __int64 RtlpCSparseBitmapWakeLock;
  /* 0x0038 */ unsigned char LockType;
  /* 0x0039 */ unsigned char AddressSpace;
  /* 0x003a */ unsigned char MemType;
  /* 0x003b */ unsigned char AllocAlignment;
  /* 0x003c */ long __PADDING__[1];
} RTL_CSPARSE_BITMAP, *PRTL_CSPARSE_BITMAP; /* size: 0x0040 */

typedef struct _RTLP_HP_ALLOC_TRACKER
{
  /* 0x0000 */ struct _RTL_CSPARSE_BITMAP AllocTrackerBitmap;
  /* 0x0040 */ unsigned __int64 BaseAddress;
} RTLP_HP_ALLOC_TRACKER, *PRTLP_HP_ALLOC_TRACKER; /* size: 0x0048 */

typedef enum _RTLP_HP_ADDRESS_SPACE_TYPE
{
  HeapAddressUser = 0,
  HeapAddressKernel = 1,
  HeapAddressSession = 2,
  HeapAddressTypeMax = 3,
} RTLP_HP_ADDRESS_SPACE_TYPE, *PRTLP_HP_ADDRESS_SPACE_TYPE;

typedef struct _RTL_SPARSE_ARRAY
{
  /* 0x0000 */ struct _RTL_CSPARSE_BITMAP Bitmap;
  /* 0x0040 */ unsigned __int64 ElementCount;
  /* 0x0048 */ unsigned long ElementSizeShift;
  /* 0x004c */ long __PADDING__[1];
} RTL_SPARSE_ARRAY, *PRTL_SPARSE_ARRAY; /* size: 0x0050 */

typedef struct _HEAP_VAMGR_VASPACE
{
  /* 0x0000 */ enum _RTLP_HP_ADDRESS_SPACE_TYPE AddressSpaceType;
  /* 0x0008 */ unsigned __int64 BaseAddress;
  /* 0x0010 */ struct _RTL_SPARSE_ARRAY VaRangeArray;
} HEAP_VAMGR_VASPACE, *PHEAP_VAMGR_VASPACE; /* size: 0x0060 */

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
  /* 0x0060 */ unsigned __int64 AllocatorLock;
  /* 0x0068 */ unsigned long AllocatorCount;
  /* 0x0070 */ struct _HEAP_VAMGR_ALLOCATOR Allocators[255];
} HEAP_VAMGR_CTX, *PHEAP_VAMGR_CTX; /* size: 0x3040 */

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
  /* 0x0002 */ unsigned short MaxSubsegmentPages;
} RTL_HP_LFH_CONFIG, *PRTL_HP_LFH_CONFIG; /* size: 0x0004 */

typedef struct _RTL_HP_VS_CONFIG
{
  struct
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long PageAlignLargeAllocs : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long FullDecommit : 1; /* bit position: 1 */
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
  /* 0x0050 */ struct _HEAP_VAMGR_CTX VaMgr;
  /* 0x3090 */ struct _RTLP_HP_METADATA_HEAP_CTX MetadataHeaps[3];
  /* 0x30c0 */ struct _RTL_HP_SUB_ALLOCATOR_CONFIGS SubAllocConfigs;
} RTLP_HP_HEAP_MANAGER, *PRTLP_HP_HEAP_MANAGER; /* size: 0x30c8 */

