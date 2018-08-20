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
      /* 0x0000 */ unsigned long Count : 31; /* bit position: 0 */
      /* 0x0000 */ unsigned long DelayFree : 1; /* bit position: 31 */
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

typedef struct _HEAP_LFH_SUBSEGMENT
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  union
  {
    /* 0x0008 */ struct _HEAP_LFH_SUBSEGMENT_OWNER* Owner;
    /* 0x0008 */ union _HEAP_LFH_SUBSEGMENT_DELAY_FREE DelayFree;
  }; /* size: 0x0004 */
  /* 0x000c */ struct _RTL_SRWLOCK BitmapLock;
  /* 0x0010 */ struct _RTL_SRWLOCK CommitLock;
  union
  {
    struct
    {
      /* 0x0014 */ unsigned short FreeCount;
      /* 0x0016 */ unsigned short BlockCount;
    }; /* size: 0x0004 */
    /* 0x0014 */ volatile short InterlockedShort;
    /* 0x0014 */ volatile long InterlockedLong;
  }; /* size: 0x0004 */
  /* 0x0018 */ unsigned short FreeHint;
  /* 0x001a */ unsigned short BlockSize;
  /* 0x001c */ unsigned long CommitBitmap;
  /* 0x0020 */ unsigned short FirstBlockOffset;
  /* 0x0022 */ unsigned char Location;
  /* 0x0023 */ volatile unsigned char DecommitInProgress;
  /* 0x0024 */ unsigned long AllocationBitmap[1];
} HEAP_LFH_SUBSEGMENT, *PHEAP_LFH_SUBSEGMENT; /* size: 0x0028 */

