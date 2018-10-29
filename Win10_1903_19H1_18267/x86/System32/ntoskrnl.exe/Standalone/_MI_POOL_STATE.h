typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef struct _MI_POOL_FAILURE_REASONS
{
  /* 0x0000 */ unsigned long NonPagedNoPtes;
  /* 0x0004 */ unsigned long PriorityTooLow;
  /* 0x0008 */ unsigned long NonPagedNoPagesAvailable;
  /* 0x000c */ unsigned long PagedNoPtes;
  /* 0x0010 */ unsigned long SessionPagedNoPtes;
  /* 0x0014 */ unsigned long PagedNoPagesAvailable;
  /* 0x0018 */ unsigned long SessionPagedNoPagesAvailable;
  /* 0x001c */ unsigned long PagedNoCommit;
  /* 0x0020 */ unsigned long SessionPagedNoCommit;
  /* 0x0024 */ unsigned long NonPagedNoResidentAvailable;
  /* 0x0028 */ unsigned long NonPagedNoCommit;
} MI_POOL_FAILURE_REASONS, *PMI_POOL_FAILURE_REASONS; /* size: 0x002c */

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
  /* 0x0004 */ unsigned long NonPagedPoolSListMaximum[3];
  /* 0x0010 */ volatile unsigned long AllocatedNonPagedPool;
  /* 0x0014 */ struct _SINGLE_LIST_ENTRY BadPoolHead;
  /* 0x0018 */ unsigned long HighEventSets;
  /* 0x001c */ unsigned char HighEventSetsValid;
  /* 0x0020 */ unsigned long PoolFailures[3][3];
  /* 0x0044 */ struct _MI_POOL_FAILURE_REASONS PoolFailureReasons;
  /* 0x0070 */ unsigned long LowPagedPoolThreshold;
  /* 0x0074 */ unsigned long HighPagedPoolThreshold;
  /* 0x0078 */ long SpecialPoolPdesMax;
  /* 0x007c */ unsigned char NonPagedPoolNodes[1024];
  /* 0x047c */ unsigned long PagedPoolSListMaximum;
  /* 0x0480 */ unsigned long PreemptiveTrims[4];
  /* 0x0490 */ unsigned long SpecialPagesInUsePeak;
  /* 0x0494 */ unsigned long SpecialPoolRejected[6];
  /* 0x04ac */ volatile unsigned long SpecialPagesNonPaged;
  /* 0x04b0 */ volatile long SpecialPoolPdes;
  /* 0x04b4 */ unsigned long SessionSpecialPoolPdesMax;
  /* 0x04b8 */ volatile long PermittedFaultsLock;
  /* 0x04bc */ struct _RTL_AVL_TREE PermittedFaultsTree;
  /* 0x04c0 */ struct _MI_ACCESS_VIOLATION_RANGE PermittedFaultsInitialNode[2];
  /* 0x04e8 */ unsigned long TotalPagedPoolQuota;
  /* 0x04ec */ unsigned long TotalNonPagedPoolQuota;
} MI_POOL_STATE, *PMI_POOL_STATE; /* size: 0x04f0 */

