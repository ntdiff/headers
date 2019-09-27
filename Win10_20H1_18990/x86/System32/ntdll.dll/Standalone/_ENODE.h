typedef struct _GROUP_AFFINITY
{
  /* 0x0000 */ unsigned long Mask;
  /* 0x0004 */ unsigned short Group;
  /* 0x0006 */ unsigned short Reserved[3];
} GROUP_AFFINITY, *PGROUP_AFFINITY; /* size: 0x000c */

typedef struct _flags
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char Removable : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned char GroupAssigned : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned char GroupCommitted : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned char GroupAssignmentFixed : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned char ProcessorOnly : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned char Fill : 3; /* bit position: 5 */
  }; /* bitfield */
} flags, *Pflags; /* size: 0x0001 */

typedef struct _KHETERO_PROCESSOR_SET
{
  /* 0x0000 */ unsigned long IdealMask;
  /* 0x0004 */ unsigned long PreferredMask;
  /* 0x0008 */ unsigned long AvailableMask;
} KHETERO_PROCESSOR_SET, *PKHETERO_PROCESSOR_SET; /* size: 0x000c */

typedef union _KQOS_GROUPING_SETS
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long SingleCoreSet;
      /* 0x0004 */ unsigned long SmtSet;
    }; /* size: 0x0008 */
    /* 0x0000 */ __int64 QosGroupingMasks;
  }; /* size: 0x0008 */
} KQOS_GROUPING_SETS, *PKQOS_GROUPING_SETS; /* size: 0x0008 */

typedef struct _KNODE
{
  /* 0x0000 */ unsigned long IdleNonParkedCpuSet;
  /* 0x0004 */ unsigned long IdleSmtSet;
  /* 0x0008 */ unsigned long NonPairedSmtSet;
  /* 0x000c */ unsigned long IdleCpuSet;
  /* 0x0040 */ unsigned long DeepIdleSet;
  /* 0x0044 */ unsigned long IdleConstrainedSet;
  /* 0x0048 */ unsigned long NonParkedSet;
  /* 0x004c */ unsigned long SoftParkedSet;
  /* 0x0050 */ unsigned long NonIsrTargetedSet;
  /* 0x0054 */ long ParkLock;
  /* 0x0058 */ unsigned short ThreadSeed;
  /* 0x005a */ unsigned short ProcessSeed;
  /* 0x0080 */ unsigned long SiblingMask;
  union
  {
    /* 0x0084 */ struct _GROUP_AFFINITY Affinity;
    struct
    {
      /* 0x0084 */ unsigned char AffinityFill[6];
      /* 0x008a */ unsigned short NodeNumber;
      /* 0x008c */ unsigned short PrimaryNodeNumber;
      /* 0x008e */ unsigned short Spare0;
    }; /* size: 0x000c */
  }; /* size: 0x000c */
  /* 0x0090 */ unsigned long SharedReadyQueueMask;
  /* 0x0094 */ unsigned long StrideMask;
  /* 0x0098 */ unsigned long ProximityId;
  /* 0x009c */ unsigned long Lowest;
  /* 0x00a0 */ unsigned long Highest;
  /* 0x00a4 */ unsigned char MaximumProcessors;
  /* 0x00a5 */ struct _flags Flags;
  /* 0x00a6 */ unsigned char Spare10;
  /* 0x00a8 */ struct _KHETERO_PROCESSOR_SET HeteroSets[5];
  /* 0x00e4 */ unsigned long PpmConfiguredQosSets[5];
  /* 0x00f8 */ unsigned long Spare11;
  /* 0x0100 */ union _KQOS_GROUPING_SETS QosGroupingSets;
  /* 0x0108 */ unsigned long QosPreemptibleSet;
  /* 0x010c */ unsigned long LLCLeaders;
  /* 0x0110 */ long __PADDING__[12];
} KNODE, *PKNODE; /* size: 0x0140 */

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

typedef struct _ENODE
{
  /* 0x0000 */ struct _KNODE Ncb;
  /* 0x0140 */ struct _WORK_QUEUE_ITEM HotAddProcessorWorkItem;
  /* 0x0150 */ long __PADDING__[12];
} ENODE, *PENODE; /* size: 0x0180 */

