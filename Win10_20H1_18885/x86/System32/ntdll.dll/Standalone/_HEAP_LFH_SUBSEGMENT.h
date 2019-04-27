typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef union _HEAP_LFH_SUBSEGMENT_DELAY_FREE
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long DelayFree : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Count : 31; /* bit position: 1 */
    }; /* bitfield */
    /* 0x0000 */ void* AllBits;
  }; /* size: 0x0004 */
} HEAP_LFH_SUBSEGMENT_DELAY_FREE, *PHEAP_LFH_SUBSEGMENT_DELAY_FREE; /* size: 0x0004 */

typedef struct _HEAP_LFH_SUBSEGMENT_ENCODED_OFFSETS
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short BlockSize;
      /* 0x0002 */ unsigned short FirstBlockOffset;
    }; /* size: 0x0004 */
    /* 0x0000 */ unsigned long EncodedData;
  }; /* size: 0x0004 */
} HEAP_LFH_SUBSEGMENT_ENCODED_OFFSETS, *PHEAP_LFH_SUBSEGMENT_ENCODED_OFFSETS; /* size: 0x0004 */

typedef struct _HEAP_LFH_SUBSEGMENT
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  union
  {
    /* 0x0008 */ struct _HEAP_LFH_SUBSEGMENT_OWNER* Owner;
    /* 0x0008 */ union _HEAP_LFH_SUBSEGMENT_DELAY_FREE DelayFree;
  }; /* size: 0x0004 */
  /* 0x000c */ unsigned long CommitLock;
  union
  {
    struct
    {
      /* 0x0010 */ unsigned short FreeCount;
      /* 0x0012 */ unsigned short BlockCount;
    }; /* size: 0x0004 */
    /* 0x0010 */ volatile short InterlockedShort;
    /* 0x0010 */ volatile long InterlockedLong;
  }; /* size: 0x0004 */
  /* 0x0014 */ unsigned short FreeHint;
  /* 0x0016 */ unsigned char Location;
  /* 0x0017 */ unsigned char WitheldBlockCount;
  /* 0x0018 */ struct _HEAP_LFH_SUBSEGMENT_ENCODED_OFFSETS BlockOffsets;
  /* 0x001c */ unsigned char CommitUnitShift;
  /* 0x001d */ unsigned char CommitUnitCount;
  /* 0x001e */ unsigned short CommitStateOffset;
  /* 0x0020 */ unsigned long BlockBitmap[1];
} HEAP_LFH_SUBSEGMENT, *PHEAP_LFH_SUBSEGMENT; /* size: 0x0024 */

