typedef struct _INTERLOCK_SEQ
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short Depth;
      /* 0x0002 */ unsigned short FreeEntryOffset;
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ volatile unsigned long OffsetAndDepth;
      /* 0x0004 */ volatile unsigned long Sequence;
    }; /* size: 0x0008 */
    /* 0x0000 */ volatile __int64 Exchg;
  }; /* size: 0x0008 */
} INTERLOCK_SEQ, *PINTERLOCK_SEQ; /* size: 0x0008 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

typedef struct _HEAP_SUBSEGMENT
{
  /* 0x0000 */ struct _HEAP_LOCAL_SEGMENT_INFO* LocalInfo;
  /* 0x0008 */ volatile struct _HEAP_USERDATA_HEADER* UserBlocks;
  /* 0x0010 */ struct _INTERLOCK_SEQ AggregateExchg;
  union
  {
    struct
    {
      /* 0x0018 */ unsigned short BlockSize;
      /* 0x001a */ unsigned short Flags;
      /* 0x001c */ unsigned short BlockCount;
      /* 0x001e */ unsigned char SizeIndex;
      /* 0x001f */ unsigned char AffinityIndex;
    }; /* size: 0x0008 */
    /* 0x0018 */ unsigned long Alignment[2];
  }; /* size: 0x0008 */
  /* 0x0020 */ struct _SINGLE_LIST_ENTRY SFreeListEntry;
  /* 0x0028 */ volatile unsigned long Lock;
  /* 0x002c */ long __PADDING__[1];
} HEAP_SUBSEGMENT, *PHEAP_SUBSEGMENT; /* size: 0x0030 */

