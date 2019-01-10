typedef struct _MI_FREE_LARGE_PAGES
{
  /* 0x0000 */ unsigned long LargePageFreeCount[2];
  /* 0x0008 */ unsigned long LargePagesCount[1][2][2];
  /* 0x0018 */ struct _MI_FREE_LARGE_PAGE_LIST* LargePageEntries[1][2][2];
} MI_FREE_LARGE_PAGES, *PMI_FREE_LARGE_PAGES; /* size: 0x0028 */

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
} MI_REBUILD_LARGE_PAGE_TIMER, *PMI_REBUILD_LARGE_PAGE_TIMER; /* size: 0x0014 */

typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0004 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0008 */

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

typedef struct _MI_PAGE_COLORS
{
  /* 0x0000 */ unsigned long PageSize[3];
} MI_PAGE_COLORS, *PMI_PAGE_COLORS; /* size: 0x000c */

typedef struct _MI_NODE_INFORMATION
{
  /* 0x0000 */ struct _MI_FREE_LARGE_PAGES FreeLargePages[2];
  /* 0x0050 */ struct _MI_REBUILD_LARGE_PAGE_TIMER LargePageRebuildTimer;
  /* 0x0080 */ struct _RTL_BITMAP FreePageListHeadsBitmap[2];
  /* 0x0090 */ unsigned long FreePageListHeadsBitmapBuffer[16];
  /* 0x00d0 */ volatile unsigned long FreeCount[2];
  /* 0x00d8 */ unsigned long TotalPages[1];
  /* 0x00dc */ unsigned long TotalPagesEntireNode;
  /* 0x00e0 */ unsigned long MmShiftedColor;
  /* 0x00e4 */ unsigned long Color;
  /* 0x00e8 */ volatile unsigned long ChannelFreeCount[2][1];
  struct
  {
    struct /* bitfield */
    {
      /* 0x00f0 */ unsigned long ChannelsHotCold : 1; /* bit position: 0 */
      /* 0x00f0 */ unsigned long Spare : 31; /* bit position: 1 */
    }; /* bitfield */
  } /* size: 0x0004 */ Flags;
  /* 0x00f4 */ struct _EX_PUSH_LOCK NodeLock;
  /* 0x00f8 */ volatile unsigned char LargeListMoveInProgress;
  /* 0x00f9 */ unsigned char ChannelStatus;
  /* 0x00fa */ unsigned char ChannelOrdering[1];
  /* 0x00fb */ unsigned char LockedChannelOrdering[1];
  /* 0x00fc */ unsigned char PowerAttribute[1];
  /* 0x0100 */ unsigned long LargePageLock;
  /* 0x0104 */ struct _MI_PAGE_COLORS PageColorTable;
  /* 0x0110 */ long __PADDING__[12];
} MI_NODE_INFORMATION, *PMI_NODE_INFORMATION; /* size: 0x0140 */

