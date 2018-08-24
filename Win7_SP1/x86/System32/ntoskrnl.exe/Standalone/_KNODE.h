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

typedef struct _GROUP_AFFINITY
{
  /* 0x0000 */ unsigned long Mask;
  /* 0x0004 */ unsigned short Group;
  /* 0x0006 */ unsigned short Reserved[3];
} GROUP_AFFINITY, *PGROUP_AFFINITY; /* size: 0x000c */

typedef struct _flags
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char Removable : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned char GroupAssigned : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned char GroupCommitted : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned char GroupAssignmentFixed : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned char Fill : 4; /* bit position: 4 */
  }; /* bitfield */
} flags, *Pflags; /* size: 0x0001 */

typedef struct _CACHED_KSTACK_LIST
{
  /* 0x0000 */ union _SLIST_HEADER SListHead;
  /* 0x0008 */ long MinimumFree;
  /* 0x000c */ unsigned long Misses;
  /* 0x0010 */ unsigned long MissesLast;
  /* 0x0014 */ unsigned long Pad0;
} CACHED_KSTACK_LIST, *PCACHED_KSTACK_LIST; /* size: 0x0018 */

typedef struct _KNODE
{
  /* 0x0000 */ union _SLIST_HEADER PagedPoolSListHead;
  /* 0x0008 */ union _SLIST_HEADER NonPagedPoolSListHead[3];
  /* 0x0020 */ struct _GROUP_AFFINITY Affinity;
  /* 0x002c */ unsigned long ProximityId;
  /* 0x0030 */ unsigned short NodeNumber;
  /* 0x0032 */ unsigned short PrimaryNodeNumber;
  /* 0x0034 */ unsigned char MaximumProcessors;
  /* 0x0035 */ unsigned char Color;
  /* 0x0036 */ struct _flags Flags;
  /* 0x0037 */ unsigned char NodePad0;
  /* 0x0038 */ unsigned long Seed;
  /* 0x003c */ unsigned long MmShiftedColor;
  /* 0x0040 */ volatile unsigned long FreeCount[2];
  /* 0x0048 */ struct _CACHED_KSTACK_LIST CachedKernelStacks;
  /* 0x0060 */ long ParkLock;
  /* 0x0064 */ unsigned long NodePad1;
  /* 0x0068 */ long __PADDING__[6];
} KNODE, *PKNODE; /* size: 0x0080 */

