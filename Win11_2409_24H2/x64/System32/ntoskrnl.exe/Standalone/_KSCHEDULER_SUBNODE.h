typedef struct _GROUP_AFFINITY
{
  /* 0x0000 */ unsigned __int64 Mask;
  /* 0x0008 */ unsigned short Group;
  /* 0x000a */ unsigned short Reserved[3];
} GROUP_AFFINITY, *PGROUP_AFFINITY; /* size: 0x0010 */

typedef struct _flags
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char SmtSetsPresent : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned char Fill : 7; /* bit position: 1 */
  }; /* bitfield */
} flags, *Pflags; /* size: 0x0001 */

typedef union _KQOS_GROUPING_SETS
{
  /* 0x0000 */ unsigned __int64 SingleCoreSet;
  /* 0x0008 */ unsigned __int64 SmtSet;
} KQOS_GROUPING_SETS, *PKQOS_GROUPING_SETS; /* size: 0x0010 */

typedef union _KRANK_LIST
{
  union
  {
    /* 0x0000 */ unsigned char Ranks[64];
    /* 0x0000 */ unsigned __int64 AsUlong64s[8];
  }; /* size: 0x0040 */
} KRANK_LIST, *PKRANK_LIST; /* size: 0x0040 */

typedef struct _KSCHEDULER_SUBNODE
{
  /* 0x0000 */ unsigned __int64 SubNodeLock;
  /* 0x0008 */ unsigned __int64 IdleNonParkedCpuSet;
  union
  {
    struct
    {
      /* 0x0010 */ unsigned __int64 IdleCpuSet;
      /* 0x0018 */ unsigned __int64 IdleSmtSet;
      /* 0x0020 */ unsigned __int64 IdleModuleSet;
    }; /* size: 0x0018 */
    /* 0x0010 */ unsigned __int64 IdleIsolationUnitSet[2];
  }; /* size: 0x0018 */
  /* 0x0028 */ unsigned __int64 NonPairedSmtSet;
  /* 0x0030 */ unsigned __int64 ThreadQosGroupingSet;
  /* 0x0038 */ unsigned __int64 Spare1[1];
  /* 0x0040 */ unsigned __int64 DeepIdleSet;
  /* 0x0048 */ unsigned __int64 IdleConstrainedSet;
  /* 0x0050 */ unsigned __int64 NonParkedSet;
  /* 0x0058 */ unsigned __int64 ParkRequestSet;
  /* 0x0060 */ unsigned __int64 SoftParkRequestSet;
  /* 0x0068 */ unsigned __int64 ForceParkRequestSet;
  /* 0x0070 */ unsigned __int64 NonIsrTargetedSet;
  /* 0x0078 */ long ParkLock;
  /* 0x007c */ unsigned char ProcessSeed;
  /* 0x007d */ unsigned char Spare5[3];
  union
  {
    /* 0x0080 */ struct _GROUP_AFFINITY Affinity;
    struct
    {
      /* 0x0080 */ unsigned char AffinityFill[10];
      /* 0x008a */ unsigned short ParentNodeNumber;
      /* 0x008c */ unsigned short SubNodeNumber;
      /* 0x008e */ unsigned short Spare;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
  /* 0x0090 */ unsigned __int64 SiblingMask;
  /* 0x0098 */ unsigned __int64 SharedReadyQueueMask;
  /* 0x00a0 */ unsigned __int64 StrideMask;
  /* 0x00a8 */ unsigned __int64 LLCLeaders;
  /* 0x00b0 */ unsigned long Lowest;
  /* 0x00b4 */ unsigned long Highest;
  /* 0x00b8 */ struct _flags Flags;
  /* 0x00b9 */ unsigned char WorkloadClasses;
  /* 0x00c0 */ struct _KHETERO_PROCESSOR_SET* HeteroSets;
  /* 0x00c8 */ union _KRANK_LIST* PerformanceRanks;
  /* 0x00d0 */ union _KRANK_LIST* EfficiencyRanks;
  /* 0x00d8 */ unsigned __int64 Spare6[5];
  /* 0x0100 */ unsigned __int64 PpmConfiguredQosSets[7];
  /* 0x0138 */ unsigned __int64 Spare7;
  /* 0x0140 */ union _KQOS_GROUPING_SETS PpmQosGroupingSets;
  /* 0x0150 */ unsigned __int64 Spare8[6];
  /* 0x0180 */ volatile unsigned __int64 StealableLocalReadyQueues;
  /* 0x0188 */ volatile unsigned __int64 StealableSharedReadyQueues;
  /* 0x0190 */ volatile unsigned __int64 StealableStandbyThreads;
  /* 0x0198 */ unsigned __int64 Spare9[5];
  /* 0x01c0 */ union _KRANK_LIST SoftParkRanks;
  /* 0x0200 */ union _KRANK_LIST CoreShareCounts;
  /* 0x0240 */ union _KRANK_LIST ModuleShareCounts;
  /* 0x0280 */ union _KRANK_LIST ThreadQosGroupingCoreShareCounts;
  /* 0x02c0 */ union _KRANK_LIST ThreadQosGroupingModuleShareCounts;
} KSCHEDULER_SUBNODE, *PKSCHEDULER_SUBNODE; /* size: 0x0300 */

