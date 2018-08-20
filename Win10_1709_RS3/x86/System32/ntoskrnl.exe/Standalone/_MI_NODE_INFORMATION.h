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

typedef struct _MI_NODE_INFORMATION
{
  /* 0x0000 */ unsigned long LargePageFreeCount[2][2];
  /* 0x0010 */ unsigned long LargePagesCount[1][2][2][2];
  /* 0x0030 */ struct _LIST_ENTRY LargePages[1][2][2][1];
  /* 0x0050 */ struct _LIST_ENTRY MediumPages[16][1][2][2];
  /* 0x0250 */ unsigned long MediumPagesCount[16][1][2][2];
  /* 0x0350 */ struct _MI_REBUILD_LARGE_PAGE_TIMER LargePageRebuildTimer;
  /* 0x0380 */ struct _RTL_BITMAP FreePageListHeadsBitmap[2];
  /* 0x0390 */ unsigned long FreePageListHeadsBitmapBuffer[16];
  /* 0x03d0 */ volatile unsigned long FreeCount[2];
  /* 0x03d8 */ unsigned long TotalPages[1];
  /* 0x03dc */ unsigned long TotalPagesEntireNode;
  /* 0x03e0 */ unsigned long MmShiftedColor;
  /* 0x03e4 */ unsigned long Color;
  /* 0x03e8 */ volatile unsigned long ChannelFreeCount[2][1];
  struct // _TAG_UNNAMED_162
  {
    struct /* bitfield */
    {
      /* 0x03f0 */ unsigned long ChannelsHotCold : 1; /* bit position: 0 */
      /* 0x03f0 */ unsigned long Spare : 31; /* bit position: 1 */
    }; /* bitfield */
  } /* size: 0x0004 */ Flags;
  /* 0x03f4 */ struct _EX_PUSH_LOCK NodeLock;
  /* 0x03f8 */ unsigned char ChannelStatus;
  /* 0x03f9 */ unsigned char ChannelOrdering[1];
  /* 0x03fa */ unsigned char LockedChannelOrdering[1];
  /* 0x03fb */ unsigned char PowerAttribute[1];
  /* 0x03fc */ unsigned long LargePageLock;
} MI_NODE_INFORMATION, *PMI_NODE_INFORMATION; /* size: 0x0400 */

