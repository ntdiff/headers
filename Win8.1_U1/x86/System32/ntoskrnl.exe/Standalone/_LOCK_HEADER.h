typedef struct _RTL_AVL_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
} RTL_AVL_TREE, *PRTL_AVL_TREE; /* size: 0x0004 */

typedef struct _LOCK_HEADER
{
  /* 0x0000 */ struct _RTL_AVL_TREE LockTree;
  /* 0x0004 */ unsigned long Count;
  /* 0x0008 */ unsigned long Lock;
  /* 0x000c */ unsigned long Valid;
} LOCK_HEADER, *PLOCK_HEADER; /* size: 0x0010 */

