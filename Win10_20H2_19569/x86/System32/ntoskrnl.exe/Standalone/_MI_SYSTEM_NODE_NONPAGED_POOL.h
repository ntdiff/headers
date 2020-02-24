typedef struct _MI_SYSTEM_NODE_NONPAGED_POOL
{
  /* 0x0000 */ unsigned long CachedNonPagedPoolCount;
  /* 0x0004 */ unsigned long NonPagedPoolSpinLock;
  /* 0x0008 */ struct _MMPFN* CachedNonPagedPool;
  /* 0x000c */ void* NonPagedPoolFirstVa;
  /* 0x0010 */ void* NonPagedPoolLastVa;
  /* 0x0014 */ struct _MI_SYSTEM_NODE_INFORMATION* SystemNodeInformation;
} MI_SYSTEM_NODE_NONPAGED_POOL, *PMI_SYSTEM_NODE_NONPAGED_POOL; /* size: 0x0018 */

