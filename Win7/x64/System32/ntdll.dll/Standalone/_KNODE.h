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
        /* 0x0000 */ unsigned __int64 Sequence : 9; /* bit position: 16 */
        /* 0x0000 */ unsigned __int64 NextEntry : 39; /* bit position: 25 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 HeaderType : 1; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 Init : 1; /* bit position: 1 */
        /* 0x0008 */ unsigned __int64 Reserved : 59; /* bit position: 2 */
        /* 0x0008 */ unsigned __int64 Region : 3; /* bit position: 61 */
      }; /* bitfield */
    } /* size: 0x0010 */ Header8;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Depth : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 Sequence : 48; /* bit position: 16 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 HeaderType : 1; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 Init : 1; /* bit position: 1 */
        /* 0x0008 */ unsigned __int64 Reserved : 2; /* bit position: 2 */
        /* 0x0008 */ unsigned __int64 NextEntry : 60; /* bit position: 4 */
      }; /* bitfield */
    } /* size: 0x0010 */ Header16;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Depth : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 Sequence : 48; /* bit position: 16 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 HeaderType : 1; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 Reserved : 3; /* bit position: 1 */
        /* 0x0008 */ unsigned __int64 NextEntry : 60; /* bit position: 4 */
      }; /* bitfield */
    } /* size: 0x0010 */ HeaderX64;
  }; /* size: 0x0010 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0010 */

typedef struct _GROUP_AFFINITY
{
  /* 0x0000 */ unsigned __int64 Mask;
  /* 0x0008 */ unsigned short Group;
  /* 0x000a */ unsigned short Reserved[3];
} GROUP_AFFINITY, *PGROUP_AFFINITY; /* size: 0x0010 */

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
  /* 0x0010 */ long MinimumFree;
  /* 0x0014 */ unsigned long Misses;
  /* 0x0018 */ unsigned long MissesLast;
  /* 0x001c */ unsigned long Pad0;
} CACHED_KSTACK_LIST, *PCACHED_KSTACK_LIST; /* size: 0x0020 */

typedef struct _KNODE
{
  /* 0x0000 */ union _SLIST_HEADER PagedPoolSListHead;
  /* 0x0010 */ union _SLIST_HEADER NonPagedPoolSListHead[3];
  /* 0x0040 */ struct _GROUP_AFFINITY Affinity;
  /* 0x0050 */ unsigned long ProximityId;
  /* 0x0054 */ unsigned short NodeNumber;
  /* 0x0056 */ unsigned short PrimaryNodeNumber;
  /* 0x0058 */ unsigned char MaximumProcessors;
  /* 0x0059 */ unsigned char Color;
  /* 0x005a */ struct _flags Flags;
  /* 0x005b */ unsigned char NodePad0;
  /* 0x005c */ unsigned long Seed;
  /* 0x0060 */ unsigned long MmShiftedColor;
  /* 0x0068 */ volatile unsigned __int64 FreeCount[2];
  /* 0x0078 */ unsigned long Right;
  /* 0x007c */ unsigned long Left;
  /* 0x0080 */ struct _CACHED_KSTACK_LIST CachedKernelStacks;
  /* 0x00a0 */ long ParkLock;
  /* 0x00a4 */ unsigned long NodePad1;
  /* 0x00a8 */ long __PADDING__[6];
} KNODE, *PKNODE; /* size: 0x00c0 */

