typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0008 */ void* WorkerRoutine /* function */;
  /* 0x000c */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0010 */

typedef struct _MI_ACCESS_LOG_STATE
{
  /* 0x0000 */ struct _MM_PAGE_ACCESS_INFO_HEADER* volatile CcAccessLog;
  /* 0x0004 */ struct _WORK_QUEUE_ITEM DisableAccessLogging;
  /* 0x0014 */ unsigned long Enabled;
  /* 0x0018 */ unsigned long MinLoggingPriority;
  /* 0x0040 */ unsigned long AccessLoggingLock;
  /* 0x0044 */ long __PADDING__[15];
} MI_ACCESS_LOG_STATE, *PMI_ACCESS_LOG_STATE; /* size: 0x0080 */

