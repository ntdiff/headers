typedef struct _WNF_NODE_HEADER
{
  /* 0x0000 */ unsigned short NodeTypeCode;
  /* 0x0002 */ unsigned short NodeByteSize;
} WNF_NODE_HEADER, *PWNF_NODE_HEADER; /* size: 0x0004 */

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

typedef struct _WNF_DISPATCHER
{
  /* 0x0000 */ struct _WNF_NODE_HEADER Header;
  /* 0x0008 */ struct _WORK_QUEUE_ITEM WorkItem;
  /* 0x0028 */ long State;
  /* 0x002c */ long __PADDING__[1];
} WNF_DISPATCHER, *PWNF_DISPATCHER; /* size: 0x0030 */

