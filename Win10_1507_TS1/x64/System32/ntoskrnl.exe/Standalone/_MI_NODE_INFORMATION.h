typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

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
  /* 0x0000 */ unsigned __int64 LargePageFreeCount[2];
  /* 0x0010 */ struct _LIST_ENTRY LargePages[4][2][2];
  /* 0x0110 */ unsigned __int64 LargePagesCount[4][2][2];
  /* 0x0190 */ struct _MMPFNLIST_SHORT StandbyPageList[8][4];
  /* 0x0490 */ volatile unsigned __int64 FreeCount[2];
  /* 0x04a0 */ unsigned __int64 TotalPages[4];
  /* 0x04c0 */ unsigned __int64 TotalPagesEntireNode;
  /* 0x04c8 */ unsigned long MmShiftedColor;
  /* 0x04cc */ unsigned long Color;
  /* 0x04d0 */ volatile unsigned __int64 ChannelFreeCount[2][4];
  struct // _TAG_UNNAMED_142
  {
    struct /* bitfield */
    {
      /* 0x0510 */ unsigned long ChannelsHotCold : 1; /* bit position: 0 */
      /* 0x0510 */ unsigned long Spare : 31; /* bit position: 1 */
    }; /* bitfield */
  } /* size: 0x0004 */ Flags;
  /* 0x0518 */ struct _EX_PUSH_LOCK NodeLock;
  /* 0x0520 */ unsigned char ChannelStatus;
  /* 0x0521 */ unsigned char ChannelOrdering[4];
  /* 0x0525 */ unsigned char LockedChannelOrdering[4];
  /* 0x0529 */ unsigned char PowerAttribute[4];
  /* 0x0530 */ unsigned __int64 LargePageLock;
} MI_NODE_INFORMATION, *PMI_NODE_INFORMATION; /* size: 0x0538 */

