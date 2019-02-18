typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

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
  /* 0x0008 */ volatile unsigned __int64 AllocatedNonPagedPool;
  /* 0x0010 */ struct _SINGLE_LIST_ENTRY BadPoolHead;
  /* 0x0018 */ unsigned long HighEventSets;
  /* 0x001c */ unsigned char HighEventSetsValid;
  /* 0x0020 */ unsigned __int64 LowPagedPoolThreshold;
  /* 0x0028 */ unsigned __int64 HighPagedPoolThreshold;
  /* 0x0030 */ volatile long PermittedFaultsLock;
  /* 0x0038 */ struct _RTL_AVL_TREE PermittedFaultsTree;
  /* 0x0040 */ struct _MI_ACCESS_VIOLATION_RANGE PermittedFaultsInitialNode[2];
  /* 0x0090 */ unsigned __int64 TotalPagedPoolQuota;
  /* 0x0098 */ unsigned __int64 TotalNonPagedPoolQuota;
} MI_POOL_STATE, *PMI_POOL_STATE; /* size: 0x00a0 */

