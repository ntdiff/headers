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

typedef struct _HEAP_SUBSEGMENT
{
  /* 0x0000 */ struct _HEAP_LOCAL_SEGMENT_INFO* LocalInfo;
  /* 0x0004 */ struct _HEAP_USERDATA_HEADER* UserBlocks;
  /* 0x0008 */ union _SLIST_HEADER DelayFreeList;
  /* 0x0010 */ volatile struct _INTERLOCK_SEQ AggregateExchg;
  union
  {
    struct
    {
      /* 0x0014 */ volatile unsigned short BlockSize;
      /* 0x0016 */ unsigned short Flags;
      /* 0x0018 */ unsigned short BlockCount;
      /* 0x001a */ unsigned char SizeIndex;
      /* 0x001b */ unsigned char AffinityIndex;
    }; /* size: 0x0008 */
    /* 0x0014 */ unsigned long Alignment[2];
  }; /* size: 0x0008 */
  /* 0x001c */ volatile unsigned long Lock;
  /* 0x0020 */ struct _SINGLE_LIST_ENTRY SFreeListEntry;
  /* 0x0024 */ long __PADDING__[1];
} HEAP_SUBSEGMENT, *PHEAP_SUBSEGMENT; /* size: 0x0028 */

