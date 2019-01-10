typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

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
  /* 0x0000 */ unsigned long LargePageFreeCount[2];
  /* 0x0008 */ struct _LIST_ENTRY LargePages[1][2][2];
  /* 0x0028 */ unsigned long LargePagesCount[1][2][2];
  /* 0x0038 */ volatile unsigned long FreeCount[2];
  /* 0x0040 */ unsigned long TotalPages[1];
  /* 0x0044 */ unsigned long TotalPagesEntireNode;
  /* 0x0048 */ unsigned long MmShiftedColor;
  /* 0x004c */ unsigned long Color;
  /* 0x0050 */ volatile unsigned long ChannelFreeCount[2][1];
  struct
  {
    struct /* bitfield */
    {
      /* 0x0058 */ unsigned long ChannelsHotCold : 1; /* bit position: 0 */
      /* 0x0058 */ unsigned long Spare : 31; /* bit position: 1 */
    }; /* bitfield */
  } /* size: 0x0004 */ Flags;
  /* 0x005c */ struct _EX_PUSH_LOCK NodeLock;
  /* 0x0060 */ unsigned char ChannelStatus;
  /* 0x0061 */ unsigned char ChannelOrdering[1];
  /* 0x0062 */ unsigned char LockedChannelOrdering[1];
  /* 0x0063 */ unsigned char PowerAttribute[1];
  /* 0x0064 */ unsigned long LargePageLock;
} MI_NODE_INFORMATION, *PMI_NODE_INFORMATION; /* size: 0x0068 */

