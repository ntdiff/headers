typedef struct _MI_FREE_LARGE_PAGES
{
  /* 0x0000 */ unsigned __int64 LargePageFreeCount[2];
  /* 0x0010 */ unsigned __int64 LargePagesCount[4][2][2];
  /* 0x0090 */ struct _MI_FREE_LARGE_PAGE_LIST* LargePageEntries[4][2][2];
} MI_FREE_LARGE_PAGES, *PMI_FREE_LARGE_PAGES; /* size: 0x0110 */

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

typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0008 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0010 */

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

typedef struct _MI_PAGE_COLORS
{
  /* 0x0000 */ unsigned long PageSize[4];
} MI_PAGE_COLORS, *PMI_PAGE_COLORS; /* size: 0x0010 */

typedef struct _MI_NODE_INFORMATION
{
  /* 0x0000 */ struct _MI_FREE_LARGE_PAGES FreeLargePages[3];
  /* 0x0330 */ struct _MI_REBUILD_LARGE_PAGE_TIMER LargePageRebuildTimer;
  /* 0x0358 */ struct _MMPFNLIST_SHORT StandbyPageList[8][4];
  /* 0x0680 */ struct _RTL_BITMAP FreePageListHeadsBitmap[2];
  /* 0x06a0 */ unsigned long FreePageListHeadsBitmapBuffer[16];
  /* 0x06e0 */ volatile unsigned __int64 FreeCount[2];
  /* 0x06f0 */ unsigned __int64 TotalPages[4];
  /* 0x0710 */ unsigned __int64 TotalPagesEntireNode;
  /* 0x0718 */ unsigned long CurrentHugeRangeColor;
  /* 0x0720 */ unsigned __int64 HugeIoRangeFreeCount[2];
  /* 0x0730 */ unsigned long MmShiftedColor;
  /* 0x0734 */ unsigned long Color;
  /* 0x0738 */ volatile unsigned __int64 ChannelFreeCount[2][4];
  struct
  {
    struct /* bitfield */
    {
      /* 0x0778 */ unsigned long ChannelsHotCold : 1; /* bit position: 0 */
      /* 0x0778 */ unsigned long Spare : 31; /* bit position: 1 */
    }; /* bitfield */
  } /* size: 0x0004 */ Flags;
  /* 0x0780 */ struct _EX_PUSH_LOCK NodeLock;
  /* 0x0788 */ unsigned __int64 ZeroThreadHugeMapLock;
  /* 0x0790 */ volatile unsigned char LargeListMoveInProgress;
  /* 0x0791 */ unsigned char ChannelStatus;
  /* 0x0792 */ unsigned char ChannelOrdering[4];
  /* 0x0796 */ unsigned char LockedChannelOrdering[4];
  /* 0x079a */ unsigned char PowerAttribute[4];
  /* 0x07a0 */ unsigned __int64 LargePageLock;
  /* 0x07a8 */ struct _MI_PAGE_COLORS PageColorTable;
  /* 0x07b8 */ long __PADDING__[2];
} MI_NODE_INFORMATION, *PMI_NODE_INFORMATION; /* size: 0x07c0 */

