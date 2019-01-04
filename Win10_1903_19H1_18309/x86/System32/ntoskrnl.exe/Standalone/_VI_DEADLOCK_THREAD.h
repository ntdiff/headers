typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _VI_DEADLOCK_THREAD
{
  /* 0x0000 */ struct _KTHREAD* Thread;
  /* 0x0004 */ struct _VI_DEADLOCK_NODE* CurrentSpinNode;
  /* 0x0008 */ struct _VI_DEADLOCK_NODE* CurrentOtherNode;
  union
  {
    /* 0x000c */ struct _LIST_ENTRY ListEntry;
    /* 0x000c */ struct _LIST_ENTRY FreeListEntry;
  }; /* size: 0x0008 */
  /* 0x0014 */ unsigned long NodeCount;
  /* 0x0018 */ volatile unsigned long PagingCount;
  /* 0x001c */ unsigned char ThreadUsesEresources;
  /* 0x001d */ char __PADDING__[3];
} VI_DEADLOCK_THREAD, *PVI_DEADLOCK_THREAD; /* size: 0x0020 */

