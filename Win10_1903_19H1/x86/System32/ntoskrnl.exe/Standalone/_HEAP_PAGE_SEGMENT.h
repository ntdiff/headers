typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _RTL_BALANCED_NODE
{
  union
  {
    /* 0x0000 */ struct _RTL_BALANCED_NODE* Children[2];
    struct
    {
      /* 0x0000 */ struct _RTL_BALANCED_NODE* Left;
      /* 0x0004 */ struct _RTL_BALANCED_NODE* Right;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
  union
  {
    /* 0x0008 */ unsigned char Red : 1; /* bit position: 0 */
    /* 0x0008 */ unsigned char Balance : 2; /* bit position: 0 */
    /* 0x0008 */ unsigned long ParentValue;
  }; /* size: 0x0004 */
} RTL_BALANCED_NODE, *PRTL_BALANCED_NODE; /* size: 0x000c */

typedef struct _HEAP_DESCRIPTOR_KEY
{
  union
  {
    /* 0x0000 */ unsigned long Key;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Ignore : 8; /* bit position: 0 */
      /* 0x0000 */ unsigned long EncodedCommittedPageCount : 16; /* bit position: 8 */
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
  }; /* size: 0x000c */
  union
  {
    /* 0x000c */ volatile unsigned char RangeFlags;
    struct /* bitfield */
    {
      /* 0x000c */ unsigned char RangeFlagBits : 5; /* bit position: 0 */
      /* 0x000c */ unsigned char CommittedPageCount : 3; /* bit position: 5 */
    }; /* bitfield */
    /* 0x000c */ struct _HEAP_DESCRIPTOR_KEY Key;
    struct
    {
      /* 0x000c */ unsigned char Align[3];
      union
      {
        /* 0x000f */ unsigned char UnitOffset;
        /* 0x000f */ unsigned char UnitSize;
      }; /* size: 0x0001 */
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
} HEAP_PAGE_RANGE_DESCRIPTOR, *PHEAP_PAGE_RANGE_DESCRIPTOR; /* size: 0x0010 */

typedef union _HEAP_PAGE_SEGMENT
{
  union
  {
    struct
    {
      /* 0x0000 */ struct _LIST_ENTRY ListEntry;
      /* 0x0008 */ unsigned long Signature;
      /* 0x000c */ union _HEAP_SEGMENT_MGR_COMMIT_STATE* SegmentCommitState;
      /* 0x0010 */ unsigned char UnusedWatermark;
    }; /* size: 0x0011 */
    /* 0x0000 */ struct _HEAP_PAGE_RANGE_DESCRIPTOR DescArray[256];
  }; /* size: 0x1000 */
} HEAP_PAGE_SEGMENT, *PHEAP_PAGE_SEGMENT; /* size: 0x1000 */

