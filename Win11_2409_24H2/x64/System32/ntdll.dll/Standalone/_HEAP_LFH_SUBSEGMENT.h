typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _HEAP_LFH_BLOCK_SLIST
{
  /* 0x0000 */ unsigned short Next;
} HEAP_LFH_BLOCK_SLIST, *PHEAP_LFH_BLOCK_SLIST; /* size: 0x0002 */

typedef union _HEAP_LFH_BLOCK_LIST
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short Next;
      /* 0x0002 */ unsigned short Count;
    }; /* size: 0x0004 */
    /* 0x0000 */ struct _HEAP_LFH_BLOCK_SLIST SList;
    /* 0x0000 */ unsigned long ListFields;
  }; /* size: 0x0004 */
} HEAP_LFH_BLOCK_LIST, *PHEAP_LFH_BLOCK_LIST; /* size: 0x0004 */

typedef union _HEAP_LFH_SUBSEGMENT_STATE
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short DelayFreeList;
      /* 0x0002 */ unsigned short DelayFreeCount;
      /* 0x0004 */ unsigned short Owner;
      /* 0x0006 */ unsigned char Location;
    }; /* size: 0x0007 */
    struct
    {
      /* 0x0000 */ long DelayFreeFields;
      /* 0x0004 */ long OwnerLocation;
    }; /* size: 0x0008 */
    /* 0x0000 */ union _HEAP_LFH_BLOCK_LIST FreeList;
    /* 0x0000 */ void* AllBits;
  }; /* size: 0x0008 */
} HEAP_LFH_SUBSEGMENT_STATE, *PHEAP_LFH_SUBSEGMENT_STATE; /* size: 0x0008 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

typedef union _HEAP_LFH_COMMIT_UNIT_INFO
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned char CommitUnitShift;
      /* 0x0001 */ unsigned char CommitUnitCount;
    }; /* size: 0x0002 */
    /* 0x0000 */ unsigned short UShort;
  }; /* size: 0x0002 */
} HEAP_LFH_COMMIT_UNIT_INFO, *PHEAP_LFH_COMMIT_UNIT_INFO; /* size: 0x0002 */

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

typedef union _HEAP_LFH_SUBSEGMENT_UCHAR_FIELDS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned char PrivateFormat : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned char Spare1 : 7; /* bit position: 1 */
    }; /* bitfield */
    /* 0x0000 */ unsigned char AllUCharBits;
  }; /* size: 0x0001 */
} HEAP_LFH_SUBSEGMENT_UCHAR_FIELDS, *PHEAP_LFH_SUBSEGMENT_UCHAR_FIELDS; /* size: 0x0001 */

typedef struct _HEAP_LFH_SUBSEGMENT
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0010 */ union _HEAP_LFH_SUBSEGMENT_STATE State;
  union
  {
    /* 0x0018 */ struct _SINGLE_LIST_ENTRY OwnerFreeListEntry;
    struct
    {
      /* 0x0018 */ unsigned char CommitStateOffset;
      /* 0x0019 */ unsigned char Spare0 : 4; /* bit position: 0 */
    }; /* size: 0x0002 */
  }; /* size: 0x0008 */
  /* 0x0020 */ unsigned short FreeCount;
  /* 0x0022 */ unsigned short BlockCount;
  /* 0x0024 */ unsigned char FreeHint;
  /* 0x0025 */ unsigned char WitheldBlockCount;
  union
  {
    struct
    {
      /* 0x0026 */ unsigned char CommitUnitShift;
      /* 0x0027 */ unsigned char CommitUnitCount;
    }; /* size: 0x0002 */
    /* 0x0026 */ union _HEAP_LFH_COMMIT_UNIT_INFO CommitUnitInfo;
  }; /* size: 0x0002 */
  /* 0x0028 */ struct _HEAP_LFH_SUBSEGMENT_ENCODED_OFFSETS BlockOffsets;
  /* 0x002c */ unsigned short BucketRef;
  /* 0x002e */ unsigned short PrivateSlotMapRef;
  /* 0x0030 */ unsigned short HighWatermarkBlockIndex;
  /* 0x0032 */ unsigned char BitmapSearchWidth;
  union
  {
    struct /* bitfield */
    {
      /* 0x0033 */ unsigned char PrivateFormat : 1; /* bit position: 0 */
      /* 0x0033 */ unsigned char Spare1 : 7; /* bit position: 1 */
    }; /* bitfield */
    /* 0x0033 */ union _HEAP_LFH_SUBSEGMENT_UCHAR_FIELDS UChar;
  }; /* size: 0x0001 */
  /* 0x0034 */ unsigned long Spare3;
  /* 0x0038 */ unsigned __int64 CommitLock;
  /* 0x0040 */ unsigned __int64 BlockBitmap[1];
} HEAP_LFH_SUBSEGMENT, *PHEAP_LFH_SUBSEGMENT; /* size: 0x0048 */

