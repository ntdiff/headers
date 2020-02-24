typedef struct _RTL_CSPARSE_BITMAP
{
  /* 0x0000 */ unsigned long* CommitBitmap;
  /* 0x0004 */ unsigned long* UserBitmap;
  /* 0x0008 */ unsigned long BitCount;
  /* 0x000c */ unsigned long BitmapLock;
  /* 0x0010 */ unsigned long DecommitPageIndex;
  /* 0x0014 */ unsigned long RtlpCSparseBitmapWakeLock;
  /* 0x0018 */ unsigned char LockType;
  /* 0x0019 */ unsigned char AddressSpace;
  /* 0x001a */ unsigned char MemType;
  /* 0x001b */ unsigned char AllocAlignment;
  /* 0x001c */ unsigned long CommitDirectoryMaxSize;
  /* 0x0020 */ unsigned long CommitDirectory[1];
} RTL_CSPARSE_BITMAP, *PRTL_CSPARSE_BITMAP; /* size: 0x0024 */

typedef struct _RTLP_HP_ALLOC_TRACKER
{
  /* 0x0000 */ unsigned long BaseAddress;
  union
  {
    /* 0x0004 */ struct _RTL_CSPARSE_BITMAP AllocTrackerBitmap;
    /* 0x0004 */ unsigned char AllocTrackerBitmapBuffer[40];
  }; /* size: 0x0028 */
} RTLP_HP_ALLOC_TRACKER, *PRTLP_HP_ALLOC_TRACKER; /* size: 0x002c */

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
  /* 0x0000 */ unsigned long ElementCount;
  /* 0x0004 */ unsigned long ElementSizeShift;
  /* 0x0008 */ struct _RTL_CSPARSE_BITMAP Bitmap;
} RTL_SPARSE_ARRAY, *PRTL_SPARSE_ARRAY; /* size: 0x002c */

typedef struct _HEAP_VAMGR_VASPACE
{
  /* 0x0000 */ enum _RTLP_HP_ADDRESS_SPACE_TYPE AddressSpaceType;
  /* 0x0004 */ unsigned long BaseAddress;
  union
  {
    /* 0x0008 */ struct _RTL_SPARSE_ARRAY VaRangeArray;
    /* 0x0008 */ unsigned char VaRangeArrayBuffer[44];
  }; /* size: 0x002c */
} HEAP_VAMGR_VASPACE, *PHEAP_VAMGR_VASPACE; /* size: 0x0034 */

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
  /* 0x0034 */ unsigned long AllocatorLock;
  /* 0x0038 */ unsigned long AllocatorCount;
  /* 0x003c */ struct _HEAP_VAMGR_ALLOCATOR Allocators[255];
} HEAP_VAMGR_CTX, *PHEAP_VAMGR_CTX; /* size: 0x1c20 */

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
  /* 0x0004 */ struct _RTLP_HP_ALLOC_TRACKER AllocTracker;
  /* 0x0030 */ struct _HEAP_VAMGR_CTX VaMgr;
  /* 0x1c50 */ struct _RTLP_HP_METADATA_HEAP_CTX MetadataHeaps[3];
  /* 0x1c68 */ struct _RTL_HP_SUB_ALLOCATOR_CONFIGS SubAllocConfigs;
} RTLP_HP_HEAP_MANAGER, *PRTLP_HP_HEAP_MANAGER; /* size: 0x1c70 */

