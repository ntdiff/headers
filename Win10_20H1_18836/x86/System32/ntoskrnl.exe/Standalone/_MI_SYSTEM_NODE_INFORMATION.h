typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef union _SLIST_HEADER
{
  union
  {
    /* 0x0000 */ unsigned __int64 Alignment;
    struct
    {
      /* 0x0000 */ struct _SINGLE_LIST_ENTRY Next;
      /* 0x0004 */ unsigned short Depth;
      /* 0x0006 */ unsigned short CpuId;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0008 */

typedef struct _CACHED_KSTACK_LIST
{
  /* 0x0000 */ union _SLIST_HEADER SListHead;
  /* 0x0008 */ long MinimumFree;
  /* 0x000c */ unsigned long Misses;
  /* 0x0010 */ unsigned long MissesLast;
  /* 0x0014 */ unsigned long AllStacksInUse;
} CACHED_KSTACK_LIST, *PCACHED_KSTACK_LIST; /* size: 0x0018 */

typedef struct _MI_SYSTEM_NODE_INFORMATION
{
  /* 0x0000 */ struct _CACHED_KSTACK_LIST CachedKernelStacks[2];
  /* 0x0030 */ unsigned long CachedNonPagedPoolCount;
  /* 0x0034 */ unsigned long NonPagedPoolSpinLock;
  /* 0x0038 */ struct _MMPFN* CachedNonPagedPool;
  /* 0x003c */ void* NonPagedPoolFirstVa;
  /* 0x0040 */ void* NonPagedPoolLastVa;
  /* 0x0044 */ long __PADDING__[1];
} MI_SYSTEM_NODE_INFORMATION, *PMI_SYSTEM_NODE_INFORMATION; /* size: 0x0048 */

