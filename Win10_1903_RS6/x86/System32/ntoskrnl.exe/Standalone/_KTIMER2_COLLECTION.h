typedef struct _RTL_RB_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
  union
  {
    /* 0x0004 */ unsigned char Encoded : 1; /* bit position: 0 */
    /* 0x0004 */ struct _RTL_BALANCED_NODE* Min;
  }; /* size: 0x0004 */
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0008 */

typedef struct _KTIMER2_COLLECTION
{
  /* 0x0000 */ struct _RTL_RB_TREE Tree;
  /* 0x0008 */ unsigned __int64 NextDueTime;
} KTIMER2_COLLECTION, *PKTIMER2_COLLECTION; /* size: 0x0010 */

