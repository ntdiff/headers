typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _VI_DEADLOCK_THREAD
{
  /* 0x0000 */ struct _KTHREAD* Thread;
  /* 0x0008 */ struct _VI_DEADLOCK_NODE* CurrentSpinNode;
  /* 0x0010 */ struct _VI_DEADLOCK_NODE* CurrentOtherNode;
  union
  {
    /* 0x0018 */ struct _LIST_ENTRY ListEntry;
    /* 0x0018 */ struct _LIST_ENTRY FreeListEntry;
  }; /* size: 0x0010 */
  /* 0x0028 */ unsigned long NodeCount;
  /* 0x002c */ volatile unsigned long PagingCount;
  /* 0x0030 */ unsigned char ThreadUsesEresources;
  /* 0x0031 */ char __PADDING__[7];
} VI_DEADLOCK_THREAD, *PVI_DEADLOCK_THREAD; /* size: 0x0038 */

