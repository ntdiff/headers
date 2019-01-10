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
  /* 0x0000 */ struct _CACHED_KSTACK_LIST CachedKernelStacks[2];
  /* 0x0040 */ struct _MI_DYNAMIC_BITMAP DynamicBitMapNonPagedPool;
  /* 0x0088 */ unsigned __int64 CachedNonPagedPoolCount;
  /* 0x0090 */ unsigned __int64 NonPagedPoolSpinLock;
  /* 0x0098 */ struct _MMPFN* CachedNonPagedPool;
  /* 0x00a0 */ void* NonPagedPoolFirstVa;
  /* 0x00a8 */ void* NonPagedPoolLastVa;
} MI_SYSTEM_NODE_INFORMATION, *PMI_SYSTEM_NODE_INFORMATION; /* size: 0x00b0 */

