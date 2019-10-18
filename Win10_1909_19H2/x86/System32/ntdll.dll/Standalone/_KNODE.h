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
  /* 0x0008 */ unsigned long IdleCpuSet;
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
  /* 0x00e4 */ unsigned long PpmConfiguredQosSets[4];
  /* 0x00f8 */ union _KQOS_GROUPING_SETS QosGroupingSets;
  /* 0x0100 */ unsigned long LLCLeaders;
  /* 0x0104 */ long __PADDING__[15];
} KNODE, *PKNODE; /* size: 0x0140 */

