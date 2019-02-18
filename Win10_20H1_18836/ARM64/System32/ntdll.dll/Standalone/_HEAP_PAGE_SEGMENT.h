typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _RTL_BALANCED_NODE
{
  union
  {
    /* 0x0000 */ struct _RTL_BALANCED_NODE* Children[2];
    struct
    {
      /* 0x0000 */ struct _RTL_BALANCED_NODE* Left;
      /* 0x0008 */ struct _RTL_BALANCED_NODE* Right;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
  union
  {
    /* 0x0010 */ unsigned char Red : 1; /* bit position: 0 */
    /* 0x0010 */ unsigned char Balance : 2; /* bit position: 0 */
    /* 0x0010 */ unsigned __int64 ParentValue;
  }; /* size: 0x0008 */
} RTL_BALANCED_NODE, *PRTL_BALANCED_NODE; /* size: 0x0018 */

typedef struct _HEAP_DESCRIPTOR_KEY
{
  union
  {
    /* 0x0000 */ unsigned long Key;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long EncodedCommittedPageCount : 16; /* bit position: 0 */
      /* 0x0000 */ unsigned long LargePageCost : 8; /* bit position: 16 */
      /* 0x0000 */ unsigned long UnitCount : 8; /* bit position: 24 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} HEAP_DESCRIPTOR_KEY, *PHEAP_DESCRIPTOR_KEY; /* size: 0x0004 */

typedef struct _HEAP_PAGE_RANGE_DESCRIPTOR
{
  union
  {
    /* 0x0000 */ struct _RTL_BALANCED_NODE TreeNode;
    struct
    {
      /* 0x0000 */ unsigned long TreeSignature;
      /* 0x0004 */ unsigned long UnusedBytes;
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned short ExtraPresent : 1; /* bit position: 0 */
        /* 0x0008 */ unsigned short Spare0 : 15; /* bit position: 1 */
      }; /* bitfield */
    }; /* size: 0x000a */
  }; /* size: 0x0018 */
  /* 0x0018 */ volatile unsigned char RangeFlags;
  /* 0x0019 */ unsigned char CommittedPageCount;
  /* 0x001a */ unsigned short Spare;
  union
  {
    /* 0x001c */ struct _HEAP_DESCRIPTOR_KEY Key;
    struct
    {
      /* 0x001c */ unsigned char Align[3];
      union
      {
        /* 0x001f */ unsigned char UnitOffset;
        /* 0x001f */ unsigned char UnitSize;
      }; /* size: 0x0001 */
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
} HEAP_PAGE_RANGE_DESCRIPTOR, *PHEAP_PAGE_RANGE_DESCRIPTOR; /* size: 0x0020 */

typedef union _HEAP_PAGE_SEGMENT
{
  union
  {
    struct
    {
      /* 0x0000 */ struct _LIST_ENTRY ListEntry;
      /* 0x0010 */ unsigned __int64 Signature;
      /* 0x0018 */ union _HEAP_SEGMENT_MGR_COMMIT_STATE* SegmentCommitState;
      /* 0x0020 */ unsigned char UnusedWatermark;
    }; /* size: 0x0021 */
    /* 0x0000 */ struct _HEAP_PAGE_RANGE_DESCRIPTOR DescArray[256];
  }; /* size: 0x2000 */
} HEAP_PAGE_SEGMENT, *PHEAP_PAGE_SEGMENT; /* size: 0x2000 */

