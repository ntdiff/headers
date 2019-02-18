typedef struct _RTL_AVL_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
} RTL_AVL_TREE, *PRTL_AVL_TREE; /* size: 0x0004 */

typedef struct _MI_PAGELIST_STATE
{
  /* 0x0000 */ volatile long ActiveSpinLock;
  /* 0x0004 */ struct _RTL_AVL_TREE ActiveThreadTree;
  /* 0x0008 */ volatile long ActiveZeroSpinLock;
  /* 0x000c */ struct _RTL_AVL_TREE ActiveZeroThreadTree;
  /* 0x0010 */ unsigned long NumberOfLargePageListHeads;
} MI_PAGELIST_STATE, *PMI_PAGELIST_STATE; /* size: 0x0014 */

