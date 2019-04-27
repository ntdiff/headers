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

