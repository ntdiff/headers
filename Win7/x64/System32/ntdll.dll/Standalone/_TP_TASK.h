typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _TP_NBQ_GUARD
{
  /* 0x0000 */ struct _LIST_ENTRY GuardLinks;
  /* 0x0010 */ void* Guards[2];
} TP_NBQ_GUARD, *PTP_NBQ_GUARD; /* size: 0x0020 */

typedef struct _TP_TASK
{
  /* 0x0000 */ const struct _TP_TASK_CALLBACKS* Callbacks;
  /* 0x0008 */ unsigned long NumaNode;
  /* 0x000c */ unsigned char IdealProcessor;
  /* 0x0010 */ struct _TP_NBQ_GUARD PostGuard;
  /* 0x0030 */ void* NBQNode;
} TP_TASK, *PTP_TASK; /* size: 0x0038 */

