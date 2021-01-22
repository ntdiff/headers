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

typedef struct _KHETERO_PROCESSOR_SET
{
  /* 0x0000 */ unsigned __int64 IdealMask;
  /* 0x0008 */ unsigned __int64 PreferredMask;
  /* 0x0010 */ unsigned __int64 AvailableMask;
} KHETERO_PROCESSOR_SET, *PKHETERO_PROCESSOR_SET; /* size: 0x0018 */

typedef union _KQOS_GROUPING_SETS
{
  /* 0x0000 */ unsigned __int64 SingleCoreSet;
  /* 0x0008 */ unsigned __int64 SmtSet;
} KQOS_GROUPING_SETS, *PKQOS_GROUPING_SETS; /* size: 0x0010 */

typedef struct _KSCHEDULER_SUBNODE
{
  /* 0x0000 */ unsigned __int64 IdleNonParkedCpuSet;
  /* 0x0008 */ unsigned __int64 IdleSmtSet;
  /* 0x0010 */ unsigned __int64 NonPairedSmtSet;
  /* 0x0018 */ unsigned __int64 IdleCpuSet;
  /* 0x0040 */ unsigned __int64 DeepIdleSet;
  /* 0x0048 */ unsigned __int64 IdleConstrainedSet;
  /* 0x0050 */ unsigned __int64 NonParkedSet;
  /* 0x0058 */ unsigned __int64 SoftParkedSet;
  /* 0x0060 */ unsigned __int64 NonIsrTargetedSet;
  /* 0x0068 */ long ParkLock;
  /* 0x006c */ unsigned char ProcessSeed;
  /* 0x006d */ unsigned char Spare5[3];
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
  /* 0x00c0 */ struct _KHETERO_PROCESSOR_SET HeteroSets[5];
  /* 0x0138 */ unsigned __int64 PpmConfiguredQosSets[5];
  /* 0x0160 */ union _KQOS_GROUPING_SETS QosGroupingSets;
  /* 0x0170 */ unsigned __int64 QosPreemptibleSet;
  /* 0x0178 */ long __PADDING__[2];
} KSCHEDULER_SUBNODE, *PKSCHEDULER_SUBNODE; /* size: 0x0180 */

