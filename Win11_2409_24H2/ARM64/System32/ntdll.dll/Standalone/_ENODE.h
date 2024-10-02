typedef struct _KGROUP_MASK
{
  /* 0x0000 */ unsigned __int64 Masks[2];
} KGROUP_MASK, *PKGROUP_MASK; /* size: 0x0010 */

typedef struct _KNODE_SUBNODE_SEARCH_RANKS
{
  /* 0x0000 */ unsigned char Ranks[32];
} KNODE_SUBNODE_SEARCH_RANKS, *PKNODE_SUBNODE_SEARCH_RANKS; /* size: 0x0020 */

typedef struct _KNODE
{
  /* 0x0000 */ unsigned short NodeNumber;
  /* 0x0002 */ unsigned short PrimaryNodeNumber;
  /* 0x0004 */ unsigned long ProximityId;
  /* 0x0008 */ unsigned short MaximumProcessors;
  struct
  {
    struct /* bitfield */
    {
      /* 0x000a */ unsigned char ProcessorOnly : 1; /* bit position: 0 */
      /* 0x000a */ unsigned char GroupsAssigned : 1; /* bit position: 1 */
      /* 0x000a */ unsigned char MeasurableDistance : 1; /* bit position: 2 */
    }; /* bitfield */
  } /* size: 0x0001 */ Flags;
  /* 0x000b */ unsigned char GroupSeed;
  /* 0x000c */ unsigned char PrimaryGroup;
  /* 0x000d */ unsigned char Padding[3];
  /* 0x0010 */ struct _KGROUP_MASK ActiveGroups;
  /* 0x0020 */ struct _KSCHEDULER_SUBNODE* SchedulerSubNodes[32];
  /* 0x0120 */ unsigned long ActiveTopologyElements[5];
  /* 0x0134 */ struct _KNODE_SUBNODE_SEARCH_RANKS PerformanceSearchRanks[1];
  /* 0x0154 */ struct _KNODE_SUBNODE_SEARCH_RANKS EfficiencySearchRanks[1];
  /* 0x0174 */ long __PADDING__[1];
} KNODE, *PKNODE; /* size: 0x0178 */

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

typedef struct _ENODE
{
  /* 0x0000 */ struct _KNODE Ncb;
  /* 0x0178 */ struct _WORK_QUEUE_ITEM HotAddProcessorWorkItem;
  /* 0x0198 */ long __PADDING__[26];
} ENODE, *PENODE; /* size: 0x0200 */

