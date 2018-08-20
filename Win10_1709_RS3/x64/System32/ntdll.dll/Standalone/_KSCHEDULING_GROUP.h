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
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _RTL_BALANCED_NODE
{
  union
  {
    /* 0x0000 */ struct _RTL_BALANCED_NODE* Children[2];
    struct
    {
      /* 0x0000 */ struct _RTL_BALANCED_NODE* Left;
      /* 0x0008 */ struct _RTL_BALANCED_NODE* Right;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
  union
  {
    /* 0x0010 */ unsigned char Red : 1; /* bit position: 0 */
    /* 0x0010 */ unsigned char Balance : 2; /* bit position: 0 */
    /* 0x0010 */ unsigned __int64 ParentValue;
  }; /* size: 0x0008 */
} RTL_BALANCED_NODE, *PRTL_BALANCED_NODE; /* size: 0x0018 */

typedef struct _RTL_RB_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
  union
  {
    /* 0x0008 */ unsigned char Encoded : 1; /* bit position: 0 */
    /* 0x0008 */ struct _RTL_BALANCED_NODE* Min;
  }; /* size: 0x0008 */
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0010 */

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
  /* 0x0058 */ struct _RTL_BALANCED_NODE QueueNode;
  struct /* bitfield */
  {
    /* 0x0070 */ unsigned char Inserted : 1; /* bit position: 0 */
    /* 0x0070 */ unsigned char MaxOverQuota : 1; /* bit position: 1 */
    /* 0x0070 */ unsigned char MinOverQuota : 1; /* bit position: 2 */
    /* 0x0070 */ unsigned char RankBias : 1; /* bit position: 3 */
    /* 0x0070 */ unsigned char SoftCap : 1; /* bit position: 4 */
    /* 0x0070 */ unsigned char ShareRankOwner : 1; /* bit position: 5 */
    /* 0x0070 */ unsigned char Spare1 : 2; /* bit position: 6 */
  }; /* bitfield */
  /* 0x0071 */ unsigned char Depth;
  /* 0x0072 */ unsigned short ReadySummary;
  /* 0x0074 */ unsigned long Rank;
  /* 0x0078 */ volatile unsigned long* ShareRank;
  /* 0x0080 */ volatile unsigned long OwnerShareRank;
  /* 0x0088 */ struct _LIST_ENTRY ReadyListHead[16];
  /* 0x0188 */ struct _RTL_RB_TREE ChildScbQueue;
  /* 0x0198 */ struct _KSCB* Parent;
  /* 0x01a0 */ struct _KSCB* Root;
} KSCB, *PKSCB; /* size: 0x01a8 */

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
  }; /* size: 0x0010 */
  /* 0x0048 */ struct _KDPC* NotificationDpc;
  /* 0x0050 */ struct _LIST_ENTRY ChildList;
  /* 0x0060 */ struct _KSCHEDULING_GROUP* Parent;
  /* 0x0080 */ struct _KSCB PerProcessor[1];
  /* 0x0228 */ long __PADDING__[6];
} KSCHEDULING_GROUP, *PKSCHEDULING_GROUP; /* size: 0x0240 */

