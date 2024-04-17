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

typedef struct _HEAP_LARGE_ALLOC_DATA
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE TreeNode;
  union
  {
    /* 0x000c */ unsigned long VirtualAddress;
    /* 0x000c */ unsigned long UnusedBytes : 16; /* bit position: 0 */
  }; /* size: 0x0004 */
  struct /* bitfield */
  {
    /* 0x0010 */ unsigned long ExtraPresent : 1; /* bit position: 0 */
    /* 0x0010 */ unsigned long GuardPageCount : 1; /* bit position: 1 */
    /* 0x0010 */ unsigned long GuardPageAlignment : 6; /* bit position: 2 */
    /* 0x0010 */ unsigned long Spare : 4; /* bit position: 8 */
    /* 0x0010 */ unsigned long AllocatedPages : 20; /* bit position: 12 */
  }; /* bitfield */
} HEAP_LARGE_ALLOC_DATA, *PHEAP_LARGE_ALLOC_DATA; /* size: 0x0014 */

