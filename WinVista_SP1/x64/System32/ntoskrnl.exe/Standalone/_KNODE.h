typedef union _SLIST_HEADER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned __int64 Alignment;
      /* 0x0008 */ unsigned __int64 Region;
    }; /* size: 0x0010 */
    struct // _TAG_UNNAMED_26
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
    struct // _TAG_UNNAMED_27
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
  }; /* size: 0x0010 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0010 */

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
  /* 0x0010 */ long MinimumFree;
  /* 0x0014 */ unsigned long Misses;
  /* 0x0018 */ unsigned long MissesLast;
  /* 0x001c */ long __PADDING__[1];
} CACHED_KSTACK_LIST, *PCACHED_KSTACK_LIST; /* size: 0x0020 */

typedef struct _KNODE
{
  /* 0x0000 */ union _SLIST_HEADER PagedPoolSListHead;
  /* 0x0010 */ union _SLIST_HEADER NonPagedPoolSListHead[3];
  /* 0x0040 */ union _SLIST_HEADER PfnDereferenceSListHead;
  /* 0x0050 */ unsigned __int64 ProcessorMask;
  /* 0x0058 */ unsigned char Color;
  /* 0x0059 */ unsigned char Seed;
  /* 0x005a */ unsigned char NodeNumber;
  /* 0x005b */ struct _flags Flags;
  /* 0x005c */ unsigned long MmShiftedColor;
  /* 0x0060 */ unsigned __int64 FreeCount[2];
  /* 0x0070 */ struct _SLIST_ENTRY* volatile PfnDeferredList;
  /* 0x0078 */ unsigned long Right;
  /* 0x007c */ unsigned long Left;
  /* 0x0080 */ struct _CACHED_KSTACK_LIST CachedKernelStacks;
  /* 0x00a0 */ long __PADDING__[8];
} KNODE, *PKNODE; /* size: 0x00c0 */

