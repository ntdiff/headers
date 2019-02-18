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
  /* 0x0000 */ unsigned __int64 IdealMask;
  /* 0x0008 */ unsigned __int64 PreferredMask;
  /* 0x0010 */ unsigned __int64 AvailableMask;
} KHETERO_PROCESSOR_SET, *PKHETERO_PROCESSOR_SET; /* size: 0x0018 */

typedef struct _KNODE
{
  /* 0x0000 */ unsigned __int64 IdleNonParkedCpuSet;
  /* 0x0008 */ unsigned __int64 IdleSmtSet;
  /* 0x0010 */ unsigned __int64 IdleCpuSet;
  /* 0x0040 */ unsigned __int64 DeepIdleSet;
  /* 0x0048 */ unsigned __int64 IdleConstrainedSet;
  /* 0x0050 */ unsigned __int64 NonParkedSet;
  /* 0x0058 */ unsigned __int64 NonIsrTargetedSet;
  /* 0x0060 */ long ParkLock;
  /* 0x0064 */ unsigned short ThreadSeed;
  /* 0x0066 */ unsigned short ProcessSeed;
  /* 0x0080 */ unsigned long SiblingMask;
  union
  {
    /* 0x0088 */ struct _GROUP_AFFINITY Affinity;
    struct
    {
      /* 0x0088 */ unsigned char AffinityFill[10];
      /* 0x0092 */ unsigned short NodeNumber;
      /* 0x0094 */ unsigned short PrimaryNodeNumber;
      /* 0x0096 */ unsigned short Spare0;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
  /* 0x0098 */ unsigned __int64 SharedReadyQueueMask;
  /* 0x00a0 */ unsigned __int64 StrideMask;
  /* 0x00a8 */ unsigned long ProximityId;
  /* 0x00ac */ unsigned long Lowest;
  /* 0x00b0 */ unsigned long Highest;
  /* 0x00b4 */ unsigned char MaximumProcessors;
  /* 0x00b5 */ struct _flags Flags;
  /* 0x00b6 */ unsigned char Spare10;
  /* 0x00b8 */ struct _KHETERO_PROCESSOR_SET HeteroSets[5];
  /* 0x0130 */ unsigned __int64 PpmConfiguredQosSets[4];
  /* 0x0150 */ unsigned __int64 LLCLeaders;
  /* 0x0158 */ long __PADDING__[10];
} KNODE, *PKNODE; /* size: 0x0180 */

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
  /* 0x0180 */ struct _WORK_QUEUE_ITEM HotAddProcessorWorkItem;
  /* 0x01a0 */ long __PADDING__[8];
} ENODE, *PENODE; /* size: 0x01c0 */

