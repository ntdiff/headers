typedef struct _MI_REBUILD_LARGE_PAGE_COUNTDOWN
{
  /* 0x0000 */ unsigned char SecondsLeft;
  /* 0x0001 */ unsigned char SecondsAssigned;
} MI_REBUILD_LARGE_PAGE_COUNTDOWN, *PMI_REBUILD_LARGE_PAGE_COUNTDOWN; /* size: 0x0002 */

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

typedef struct _MI_REBUILD_LARGE_PAGES
{
  /* 0x0000 */ long Active;
  /* 0x0004 */ struct _MI_REBUILD_LARGE_PAGE_COUNTDOWN Timer[1][16];
  /* 0x0024 */ struct _WORK_QUEUE_ITEM WorkItem;
} MI_REBUILD_LARGE_PAGES, *PMI_REBUILD_LARGE_PAGES; /* size: 0x0034 */

