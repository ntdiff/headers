typedef struct _RTL_RB_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
  /* 0x0008 */ struct _RTL_BALANCED_NODE* Min;
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0010 */

typedef struct _KTIMER2_COLLECTION
{
  /* 0x0000 */ struct _RTL_RB_TREE Tree;
  /* 0x0010 */ unsigned __int64 NextDueTime;
} KTIMER2_COLLECTION, *PKTIMER2_COLLECTION; /* size: 0x0018 */

