typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef union _HEAP_LFH_SUBSEGMENT_DELAY_FREE
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 DelayFree : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Count : 63; /* bit position: 1 */
    }; /* bitfield */
    /* 0x0000 */ void* AllBits;
  }; /* size: 0x0008 */
} HEAP_LFH_SUBSEGMENT_DELAY_FREE, *PHEAP_LFH_SUBSEGMENT_DELAY_FREE; /* size: 0x0008 */

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
    /* 0x0010 */ struct _HEAP_LFH_SUBSEGMENT_OWNER* Owner;
    /* 0x0010 */ union _HEAP_LFH_SUBSEGMENT_DELAY_FREE DelayFree;
  }; /* size: 0x0008 */
  /* 0x0018 */ unsigned __int64 CommitLock;
  union
  {
    struct
    {
      /* 0x0020 */ unsigned short FreeCount;
      /* 0x0022 */ unsigned short BlockCount;
    }; /* size: 0x0004 */
    /* 0x0020 */ volatile short InterlockedShort;
    /* 0x0020 */ volatile long InterlockedLong;
  }; /* size: 0x0004 */
  /* 0x0024 */ unsigned short FreeHint;
  /* 0x0026 */ unsigned char Location;
  /* 0x0027 */ unsigned char WitheldBlockCount;
  /* 0x0028 */ struct _HEAP_LFH_SUBSEGMENT_ENCODED_OFFSETS BlockOffsets;
  /* 0x002c */ unsigned char CommitUnitShift;
  /* 0x002d */ unsigned char CommitUnitCount;
  /* 0x002e */ unsigned short CommitStateOffset;
  /* 0x0030 */ unsigned __int64 BlockBitmap[1];
} HEAP_LFH_SUBSEGMENT, *PHEAP_LFH_SUBSEGMENT; /* size: 0x0038 */

