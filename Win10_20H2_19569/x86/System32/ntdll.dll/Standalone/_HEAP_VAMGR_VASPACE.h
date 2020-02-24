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

