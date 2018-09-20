typedef enum _RTLP_HP_LOCK_TYPE
{
  HeapLockPaged = 0,
  HeapLockNonPaged = 1,
  HeapLockTypeMax = 2,
} RTLP_HP_LOCK_TYPE, *PRTLP_HP_LOCK_TYPE;

typedef struct _RTL_RB_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
  union
  {
    /* 0x0004 */ unsigned char Encoded : 1; /* bit position: 0 */
    /* 0x0004 */ struct _RTL_BALANCED_NODE* Min;
  }; /* size: 0x0004 */
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _HEAP_SUBALLOCATOR_CALLBACKS
{
  /* 0x0000 */ unsigned long Allocate;
  /* 0x0004 */ unsigned long Free;
  /* 0x0008 */ unsigned long Commit;
  /* 0x000c */ unsigned long Decommit;
  /* 0x0010 */ unsigned long ExtendContext;
} HEAP_SUBALLOCATOR_CALLBACKS, *PHEAP_SUBALLOCATOR_CALLBACKS; /* size: 0x0014 */

typedef struct _RTL_HP_VS_CONFIG
{
  struct // _TAG_UNNAMED_33
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long PageAlignLargeAllocs : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long FullDecommit : 1; /* bit position: 1 */
    }; /* bitfield */
  } /* size: 0x0004 */ Flags;
} RTL_HP_VS_CONFIG, *PRTL_HP_VS_CONFIG; /* size: 0x0004 */

typedef struct _HEAP_VS_CONTEXT
{
  /* 0x0000 */ unsigned long Lock;
  /* 0x0004 */ enum _RTLP_HP_LOCK_TYPE LockType;
  /* 0x0008 */ struct _RTL_RB_TREE FreeChunkTree;
  /* 0x0010 */ struct _LIST_ENTRY SubsegmentList;
  /* 0x0018 */ unsigned long TotalCommittedUnits;
  /* 0x001c */ unsigned long FreeCommittedUnits;
  /* 0x0020 */ void* BackendCtx;
  /* 0x0024 */ struct _HEAP_SUBALLOCATOR_CALLBACKS Callbacks;
  /* 0x0038 */ struct _RTL_HP_VS_CONFIG Config;
  /* 0x003c */ unsigned long Flags;
} HEAP_VS_CONTEXT, *PHEAP_VS_CONTEXT; /* size: 0x0040 */

