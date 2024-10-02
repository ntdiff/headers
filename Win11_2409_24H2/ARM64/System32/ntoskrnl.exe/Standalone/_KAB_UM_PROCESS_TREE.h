typedef struct _RTL_RB_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
  union
  {
    /* 0x0008 */ unsigned char Encoded : 1; /* bit position: 0 */
    /* 0x0008 */ struct _RTL_BALANCED_NODE* Min;
  }; /* size: 0x0008 */
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0010 */

typedef struct _KAB_UM_PROCESS_TREE
{
  /* 0x0000 */ struct _RTL_RB_TREE Tree;
  /* 0x0010 */ unsigned __int64 TreeLock;
} KAB_UM_PROCESS_TREE, *PKAB_UM_PROCESS_TREE; /* size: 0x0018 */

