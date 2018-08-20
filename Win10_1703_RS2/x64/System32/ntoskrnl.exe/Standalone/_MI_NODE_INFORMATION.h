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

typedef struct _MI_REBUILD_LARGE_PAGE_TIMER
{
  /* 0x0000 */ struct _WORK_QUEUE_ITEM WorkItem;
  /* 0x0020 */ unsigned char SecondsLeft;
  /* 0x0021 */ unsigned char RebuildActive;
  /* 0x0022 */ unsigned char NextPassDelta;
  /* 0x0023 */ unsigned char LargeSubPagesActive;
  /* 0x0024 */ long __PADDING__[1];
} MI_REBUILD_LARGE_PAGE_TIMER, *PMI_REBUILD_LARGE_PAGE_TIMER; /* size: 0x0028 */

typedef struct _MMPFNLIST_SHORT
{
  /* 0x0000 */ unsigned __int64 Total;
  /* 0x0008 */ unsigned __int64 Flink;
  /* 0x0010 */ unsigned __int64 Blink;
} MMPFNLIST_SHORT, *PMMPFNLIST_SHORT; /* size: 0x0018 */

typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 Shared : 60; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0008 */

typedef struct _MI_NODE_INFORMATION
{
  /* 0x0000 */ unsigned __int64 LargePageFreeCount[2][3];
  /* 0x0030 */ struct _LIST_ENTRY LargePages[4][2][2][3];
  /* 0x0330 */ unsigned __int64 LargePagesCount[4][2][2][3];
  /* 0x04b0 */ struct _MI_REBUILD_LARGE_PAGE_TIMER LargePageRebuildTimer;
  /* 0x04d8 */ struct _MMPFNLIST_SHORT StandbyPageList[8][4];
  /* 0x07d8 */ volatile unsigned __int64 FreeCount[2];
  /* 0x07e8 */ unsigned __int64 TotalPages[4];
  /* 0x0808 */ unsigned __int64 TotalPagesEntireNode;
  /* 0x0810 */ unsigned long MmShiftedColor;
  /* 0x0814 */ unsigned long Color;
  /* 0x0818 */ volatile unsigned __int64 ChannelFreeCount[2][4];
  struct // _TAG_UNNAMED_147
  {
    struct /* bitfield */
    {
      /* 0x0858 */ unsigned long ChannelsHotCold : 1; /* bit position: 0 */
      /* 0x0858 */ unsigned long Spare : 31; /* bit position: 1 */
    }; /* bitfield */
  } /* size: 0x0004 */ Flags;
  /* 0x0860 */ struct _EX_PUSH_LOCK NodeLock;
  /* 0x0868 */ unsigned __int64 ZeroThreadHugeMapLock;
  /* 0x0870 */ unsigned char ChannelStatus;
  /* 0x0871 */ unsigned char ChannelOrdering[4];
  /* 0x0875 */ unsigned char LockedChannelOrdering[4];
  /* 0x0879 */ unsigned char PowerAttribute[4];
  /* 0x0880 */ unsigned __int64 LargePageLock;
} MI_NODE_INFORMATION, *PMI_NODE_INFORMATION; /* size: 0x0888 */

