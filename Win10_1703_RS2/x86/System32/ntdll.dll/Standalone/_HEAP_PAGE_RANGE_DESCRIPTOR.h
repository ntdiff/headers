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
    /* 0x0000 */ unsigned short Key;
    struct
    {
      /* 0x0000 */ unsigned char EncodedCommitCount;
      /* 0x0001 */ unsigned char PageCount;
    }; /* size: 0x0002 */
  }; /* size: 0x0002 */
} HEAP_DESCRIPTOR_KEY, *PHEAP_DESCRIPTOR_KEY; /* size: 0x0002 */

typedef struct _HEAP_PAGE_RANGE_DESCRIPTOR
{
  union
  {
    /* 0x0000 */ struct _RTL_BALANCED_NODE TreeNode;
    struct
    {
      /* 0x0000 */ unsigned long TreeSignature;
      struct /* bitfield */
      {
        /* 0x0004 */ unsigned short ExtraPresent : 1; /* bit position: 0 */
        /* 0x0004 */ unsigned short Spare0 : 15; /* bit position: 1 */
      }; /* bitfield */
      /* 0x0006 */ unsigned short UnusedBytes;
    }; /* size: 0x0008 */
  }; /* size: 0x000c */
  /* 0x000c */ volatile unsigned char RangeFlags;
  /* 0x000d */ unsigned char Spare1;
  union
  {
    /* 0x000e */ struct _HEAP_DESCRIPTOR_KEY Key;
    struct
    {
      /* 0x000e */ unsigned char Align;
      union
      {
        /* 0x000f */ unsigned char Offset;
        /* 0x000f */ unsigned char Size;
      }; /* size: 0x0001 */
    }; /* size: 0x0002 */
  }; /* size: 0x0002 */
} HEAP_PAGE_RANGE_DESCRIPTOR, *PHEAP_PAGE_RANGE_DESCRIPTOR; /* size: 0x0010 */

