typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

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
} RTL_AVL_TREE, *PRTL_AVL_TREE; /* size: 0x0008 */

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

typedef struct _MI_ACCESS_VIOLATION_RANGE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE Node;
  /* 0x0018 */ void* Va;
  /* 0x0020 */ void* EndVaInclusive;
} MI_ACCESS_VIOLATION_RANGE, *PMI_ACCESS_VIOLATION_RANGE; /* size: 0x0028 */

typedef struct _MI_POOL_STATE
{
  /* 0x0000 */ unsigned __int64 MaximumNonPagedPoolThreshold;
  /* 0x0008 */ unsigned long NonPagedPoolSListMaximum[3];
  /* 0x0018 */ volatile unsigned __int64 AllocatedNonPagedPool;
  /* 0x0020 */ struct _SINGLE_LIST_ENTRY BadPoolHead;
  /* 0x0028 */ unsigned long HighEventSets;
  /* 0x002c */ unsigned char HighEventSetsValid;
  /* 0x0030 */ unsigned long PoolFailures[3][3];
  /* 0x0054 */ struct _MI_POOL_FAILURE_REASONS PoolFailureReasons;
  /* 0x0080 */ unsigned __int64 LowPagedPoolThreshold;
  /* 0x0088 */ unsigned __int64 HighPagedPoolThreshold;
  /* 0x0090 */ unsigned long PagedPoolSListMaximum;
  /* 0x0094 */ unsigned long PreemptiveTrims[4];
  /* 0x00a8 */ unsigned __int64 SpecialPagesInUsePeak;
  /* 0x00b0 */ unsigned long SpecialPoolRejected[6];
  /* 0x00c8 */ volatile unsigned __int64 SpecialPagesNonPaged;
  /* 0x00d0 */ volatile long SpecialPoolPdes;
  /* 0x00d4 */ unsigned long SessionSpecialPoolPdesMax;
  /* 0x00d8 */ volatile long PermittedFaultsLock;
  /* 0x00e0 */ struct _RTL_AVL_TREE PermittedFaultsTree;
  /* 0x00e8 */ struct _MI_ACCESS_VIOLATION_RANGE PermittedFaultsInitialNode[2];
  /* 0x0138 */ unsigned __int64 TotalPagedPoolQuota;
  /* 0x0140 */ unsigned __int64 TotalNonPagedPoolQuota;
} MI_POOL_STATE, *PMI_POOL_STATE; /* size: 0x0148 */

