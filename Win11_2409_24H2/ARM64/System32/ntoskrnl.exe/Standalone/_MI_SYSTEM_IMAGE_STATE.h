typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 Shared : 60; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0008 */

typedef struct _RTL_BITMAP_EX
{
  /* 0x0000 */ unsigned __int64 SizeOfBitMap;
  /* 0x0008 */ unsigned __int64* Buffer;
} RTL_BITMAP_EX, *PRTL_BITMAP_EX; /* size: 0x0010 */

typedef struct _MM_SYSTEM_PAGE_COUNTS
{
  /* 0x0000 */ volatile unsigned long SystemCodePage;
  /* 0x0004 */ volatile unsigned long SystemDriverPage;
  /* 0x0008 */ volatile long TotalSystemCodePages;
  /* 0x000c */ volatile long TotalSystemDriverPages;
} MM_SYSTEM_PAGE_COUNTS, *PMM_SYSTEM_PAGE_COUNTS; /* size: 0x0010 */

typedef struct _RTL_AVL_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
} RTL_AVL_TREE, *PRTL_AVL_TREE; /* size: 0x0008 */

typedef struct _MI_CACHE_LINE
{
  union
  {
    struct
    {
      /* 0x0000 */ void* UniqueCacheLine[8];
      /* 0x0040 */ long __PADDING__[16];
    } /* size: 0x0080 */ u1;
    struct
    {
      struct
      {
        /* 0x0000 */ struct _LIST_ENTRY Links;
        /* 0x0010 */ volatile unsigned long Signaled;
        /* 0x0014 */ long __PADDING__[1];
      } /* size: 0x0018 */ u2;
      /* 0x0018 */ long __PADDING__[26];
    }; /* size: 0x0080 */
  }; /* size: 0x0080 */
} MI_CACHE_LINE, *PMI_CACHE_LINE; /* size: 0x0080 */

typedef struct _MI_WORKING_SET_LOCK_ARRAY
{
  union
  {
    /* 0x0000 */ volatile long Lock;
    /* 0x0000 */ struct _MI_CACHE_LINE CacheLinePadding;
  }; /* size: 0x0080 */
} MI_WORKING_SET_LOCK_ARRAY, *PMI_WORKING_SET_LOCK_ARRAY; /* size: 0x0080 */

typedef struct _RTL_FUNCTION_OVERRIDE_CAPABILITIES
{
  /* 0x0000 */ unsigned char AMD64Capabilities[41];
  /* 0x0029 */ unsigned char ARM64Capabilities[8];
  /* 0x0031 */ unsigned char ARM64KernelCapabilities[8];
} RTL_FUNCTION_OVERRIDE_CAPABILITIES, *PRTL_FUNCTION_OVERRIDE_CAPABILITIES; /* size: 0x0039 */

typedef struct _MI_SYSTEM_IMAGE_STATE
{
  /* 0x0000 */ struct _LIST_ENTRY FixupList;
  /* 0x0010 */ struct _ETHREAD* LoadLockOwner;
  /* 0x0018 */ unsigned long LoadLockCount;
  /* 0x001c */ volatile long FixupLock;
  /* 0x0020 */ struct _EX_PUSH_LOCK EncodeDecodeLock;
  /* 0x0028 */ unsigned long EncodeDecodeDepth;
  /* 0x002c */ unsigned char FirstLoadEver;
  /* 0x002d */ unsigned char SystemImagesLoaded;
  /* 0x0030 */ struct _LIST_ENTRY StrongCodeLoadFailureList;
  /* 0x0040 */ struct _KLDR_DATA_TABLE_ENTRY* SystemBase[1];
  /* 0x0048 */ struct _RTL_BITMAP_EX BaseImageDiscardedBitmaps[1];
  /* 0x0058 */ struct _EX_PUSH_LOCK MappingRangesPushLock;
  /* 0x0060 */ struct _MI_DRIVER_VA* MappingRanges;
  /* 0x0068 */ struct _MM_SYSTEM_PAGE_COUNTS PageCounts;
  /* 0x0078 */ struct _EX_PUSH_LOCK CollidedLock;
  /* 0x0080 */ struct _RTL_AVL_TREE ImageTree;
  /* 0x0088 */ struct _LIST_ENTRY LoadInProgress;
  /* 0x0098 */ unsigned __int64 ImportEntriesReplaced;
  /* 0x00a0 */ struct _EX_PUSH_LOCK SecurePteExclusionLock;
  /* 0x00a8 */ void* SecurePteExclusionBase;
  /* 0x00b0 */ void* SecurePteExclusionTop;
  /* 0x0100 */ struct _MI_WORKING_SET_LOCK_ARRAY WorkingSetLockArray[4];
  /* 0x0300 */ struct _RTL_FUNCTION_OVERRIDE_CAPABILITIES FunctionOverrideCapabilities;
  /* 0x0339 */ char __PADDING__[71];
} MI_SYSTEM_IMAGE_STATE, *PMI_SYSTEM_IMAGE_STATE; /* size: 0x0380 */

