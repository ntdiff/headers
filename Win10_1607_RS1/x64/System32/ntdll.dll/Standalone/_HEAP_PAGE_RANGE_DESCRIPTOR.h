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
  }; /* size: 0x0018 */
  /* 0x0018 */ volatile unsigned char RangeFlags;
  /* 0x0019 */ unsigned char Spare1;
  union
  {
    /* 0x001a */ struct _HEAP_DESCRIPTOR_KEY Key;
    struct
    {
      /* 0x001a */ unsigned char Align;
      union
      {
        /* 0x001b */ unsigned char Offset;
        /* 0x001b */ unsigned char Size;
      }; /* size: 0x0001 */
    }; /* size: 0x0002 */
  }; /* size: 0x0002 */
  /* 0x001c */ long __PADDING__[1];
} HEAP_PAGE_RANGE_DESCRIPTOR, *PHEAP_PAGE_RANGE_DESCRIPTOR; /* size: 0x0020 */

