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

typedef struct _MI_KSTACK_ALLOCATIONS
{
  /* 0x0000 */ unsigned long AllocationPeaks[4];
} MI_KSTACK_ALLOCATIONS, *PMI_KSTACK_ALLOCATIONS; /* size: 0x0010 */

typedef struct _CACHED_KSTACK_LIST
{
  /* 0x0000 */ union _SLIST_HEADER SListHead;
  /* 0x0010 */ struct _MI_KSTACK_ALLOCATIONS Counters;
  /* 0x0020 */ volatile unsigned long CurrentIndex;
  /* 0x0024 */ volatile unsigned long InUseAtOnce;
  /* 0x0028 */ unsigned long MinimumFree;
  /* 0x002c */ unsigned char NonIdealStacksPresent;
  /* 0x002d */ char __PADDING__[3];
} CACHED_KSTACK_LIST, *PCACHED_KSTACK_LIST; /* size: 0x0030 */

