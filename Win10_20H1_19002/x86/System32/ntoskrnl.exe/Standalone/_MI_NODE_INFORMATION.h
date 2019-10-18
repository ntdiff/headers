typedef struct _MI_FREE_LARGE_PAGES
{
  /* 0x0000 */ unsigned long LargePageFreeCount[2];
  /* 0x0008 */ unsigned long LargePageFreeCountHiLow[2][2];
  /* 0x0018 */ unsigned long LargePagesCount[1][2][2];
  /* 0x0028 */ struct _MI_FREE_LARGE_PAGE_LIST* LargePageEntries[1][2][2];
} MI_FREE_LARGE_PAGES, *PMI_FREE_LARGE_PAGES; /* size: 0x0038 */

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
  /* 0x0008 */ unsigned long PerProcessorNumberOfBytes;
  /* 0x000c */ unsigned long OptimalWriteProcessors[2];
  /* 0x0014 */ struct _MI_WRITE_MODES* RawTimeStamps;
} MI_WRITE_CALIBRATION, *PMI_WRITE_CALIBRATION; /* size: 0x0018 */

typedef struct _GROUP_AFFINITY
{
  /* 0x0000 */ unsigned long Mask;
  /* 0x0004 */ unsigned short Group;
  /* 0x0006 */ unsigned short Reserved[3];
} GROUP_AFFINITY, *PGROUP_AFFINITY; /* size: 0x000c */

typedef struct _MI_NODE_INFORMATION
{
  /* 0x0000 */ struct _MI_FREE_LARGE_PAGES FreeLargePages[2];
  /* 0x0070 */ struct _MI_REBUILD_LARGE_PAGE_TIMER LargePageRebuildTimer;
  /* 0x00c0 */ struct _RTL_BITMAP FreePageListHeadsBitmap[2];
  /* 0x00d0 */ unsigned long FreePageListHeadsBitmapBuffer[16];
  /* 0x0110 */ volatile unsigned long FreeCount[2];
  /* 0x0118 */ unsigned long TotalPages[1];
  /* 0x011c */ unsigned long TotalPagesEntireNode;
  /* 0x0120 */ unsigned long MmShiftedColor;
  /* 0x0124 */ unsigned long Color;
  /* 0x0128 */ volatile unsigned long ChannelFreeCount[2][1];
  struct
  {
    struct /* bitfield */
    {
      /* 0x0130 */ unsigned long ChannelsHotCold : 1; /* bit position: 0 */
      /* 0x0130 */ unsigned long Spare : 31; /* bit position: 1 */
    }; /* bitfield */
  } /* size: 0x0004 */ Flags;
  /* 0x0134 */ unsigned long LargeListMoveInProgress;
  /* 0x0138 */ struct _MI_LARGE_PAGE_LISTS_CHANGING* LargeListWaiters;
  /* 0x013c */ struct _EX_PUSH_LOCK NodeLock;
  /* 0x0140 */ unsigned char ChannelStatus;
  /* 0x0141 */ unsigned char ChannelOrdering[1];
  /* 0x0142 */ unsigned char LockedChannelOrdering[1];
  /* 0x0143 */ unsigned char PowerAttribute[1];
  /* 0x0144 */ unsigned long LargePageLock;
  /* 0x0148 */ struct _MI_PAGE_COLORS PageColorTable;
  /* 0x0154 */ unsigned long NumberOfPagesGoingBad;
  /* 0x0158 */ struct _MI_WRITE_CALIBRATION WriteCalibration;
  /* 0x0170 */ void* BootZeroContext;
  /* 0x0174 */ void* BootZeroPageTimesPerProcessor;
  /* 0x0178 */ void* ZeroingVaBase;
  /* 0x017c */ unsigned long TotalBytesToZero;
  /* 0x0180 */ unsigned long PerProcessorNumberOfBytesToZero;
  /* 0x0184 */ void* ZeroingContext;
  /* 0x0188 */ volatile unsigned long ZeroingProcessorCount;
  /* 0x018c */ volatile long ZeroHand;
  /* 0x0190 */ volatile long FinishedProcessors;
  /* 0x0198 */ unsigned __int64 CyclesToZeroOneLargePage;
  /* 0x01a0 */ unsigned __int64* ScaledCyclesToZeroOneLargePage;
  /* 0x01a4 */ struct _GROUP_AFFINITY GroupAffinity;
  /* 0x01b0 */ unsigned short ProcessorCount;
  /* 0x01b2 */ unsigned char BackgroundZeroingActive;
  /* 0x01b4 */ struct _PHYSICAL_MEMORY_DESCRIPTOR* ZeroingPhysicalMemoryBlock;
  /* 0x01b8 */ long __PADDING__[2];
} MI_NODE_INFORMATION, *PMI_NODE_INFORMATION; /* size: 0x01c0 */

