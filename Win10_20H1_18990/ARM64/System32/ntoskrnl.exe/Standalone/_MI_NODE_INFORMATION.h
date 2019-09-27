typedef struct _MI_FREE_LARGE_PAGES
{
  /* 0x0000 */ unsigned __int64 LargePageFreeCount[2];
  /* 0x0010 */ unsigned __int64 LargePageFreeCountHiLow[2][2];
  /* 0x0030 */ unsigned __int64 LargePagesCount[4][2][2];
  /* 0x00b0 */ struct _MI_FREE_LARGE_PAGE_LIST* LargePageEntries[4][2][2];
} MI_FREE_LARGE_PAGES, *PMI_FREE_LARGE_PAGES; /* size: 0x0130 */

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

typedef enum _MI_WRITE_TYPES
{
  WriteTypeCached = 0,
  WriteTypeNonTemporal = 1,
  WriteTypeMaximum = 2,
} MI_WRITE_TYPES, *PMI_WRITE_TYPES;

typedef struct _MI_WRITE_CALIBRATION
{
  /* 0x0000 */ unsigned long MaximumNumberProcessors;
  /* 0x0004 */ enum _MI_WRITE_TYPES OptimalWriteType;
  /* 0x0008 */ unsigned __int64 PerProcessorNumberOfBytes;
  /* 0x0010 */ unsigned long OptimalWriteProcessors[2];
  /* 0x0018 */ struct _MI_WRITE_MODES* RawTimeStamps;
} MI_WRITE_CALIBRATION, *PMI_WRITE_CALIBRATION; /* size: 0x0020 */

typedef struct _GROUP_AFFINITY
{
  /* 0x0000 */ unsigned __int64 Mask;
  /* 0x0008 */ unsigned short Group;
  /* 0x000a */ unsigned short Reserved[3];
} GROUP_AFFINITY, *PGROUP_AFFINITY; /* size: 0x0010 */

typedef struct _MI_NODE_INFORMATION
{
  /* 0x0000 */ struct _MI_FREE_LARGE_PAGES FreeLargePages[3];
  /* 0x0390 */ struct _MI_REBUILD_LARGE_PAGE_TIMER LargePageRebuildTimer;
  /* 0x03b8 */ struct _MMPFNLIST_SHORT StandbyPageList[8][4];
  /* 0x0700 */ struct _RTL_BITMAP FreePageListHeadsBitmap[2];
  /* 0x0720 */ unsigned long FreePageListHeadsBitmapBuffer[16];
  /* 0x0760 */ volatile unsigned __int64 FreeCount[2];
  /* 0x0770 */ unsigned __int64 TotalPages[4];
  /* 0x0790 */ unsigned __int64 TotalPagesEntireNode;
  /* 0x0798 */ unsigned long CurrentHugeRangeColor;
  /* 0x07a0 */ unsigned __int64 HugeIoRangeFreeCount[2];
  /* 0x07b0 */ unsigned long MmShiftedColor;
  /* 0x07b4 */ unsigned long Color;
  /* 0x07b8 */ volatile unsigned __int64 ChannelFreeCount[2][4];
  struct
  {
    struct /* bitfield */
    {
      /* 0x07f8 */ unsigned long ChannelsHotCold : 1; /* bit position: 0 */
      /* 0x07f8 */ unsigned long Spare : 31; /* bit position: 1 */
    }; /* bitfield */
  } /* size: 0x0004 */ Flags;
  /* 0x07fc */ unsigned long LargeListMoveInProgress;
  /* 0x0800 */ struct _MI_LARGE_PAGE_LISTS_CHANGING* LargeListWaiters;
  /* 0x0808 */ struct _EX_PUSH_LOCK NodeLock;
  /* 0x0810 */ unsigned __int64 ZeroThreadHugeMapLock;
  /* 0x0818 */ unsigned char ChannelStatus;
  /* 0x0819 */ unsigned char ChannelOrdering[4];
  /* 0x081d */ unsigned char LockedChannelOrdering[4];
  /* 0x0821 */ unsigned char PowerAttribute[4];
  /* 0x0828 */ unsigned __int64 LargePageLock;
  /* 0x0830 */ struct _MI_PAGE_COLORS PageColorTable;
  /* 0x0840 */ unsigned __int64 NumberOfPagesGoingBad;
  /* 0x0848 */ struct _MI_WRITE_CALIBRATION WriteCalibration;
  /* 0x0868 */ void* BootZeroContext;
  /* 0x0870 */ void* BootZeroPageTimesPerProcessor;
  /* 0x0878 */ void* ZeroingVaBase;
  /* 0x0880 */ unsigned __int64 TotalBytesToZero;
  /* 0x0888 */ unsigned __int64 PerProcessorNumberOfBytesToZero;
  /* 0x0890 */ void* ZeroingContext;
  /* 0x0898 */ volatile unsigned long ZeroingProcessorCount;
  /* 0x089c */ volatile long ZeroHand;
  /* 0x08a0 */ volatile long FinishedProcessors;
  /* 0x08a8 */ unsigned __int64 CyclesToZeroOneLargePage;
  /* 0x08b0 */ unsigned __int64* ScaledCyclesToZeroOneLargePage;
  /* 0x08b8 */ struct _GROUP_AFFINITY GroupAffinity;
  /* 0x08c8 */ unsigned short ProcessorCount;
  /* 0x08ca */ unsigned char BackgroundZeroingActive;
  /* 0x08d0 */ struct _PHYSICAL_MEMORY_DESCRIPTOR* ZeroingPhysicalMemoryBlock;
  /* 0x08d8 */ long __PADDING__[10];
} MI_NODE_INFORMATION, *PMI_NODE_INFORMATION; /* size: 0x0900 */

