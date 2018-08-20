typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _SLIST_ENTRY
{
  /* 0x0000 */ struct _SLIST_ENTRY* Next;
  /* 0x0008 */ long __PADDING__[2];
} SLIST_ENTRY, *PSLIST_ENTRY; /* size: 0x0010 */

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
    /* 0x0000 */ struct _SLIST_ENTRY Link;
  }; /* size: 0x0010 */
  union
  {
    /* 0x0010 */ struct _HEAP_LFH_SUBSEGMENT_OWNER* Owner;
    /* 0x0010 */ union _HEAP_LFH_SUBSEGMENT_DELAY_FREE DelayFree;
  }; /* size: 0x0008 */
  /* 0x0018 */ struct _RTL_SRWLOCK CommitLock;
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
  /* 0x0027 */ unsigned char Spare;
  /* 0x0028 */ struct _HEAP_LFH_SUBSEGMENT_ENCODED_OFFSETS BlockOffsets;
  /* 0x002c */ unsigned char CommitUnitShift;
  /* 0x002d */ unsigned char CommitUnitCount;
  /* 0x002e */ unsigned short CommitStateOffset;
  /* 0x0030 */ unsigned __int64 BlockBitmap[1];
  /* 0x0038 */ long __PADDING__[2];
} HEAP_LFH_SUBSEGMENT, *PHEAP_LFH_SUBSEGMENT; /* size: 0x0040 */

