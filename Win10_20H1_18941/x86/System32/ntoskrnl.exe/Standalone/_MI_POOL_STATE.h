typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef struct _RTL_AVL_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
} RTL_AVL_TREE, *PRTL_AVL_TREE; /* size: 0x0004 */

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

typedef struct _MI_ACCESS_VIOLATION_RANGE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE Node;
  /* 0x000c */ void* Va;
  /* 0x0010 */ void* EndVaInclusive;
} MI_ACCESS_VIOLATION_RANGE, *PMI_ACCESS_VIOLATION_RANGE; /* size: 0x0014 */

typedef struct _MI_POOL_STATE
{
  /* 0x0000 */ unsigned long MaximumNonPagedPoolThreshold;
  /* 0x0004 */ volatile unsigned long AllocatedNonPagedPool;
  /* 0x0008 */ struct _SINGLE_LIST_ENTRY BadPoolHead;
  /* 0x000c */ unsigned long HighEventSets;
  /* 0x0010 */ unsigned char HighEventSetsValid;
  /* 0x0014 */ unsigned long LowPagedPoolThreshold;
  /* 0x0018 */ unsigned long HighPagedPoolThreshold;
  /* 0x001c */ volatile long PermittedFaultsLock;
  /* 0x0020 */ struct _RTL_AVL_TREE PermittedFaultsTree;
  /* 0x0024 */ struct _MI_ACCESS_VIOLATION_RANGE PermittedFaultsInitialNode[2];
  /* 0x004c */ unsigned long TotalPagedPoolQuota;
  /* 0x0050 */ unsigned long TotalNonPagedPoolQuota;
} MI_POOL_STATE, *PMI_POOL_STATE; /* size: 0x0054 */

