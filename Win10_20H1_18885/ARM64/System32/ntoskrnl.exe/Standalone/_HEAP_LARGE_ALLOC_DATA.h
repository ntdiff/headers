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

typedef struct _HEAP_LARGE_ALLOC_DATA
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE TreeNode;
  union
  {
    /* 0x0018 */ unsigned __int64 VirtualAddress;
    /* 0x0018 */ unsigned __int64 UnusedBytes : 16; /* bit position: 0 */
  }; /* size: 0x0008 */
  struct /* bitfield */
  {
    /* 0x0020 */ unsigned __int64 ExtraPresent : 1; /* bit position: 0 */
    /* 0x0020 */ unsigned __int64 GuardPageCount : 1; /* bit position: 1 */
    /* 0x0020 */ unsigned __int64 GuardPageAlignment : 6; /* bit position: 2 */
    /* 0x0020 */ unsigned __int64 Spare : 4; /* bit position: 8 */
    /* 0x0020 */ unsigned __int64 AllocatedPages : 52; /* bit position: 12 */
  }; /* bitfield */
} HEAP_LARGE_ALLOC_DATA, *PHEAP_LARGE_ALLOC_DATA; /* size: 0x0028 */

