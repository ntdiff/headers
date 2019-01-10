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
    /* 0x0008 */ unsigned char Encoded : 1; /* bit position: 0 */
    /* 0x0008 */ struct _RTL_BALANCED_NODE* Min;
  }; /* size: 0x0008 */
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0010 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef union _SLIST_HEADER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned __int64 Alignment;
      /* 0x0008 */ unsigned __int64 Region;
    }; /* size: 0x0010 */
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Depth : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 Sequence : 48; /* bit position: 16 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 Reserved : 4; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 NextEntry : 60; /* bit position: 4 */
      }; /* bitfield */
    } /* size: 0x0010 */ HeaderX64;
  }; /* size: 0x0010 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0010 */

typedef struct _HEAP_VS_DELAY_FREE_CONTEXT
{
  /* 0x0000 */ union _SLIST_HEADER ListHead;
} HEAP_VS_DELAY_FREE_CONTEXT, *PHEAP_VS_DELAY_FREE_CONTEXT; /* size: 0x0010 */

typedef struct _HEAP_SUBALLOCATOR_CALLBACKS
{
  /* 0x0000 */ unsigned __int64 Allocate;
  /* 0x0008 */ unsigned __int64 Free;
  /* 0x0010 */ unsigned __int64 Commit;
  /* 0x0018 */ unsigned __int64 Decommit;
  /* 0x0020 */ unsigned __int64 ExtendContext;
} HEAP_SUBALLOCATOR_CALLBACKS, *PHEAP_SUBALLOCATOR_CALLBACKS; /* size: 0x0028 */

typedef struct _RTL_HP_VS_CONFIG
{
  struct
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long PageAlignLargeAllocs : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long FullDecommit : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long EnableDelayFree : 1; /* bit position: 2 */
    }; /* bitfield */
  } /* size: 0x0004 */ Flags;
} RTL_HP_VS_CONFIG, *PRTL_HP_VS_CONFIG; /* size: 0x0004 */

typedef struct _HEAP_VS_CONTEXT
{
  /* 0x0000 */ unsigned __int64 Lock;
  /* 0x0008 */ enum _RTLP_HP_LOCK_TYPE LockType;
  /* 0x0010 */ struct _RTL_RB_TREE FreeChunkTree;
  /* 0x0020 */ struct _LIST_ENTRY SubsegmentList;
  /* 0x0030 */ unsigned __int64 TotalCommittedUnits;
  /* 0x0038 */ unsigned __int64 FreeCommittedUnits;
  /* 0x0040 */ struct _HEAP_VS_DELAY_FREE_CONTEXT DelayFreeContext;
  /* 0x0080 */ void* BackendCtx;
  /* 0x0088 */ struct _HEAP_SUBALLOCATOR_CALLBACKS Callbacks;
  /* 0x00b0 */ struct _RTL_HP_VS_CONFIG Config;
  /* 0x00b4 */ unsigned long Flags;
  /* 0x00b8 */ long __PADDING__[2];
} HEAP_VS_CONTEXT, *PHEAP_VS_CONTEXT; /* size: 0x00c0 */

