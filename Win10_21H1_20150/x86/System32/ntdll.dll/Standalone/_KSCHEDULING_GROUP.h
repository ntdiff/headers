typedef struct _KSCHEDULING_GROUP_POLICY
{
  union
  {
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ unsigned short Weight;
    struct
    {
      /* 0x0000 */ unsigned short MinRate;
      /* 0x0002 */ unsigned short MaxRate;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
  union
  {
    /* 0x0004 */ unsigned long AllFlags;
    struct /* bitfield */
    {
      /* 0x0004 */ unsigned long Type : 1; /* bit position: 0 */
      /* 0x0004 */ unsigned long Disabled : 1; /* bit position: 1 */
      /* 0x0004 */ unsigned long RankBias : 1; /* bit position: 2 */
      /* 0x0004 */ unsigned long Spare1 : 29; /* bit position: 3 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} KSCHEDULING_GROUP_POLICY, *PKSCHEDULING_GROUP_POLICY; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _RTL_BALANCED_NODE
{
  union
  {
    /* 0x0000 */ struct _RTL_BALANCED_NODE* Children[2];
    struct
    {
      /* 0x0000 */ struct _RTL_BALANCED_NODE* Left;
      /* 0x0004 */ struct _RTL_BALANCED_NODE* Right;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
  union
  {
    /* 0x0008 */ unsigned char Red : 1; /* bit position: 0 */
    /* 0x0008 */ unsigned char Balance : 2; /* bit position: 0 */
    /* 0x0008 */ unsigned long ParentValue;
  }; /* size: 0x0004 */
} RTL_BALANCED_NODE, *PRTL_BALANCED_NODE; /* size: 0x000c */

typedef struct _RTL_RB_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
  union
  {
    /* 0x0004 */ unsigned char Encoded : 1; /* bit position: 0 */
    /* 0x0004 */ struct _RTL_BALANCED_NODE* Min;
  }; /* size: 0x0004 */
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0008 */

typedef struct _KSCB
{
  /* 0x0000 */ unsigned __int64 GenerationCycles;
  /* 0x0008 */ unsigned __int64 MinQuotaCycleTarget;
  /* 0x0010 */ unsigned __int64 MaxQuotaCycleTarget;
  /* 0x0018 */ unsigned __int64 RankCycleTarget;
  /* 0x0020 */ unsigned __int64 LongTermCycles;
  /* 0x0028 */ unsigned __int64 LastReportedCycles;
  /* 0x0030 */ volatile unsigned __int64 OverQuotaHistory;
  /* 0x0038 */ unsigned __int64 ReadyTime;
  /* 0x0040 */ unsigned __int64 InsertTime;
  /* 0x0048 */ struct _LIST_ENTRY PerProcessorList;
  /* 0x0050 */ struct _RTL_BALANCED_NODE QueueNode;
  struct /* bitfield */
  {
    /* 0x005c */ unsigned char Inserted : 1; /* bit position: 0 */
    /* 0x005c */ unsigned char MaxOverQuota : 1; /* bit position: 1 */
    /* 0x005c */ unsigned char MinOverQuota : 1; /* bit position: 2 */
    /* 0x005c */ unsigned char RankBias : 1; /* bit position: 3 */
    /* 0x005c */ unsigned char SoftCap : 1; /* bit position: 4 */
    /* 0x005c */ unsigned char ShareRankOwner : 1; /* bit position: 5 */
    /* 0x005c */ unsigned char Spare1 : 2; /* bit position: 6 */
  }; /* bitfield */
  /* 0x005d */ unsigned char Depth;
  /* 0x005e */ unsigned short ReadySummary;
  /* 0x0060 */ unsigned long Rank;
  /* 0x0064 */ volatile unsigned long* ShareRank;
  /* 0x0068 */ volatile unsigned long OwnerShareRank;
  /* 0x006c */ struct _LIST_ENTRY ReadyListHead[16];
  /* 0x00ec */ struct _RTL_RB_TREE ChildScbQueue;
  /* 0x00f4 */ struct _KSCB* Parent;
  /* 0x00f8 */ struct _KSCB* Root;
  /* 0x00fc */ long __PADDING__[1];
} KSCB, *PKSCB; /* size: 0x0100 */

typedef struct _KSCHEDULING_GROUP
{
  /* 0x0000 */ struct _KSCHEDULING_GROUP_POLICY Policy;
  /* 0x0008 */ unsigned long RelativeWeight;
  /* 0x000c */ unsigned long ChildMinRate;
  /* 0x0010 */ unsigned long ChildMinWeight;
  /* 0x0014 */ unsigned long ChildTotalWeight;
  /* 0x0018 */ unsigned __int64 QueryHistoryTimeStamp;
  /* 0x0020 */ __int64 NotificationCycles;
  /* 0x0028 */ __int64 MaxQuotaLimitCycles;
  /* 0x0030 */ volatile __int64 MaxQuotaCyclesRemaining;
  union
  {
    /* 0x0038 */ struct _LIST_ENTRY SchedulingGroupList;
    /* 0x0038 */ struct _LIST_ENTRY Sibling;
  }; /* size: 0x0008 */
  /* 0x0040 */ struct _KDPC* NotificationDpc;
  /* 0x0044 */ struct _LIST_ENTRY ChildList;
  /* 0x004c */ struct _KSCHEDULING_GROUP* Parent;
  /* 0x0080 */ struct _KSCB PerProcessor[1];
} KSCHEDULING_GROUP, *PKSCHEDULING_GROUP; /* size: 0x0180 */

