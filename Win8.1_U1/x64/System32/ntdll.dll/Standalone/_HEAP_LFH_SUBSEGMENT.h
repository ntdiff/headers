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
      /* 0x0000 */ unsigned __int64 Count : 63; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 DelayFree : 1; /* bit position: 63 */
    }; /* bitfield */
    /* 0x0000 */ void* AllBits;
  }; /* size: 0x0008 */
} HEAP_LFH_SUBSEGMENT_DELAY_FREE, *PHEAP_LFH_SUBSEGMENT_DELAY_FREE; /* size: 0x0008 */

typedef struct _RTL_SRWLOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 Shared : 60; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} RTL_SRWLOCK, *PRTL_SRWLOCK; /* size: 0x0008 */

typedef struct _HEAP_LFH_SUBSEGMENT
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  union
  {
    /* 0x0010 */ struct _HEAP_LFH_SUBSEGMENT_OWNER* Owner;
    /* 0x0010 */ union _HEAP_LFH_SUBSEGMENT_DELAY_FREE DelayFree;
  }; /* size: 0x0008 */
  /* 0x0018 */ struct _RTL_SRWLOCK BitmapLock;
  /* 0x0020 */ struct _RTL_SRWLOCK CommitLock;
  union
  {
    struct
    {
      /* 0x0028 */ unsigned short FreeCount;
      /* 0x002a */ unsigned short BlockCount;
    }; /* size: 0x0004 */
    /* 0x0028 */ volatile short InterlockedShort;
    /* 0x0028 */ volatile long InterlockedLong;
  }; /* size: 0x0004 */
  /* 0x002c */ unsigned short FreeHint;
  /* 0x002e */ unsigned short BlockSize;
  /* 0x0030 */ unsigned long CommitBitmap;
  /* 0x0034 */ unsigned short FirstBlockOffset;
  /* 0x0036 */ unsigned char Location;
  /* 0x0037 */ volatile unsigned char DecommitInProgress;
  /* 0x0038 */ unsigned __int64 AllocationBitmap[1];
} HEAP_LFH_SUBSEGMENT, *PHEAP_LFH_SUBSEGMENT; /* size: 0x0040 */

