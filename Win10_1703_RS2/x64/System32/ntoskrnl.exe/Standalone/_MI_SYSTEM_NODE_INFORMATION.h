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
    } /* size: 0x0010 */ HeaderX64;
  }; /* size: 0x0010 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0010 */

typedef struct _CACHED_KSTACK_LIST
{
  /* 0x0000 */ union _SLIST_HEADER SListHead;
  /* 0x0010 */ long MinimumFree;
  /* 0x0014 */ unsigned long Misses;
  /* 0x0018 */ unsigned long MissesLast;
  /* 0x001c */ unsigned long AllStacksInUse;
} CACHED_KSTACK_LIST, *PCACHED_KSTACK_LIST; /* size: 0x0020 */

typedef struct _RTL_BITMAP_EX
{
  /* 0x0000 */ unsigned __int64 SizeOfBitMap;
  /* 0x0008 */ unsigned __int64* Buffer;
} RTL_BITMAP_EX, *PRTL_BITMAP_EX; /* size: 0x0010 */

typedef struct _MI_DYNAMIC_BITMAP
{
  /* 0x0000 */ struct _RTL_BITMAP_EX Bitmap;
  /* 0x0010 */ unsigned __int64 MaximumSize;
  /* 0x0018 */ unsigned __int64 Hint;
  /* 0x0020 */ void* BaseVa;
  /* 0x0028 */ unsigned __int64 SizeTopDown;
  /* 0x0030 */ unsigned __int64 HintTopDown;
  /* 0x0038 */ void* BaseVaTopDown;
  /* 0x0040 */ unsigned __int64 SpinLock;
} MI_DYNAMIC_BITMAP, *PMI_DYNAMIC_BITMAP; /* size: 0x0048 */

typedef struct _MI_SYSTEM_NODE_INFORMATION
{
  /* 0x0000 */ union _SLIST_HEADER PagedPoolSListHead;
  /* 0x0010 */ union _SLIST_HEADER NonPagedPoolSListHead[3];
  /* 0x0040 */ union _SLIST_HEADER NonPagedPoolSListHeadNx[3];
  /* 0x0070 */ struct _CACHED_KSTACK_LIST CachedKernelStacks[2];
  /* 0x00b0 */ unsigned __int64 NonPagedBitMapMaximum;
  /* 0x00b8 */ struct _MI_DYNAMIC_BITMAP DynamicBitMapNonPagedPool;
  /* 0x0100 */ unsigned __int64 NonPagedPoolLowestPage;
  /* 0x0108 */ unsigned __int64 NonPagedPoolHighestPage;
  /* 0x0110 */ unsigned __int64 AllocatedNonPagedPool;
  /* 0x0118 */ unsigned __int64 PartialLargePoolRegions;
  /* 0x0120 */ unsigned __int64 PagesInPartialLargePoolRegions;
  /* 0x0128 */ unsigned __int64 CachedNonPagedPoolCount;
  /* 0x0130 */ unsigned __int64 NonPagedPoolSpinLock;
  /* 0x0138 */ struct _MMPFN* CachedNonPagedPool;
  /* 0x0140 */ void* NonPagedPoolFirstVa;
  /* 0x0148 */ void* NonPagedPoolLastVa;
  /* 0x0150 */ struct _RTL_BITMAP_EX NonPagedBitMap[3];
  /* 0x0180 */ unsigned __int64 NonPagedHint[2];
} MI_SYSTEM_NODE_INFORMATION, *PMI_SYSTEM_NODE_INFORMATION; /* size: 0x0190 */

