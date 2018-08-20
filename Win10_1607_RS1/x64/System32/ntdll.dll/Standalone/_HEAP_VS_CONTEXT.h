typedef struct _RTL_SRWLOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 Shared : 60; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} RTL_SRWLOCK, *PRTL_SRWLOCK; /* size: 0x0008 */

typedef struct _RTL_RB_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
  /* 0x0008 */ struct _RTL_BALANCED_NODE* Min;
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0010 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _HEAP_SUBALLOCATOR_CALLBACKS
{
  /* 0x0000 */ unsigned __int64 Allocate;
  /* 0x0008 */ unsigned __int64 Free;
  /* 0x0010 */ unsigned __int64 Commit;
  /* 0x0018 */ unsigned __int64 Decommit;
  /* 0x0020 */ unsigned __int64 ExtendContext;
} HEAP_SUBALLOCATOR_CALLBACKS, *PHEAP_SUBALLOCATOR_CALLBACKS; /* size: 0x0028 */

typedef struct _HEAP_VS_CONTEXT
{
  /* 0x0000 */ struct _RTL_SRWLOCK Lock;
  /* 0x0008 */ struct _RTL_RB_TREE FreeChunkTree;
  /* 0x0018 */ struct _LIST_ENTRY SubsegmentList;
  /* 0x0028 */ unsigned __int64 TotalCommittedUnits;
  /* 0x0030 */ unsigned __int64 FreeCommittedUnits;
  /* 0x0038 */ void* BackendCtx;
  /* 0x0040 */ struct _HEAP_SUBALLOCATOR_CALLBACKS Callbacks;
} HEAP_VS_CONTEXT, *PHEAP_VS_CONTEXT; /* size: 0x0068 */

