typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0010 */ void* WorkerRoutine /* function */;
  /* 0x0018 */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0020 */

typedef struct _EX_RUNDOWN_REF
{
  union
  {
    /* 0x0000 */ unsigned __int64 Count;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} EX_RUNDOWN_REF, *PEX_RUNDOWN_REF; /* size: 0x0008 */

typedef union _KI_AVAILABLE_CPUS_WORK_STATE
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long WorkerExecuting : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long WorkPresent : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Reserved : 30; /* bit position: 2 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AllFields;
  }; /* size: 0x0004 */
} KI_AVAILABLE_CPUS_WORK_STATE, *PKI_AVAILABLE_CPUS_WORK_STATE; /* size: 0x0004 */

typedef struct _KI_AVAILABLE_CPUS_WORK_ITEM
{
  /* 0x0000 */ struct _WORK_QUEUE_ITEM ExWorkItem;
  /* 0x0020 */ struct _EX_RUNDOWN_REF RundownRef;
  /* 0x0028 */ union _KI_AVAILABLE_CPUS_WORK_STATE WorkState;
  /* 0x0030 */ void* Callback /* function */;
  /* 0x0038 */ void* Context;
} KI_AVAILABLE_CPUS_WORK_ITEM, *PKI_AVAILABLE_CPUS_WORK_ITEM; /* size: 0x0040 */

