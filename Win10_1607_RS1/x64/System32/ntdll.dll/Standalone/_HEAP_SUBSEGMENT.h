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

typedef struct _INTERLOCK_SEQ
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short Depth;
      union
      {
        struct /* bitfield */
        {
          /* 0x0002 */ unsigned short Hint : 15; /* bit position: 0 */
          /* 0x0002 */ unsigned short Lock : 1; /* bit position: 15 */
        }; /* bitfield */
        /* 0x0002 */ unsigned short Hint16;
      }; /* size: 0x0002 */
    }; /* size: 0x0004 */
    /* 0x0000 */ long Exchg;
  }; /* size: 0x0004 */
} INTERLOCK_SEQ, *PINTERLOCK_SEQ; /* size: 0x0004 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

typedef struct _HEAP_SUBSEGMENT
{
  /* 0x0000 */ struct _HEAP_LOCAL_SEGMENT_INFO* LocalInfo;
  /* 0x0008 */ struct _HEAP_USERDATA_HEADER* UserBlocks;
  /* 0x0010 */ union _SLIST_HEADER DelayFreeList;
  /* 0x0020 */ volatile struct _INTERLOCK_SEQ AggregateExchg;
  union
  {
    struct
    {
      /* 0x0024 */ volatile unsigned short BlockSize;
      /* 0x0026 */ unsigned short Flags;
      /* 0x0028 */ unsigned short BlockCount;
      /* 0x002a */ unsigned char SizeIndex;
      /* 0x002b */ unsigned char AffinityIndex;
    }; /* size: 0x0008 */
    /* 0x0024 */ unsigned long Alignment[2];
  }; /* size: 0x0008 */
  /* 0x002c */ volatile unsigned long Lock;
  /* 0x0030 */ struct _SINGLE_LIST_ENTRY SFreeListEntry;
  /* 0x0038 */ long __PADDING__[2];
} HEAP_SUBSEGMENT, *PHEAP_SUBSEGMENT; /* size: 0x0040 */

