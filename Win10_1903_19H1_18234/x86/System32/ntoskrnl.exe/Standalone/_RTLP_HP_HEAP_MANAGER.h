typedef struct _RTL_CSPARSE_BITMAP
{
  /* 0x0000 */ unsigned long CommitDirectory;
  /* 0x0004 */ unsigned long* CommitBitmap;
  /* 0x0008 */ unsigned long* UserBitmap;
  /* 0x000c */ long BitCount;
  /* 0x0010 */ unsigned long BitmapLock;
  /* 0x0014 */ unsigned long DecommitPageIndex;
  /* 0x0018 */ unsigned long RtlpCSparseBitmapWakeLock;
  /* 0x001c */ unsigned char LockType;
  /* 0x001d */ unsigned char AddressSpace;
  /* 0x001e */ unsigned char MemType;
  /* 0x001f */ unsigned char AllocAlignment;
} RTL_CSPARSE_BITMAP, *PRTL_CSPARSE_BITMAP; /* size: 0x0020 */

typedef struct _RTLP_HP_ALLOC_TRACKER
{
  /* 0x0000 */ struct _RTL_CSPARSE_BITMAP AllocTrackerBitmap;
  /* 0x0020 */ unsigned long BaseAddress;
} RTLP_HP_ALLOC_TRACKER, *PRTLP_HP_ALLOC_TRACKER; /* size: 0x0024 */

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
  /* 0x0020 */ unsigned long ElementCount;
  /* 0x0024 */ unsigned long ElementSizeShift;
} RTL_SPARSE_ARRAY, *PRTL_SPARSE_ARRAY; /* size: 0x0028 */

typedef struct _HEAP_VAMGR_VASPACE
{
  /* 0x0000 */ enum _RTLP_HP_ADDRESS_SPACE_TYPE AddressSpaceType;
  /* 0x0004 */ unsigned long BaseAddress;
  /* 0x0008 */ struct _RTL_SPARSE_ARRAY VaRangeArray;
} HEAP_VAMGR_VASPACE, *PHEAP_VAMGR_VASPACE; /* size: 0x0030 */

typedef struct _RTL_RB_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
  union
  {
    /* 0x0004 */ unsigned char Encoded : 1; /* bit position: 0 */
    /* 0x0004 */ struct _RTL_BALANCED_NODE* Min;
  }; /* size: 0x0004 */
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0008 */

typedef struct _HEAP_VAMGR_ALLOCATOR
{
  /* 0x0000 */ unsigned long TreeLock;
  /* 0x0004 */ struct _RTL_RB_TREE FreeRanges;
  /* 0x000c */ struct _HEAP_VAMGR_VASPACE* VaSpace;
  /* 0x0010 */ void* PartitionHandle;
  /* 0x0014 */ unsigned short ChunksPerRegion;
  /* 0x0016 */ unsigned short RefCount;
  /* 0x0018 */ unsigned char AllocatorIndex;
  /* 0x0019 */ unsigned char NumaNode;
  struct /* bitfield */
  {
    /* 0x001a */ unsigned char LockType : 1; /* bit position: 0 */
    /* 0x001a */ unsigned char MemoryType : 2; /* bit position: 1 */
    /* 0x001a */ unsigned char ConstrainedVA : 1; /* bit position: 3 */
    /* 0x001a */ unsigned char AllowFreeHead : 1; /* bit position: 4 */
    /* 0x001a */ unsigned char Spare0 : 3; /* bit position: 5 */
  }; /* bitfield */
  /* 0x001b */ unsigned char Spare1;
} HEAP_VAMGR_ALLOCATOR, *PHEAP_VAMGR_ALLOCATOR; /* size: 0x001c */

typedef struct _HEAP_VAMGR_CTX
{
  /* 0x0000 */ struct _HEAP_VAMGR_VASPACE VaSpace;
  /* 0x0030 */ unsigned long AllocatorLock;
  /* 0x0034 */ unsigned long AllocatorCount;
  /* 0x0038 */ struct _HEAP_VAMGR_ALLOCATOR Allocators[255];
} HEAP_VAMGR_CTX, *PHEAP_VAMGR_CTX; /* size: 0x1c1c */

typedef union _RTL_RUN_ONCE
{
  union
  {
    /* 0x0000 */ void* Ptr;
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ unsigned long State : 2; /* bit position: 0 */
  }; /* size: 0x0004 */
} RTL_RUN_ONCE, *PRTL_RUN_ONCE; /* size: 0x0004 */

typedef struct _RTLP_HP_METADATA_HEAP_CTX
{
  /* 0x0000 */ struct _SEGMENT_HEAP* Heap;
  /* 0x0004 */ union _RTL_RUN_ONCE InitOnce;
} RTLP_HP_METADATA_HEAP_CTX, *PRTLP_HP_METADATA_HEAP_CTX; /* size: 0x0008 */

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
  /* 0x0004 */ struct _RTLP_HP_ALLOC_TRACKER AllocTracker;
  /* 0x0028 */ struct _HEAP_VAMGR_CTX VaMgr;
  /* 0x1c44 */ struct _RTLP_HP_METADATA_HEAP_CTX MetadataHeaps[3];
  /* 0x1c5c */ struct _RTL_HP_SUB_ALLOCATOR_CONFIGS SubAllocConfigs;
} RTLP_HP_HEAP_MANAGER, *PRTLP_HP_HEAP_MANAGER; /* size: 0x1c64 */

