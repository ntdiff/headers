typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

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

typedef struct _RTL_SRWLOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long Shared : 28; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} RTL_SRWLOCK, *PRTL_SRWLOCK; /* size: 0x0004 */

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
  union
  {
    /* 0x0000 */ struct _LIST_ENTRY ListEntry;
    /* 0x0000 */ struct _SINGLE_LIST_ENTRY Link;
  }; /* size: 0x0008 */
  union
  {
    /* 0x0008 */ struct _HEAP_LFH_SUBSEGMENT_OWNER* Owner;
    /* 0x0008 */ union _HEAP_LFH_SUBSEGMENT_DELAY_FREE DelayFree;
  }; /* size: 0x0004 */
  /* 0x000c */ struct _RTL_SRWLOCK CommitLock;
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
  /* 0x0017 */ unsigned char Spare;
  /* 0x0018 */ struct _HEAP_LFH_SUBSEGMENT_ENCODED_OFFSETS BlockOffsets;
  /* 0x001c */ unsigned char CommitUnitShift;
  /* 0x001d */ unsigned char CommitUnitCount;
  /* 0x001e */ unsigned short CommitStateOffset;
  /* 0x0020 */ unsigned long BlockBitmap[1];
} HEAP_LFH_SUBSEGMENT, *PHEAP_LFH_SUBSEGMENT; /* size: 0x0024 */

