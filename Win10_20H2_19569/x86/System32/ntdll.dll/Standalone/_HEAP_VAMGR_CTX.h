typedef enum _RTLP_HP_ADDRESS_SPACE_TYPE
{
  HeapAddressUser = 0,
  HeapAddressKernel = 1,
  HeapAddressSession = 2,
  HeapAddressSecure = 3,
  HeapAddressTypeMax = 4,
} RTLP_HP_ADDRESS_SPACE_TYPE, *PRTLP_HP_ADDRESS_SPACE_TYPE;

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

