typedef struct _RTL_AVL_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
} RTL_AVL_TREE, *PRTL_AVL_TREE; /* size: 0x0004 */

typedef struct _MI_COMBINE_STATE
{
  /* 0x0000 */ volatile long ActiveSpinLock;
  /* 0x0004 */ unsigned long CombiningThreadCount;
  /* 0x0008 */ struct _RTL_AVL_TREE ActiveThreadTree;
  /* 0x0010 */ unsigned __int64 CommonPageCombineDomain;
  /* 0x0018 */ unsigned long CommonCombineDomainAssigned;
  /* 0x001c */ long __PADDING__[1];
} MI_COMBINE_STATE, *PMI_COMBINE_STATE; /* size: 0x0020 */

