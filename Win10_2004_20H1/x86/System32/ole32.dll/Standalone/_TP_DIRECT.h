typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _TP_TASK
{
  /* 0x0000 */ const struct _TP_TASK_CALLBACKS* Callbacks;
  /* 0x0004 */ unsigned long NumaNode;
  /* 0x0008 */ unsigned char IdealProcessor;
  /* 0x000c */ struct _LIST_ENTRY ListEntry;
} TP_TASK, *PTP_TASK; /* size: 0x0014 */

typedef struct _TP_DIRECT
{
  /* 0x0000 */ struct _TP_TASK Task;
  /* 0x0014 */ unsigned long Lock;
  /* 0x0018 */ struct _LIST_ENTRY IoCompletionInformationList;
  /* 0x0020 */ void* Callback /* function */;
  /* 0x0024 */ unsigned long NumaNode;
  /* 0x0028 */ unsigned char IdealProcessor;
  /* 0x0029 */ char __PADDING__[3];
} TP_DIRECT, *PTP_DIRECT; /* size: 0x002c */

