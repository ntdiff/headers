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

typedef struct _MI_REBUILD_LARGE_PAGE_TIMER
{
  /* 0x0000 */ struct _WORK_QUEUE_ITEM WorkItem;
  /* 0x0010 */ unsigned char SecondsLeft;
  /* 0x0011 */ unsigned char RebuildActive;
  /* 0x0012 */ unsigned char NextPassDelta;
  /* 0x0013 */ unsigned char LargeSubPagesActive;
  /* 0x0014 */ unsigned long SequenceNumber;
  /* 0x0018 */ struct _MI_LARGE_PAGE_REBUILD_WAIT_BLOCK* WaitList;
} MI_REBUILD_LARGE_PAGE_TIMER, *PMI_REBUILD_LARGE_PAGE_TIMER; /* size: 0x001c */

typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long Shared : 28; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0004 */

typedef struct _MI_NODE_INFORMATION
{
  /* 0x0000 */ unsigned long LargePageFreeCount[2][2];
  /* 0x0010 */ struct _LIST_ENTRY LargePages[1][2][2][2];
  /* 0x0050 */ unsigned long LargePagesCount[1][2][2][2];
  /* 0x0070 */ struct _MI_REBUILD_LARGE_PAGE_TIMER LargePageRebuildTimer;
  /* 0x008c */ volatile unsigned long FreeCount[2];
  /* 0x0094 */ unsigned long TotalPages[1];
  /* 0x0098 */ unsigned long TotalPagesEntireNode;
  /* 0x009c */ unsigned long MmShiftedColor;
  /* 0x00a0 */ unsigned long Color;
  /* 0x00a4 */ volatile unsigned long ChannelFreeCount[2][1];
  struct // _TAG_UNNAMED_163
  {
    struct /* bitfield */
    {
      /* 0x00ac */ unsigned long ChannelsHotCold : 1; /* bit position: 0 */
      /* 0x00ac */ unsigned long Spare : 31; /* bit position: 1 */
    }; /* bitfield */
  } /* size: 0x0004 */ Flags;
  /* 0x00b0 */ struct _EX_PUSH_LOCK NodeLock;
  /* 0x00b4 */ unsigned char ChannelStatus;
  /* 0x00b5 */ unsigned char ChannelOrdering[1];
  /* 0x00b6 */ unsigned char LockedChannelOrdering[1];
  /* 0x00b7 */ unsigned char PowerAttribute[1];
  /* 0x00b8 */ unsigned long LargePageLock;
} MI_NODE_INFORMATION, *PMI_NODE_INFORMATION; /* size: 0x00bc */

