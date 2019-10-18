typedef struct _RTL_AVL_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
} RTL_AVL_TREE, *PRTL_AVL_TREE; /* size: 0x0008 */

typedef struct _LOCK_HEADER
{
  /* 0x0000 */ struct _RTL_AVL_TREE LockTree;
  /* 0x0008 */ struct _RTL_AVL_TREE LockMdlSwitchedTree;
  /* 0x0010 */ unsigned __int64 Count;
  /* 0x0018 */ unsigned __int64 Lock;
  /* 0x0020 */ unsigned long Valid;
  /* 0x0024 */ long __PADDING__[1];
} LOCK_HEADER, *PLOCK_HEADER; /* size: 0x0028 */

