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
    } /* size: 0x0010 */ HeaderArm64;
  }; /* size: 0x0010 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0010 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

typedef struct _KDPC
{
  union
  {
    /* 0x0000 */ unsigned long TargetInfoAsUlong;
    struct
    {
      /* 0x0000 */ unsigned char Type;
      /* 0x0001 */ unsigned char Importance;
      /* 0x0002 */ volatile unsigned short Number;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
  /* 0x0008 */ struct _SINGLE_LIST_ENTRY DpcListEntry;
  /* 0x0010 */ unsigned __int64 ProcessorHistory;
  /* 0x0018 */ void* DeferredRoutine /* function */;
  /* 0x0020 */ void* DeferredContext;
  /* 0x0028 */ void* SystemArgument1;
  /* 0x0030 */ void* SystemArgument2;
  /* 0x0038 */ void* DpcData;
} KDPC, *PKDPC; /* size: 0x0040 */

typedef struct _ETW_APC_POOL
{
  /* 0x0000 */ struct _WMI_LOGGER_CONTEXT* LoggerContext;
  /* 0x0008 */ unsigned __int64 ApcSpinLock;
  /* 0x0010 */ union _SLIST_HEADER ApcGlobalListHead;
  /* 0x0020 */ union _SLIST_HEADER ApcFreeListHead;
  /* 0x0030 */ void* DpcContext1;
  /* 0x0038 */ void* DpcContext2;
  /* 0x0040 */ void* DpcContext3;
  /* 0x0048 */ void* DpcNormalRoutine /* function */;
  /* 0x0050 */ void* DpcCancelRoutine /* function */;
  /* 0x0058 */ struct _ETHREAD* DpcThread;
  /* 0x0060 */ struct _KDPC Dpc;
  /* 0x00a0 */ long Flags;
  /* 0x00a4 */ long ApcCount;
  /* 0x00a8 */ unsigned long MinimumApcCount;
  /* 0x00ac */ unsigned long MaximumApcCount;
  /* 0x00b0 */ long OutstandingApcCount;
  /* 0x00b4 */ long MaxOutstandingApcCount;
  /* 0x00b8 */ long __PADDING__[2];
} ETW_APC_POOL, *PETW_APC_POOL; /* size: 0x00c0 */

typedef struct _ETW_STACK_TRACE_BLOCK
{
  /* 0x0000 */ struct _ETW_APC_POOL ApcPool;
  /* 0x00c0 */ long StackCaptureAttemptCount;
  /* 0x00c4 */ long StackExpansionFailureCount;
  /* 0x00c8 */ long __PADDING__[2];
} ETW_STACK_TRACE_BLOCK, *PETW_STACK_TRACE_BLOCK; /* size: 0x00d0 */

