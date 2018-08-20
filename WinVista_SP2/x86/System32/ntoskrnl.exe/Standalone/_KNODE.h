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
      /* 0x0006 */ unsigned short Sequence;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0008 */

typedef struct _flags
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char Removable : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned char Fill : 7; /* bit position: 1 */
  }; /* bitfield */
} flags, *Pflags; /* size: 0x0001 */

typedef struct _CACHED_KSTACK_LIST
{
  /* 0x0000 */ union _SLIST_HEADER SListHead;
  /* 0x0008 */ long MinimumFree;
  /* 0x000c */ unsigned long Misses;
  /* 0x0010 */ unsigned long MissesLast;
  /* 0x0014 */ long __PADDING__[1];
} CACHED_KSTACK_LIST, *PCACHED_KSTACK_LIST; /* size: 0x0018 */

typedef struct _KNODE
{
  /* 0x0000 */ union _SLIST_HEADER PagedPoolSListHead;
  /* 0x0008 */ union _SLIST_HEADER NonPagedPoolSListHead[3];
  /* 0x0020 */ union _SLIST_HEADER PfnDereferenceSListHead;
  /* 0x0028 */ unsigned long ProcessorMask;
  /* 0x002c */ unsigned char Color;
  /* 0x002d */ unsigned char Seed;
  /* 0x002e */ unsigned char NodeNumber;
  /* 0x002f */ struct _flags Flags;
  /* 0x0030 */ unsigned long MmShiftedColor;
  /* 0x0034 */ unsigned long FreeCount[2];
  /* 0x003c */ struct _SINGLE_LIST_ENTRY* volatile PfnDeferredList;
  /* 0x0040 */ struct _CACHED_KSTACK_LIST CachedKernelStacks;
  /* 0x0058 */ long __PADDING__[10];
} KNODE, *PKNODE; /* size: 0x0080 */

