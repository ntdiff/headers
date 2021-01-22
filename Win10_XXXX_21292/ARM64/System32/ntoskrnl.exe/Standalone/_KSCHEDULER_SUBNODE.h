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
  /* 0x0080 */ unsigned __int64 DeepIdleSet;
  /* 0x0088 */ unsigned __int64 IdleConstrainedSet;
  /* 0x0090 */ unsigned __int64 NonParkedSet;
  /* 0x0098 */ unsigned __int64 SoftParkedSet;
  /* 0x00a0 */ unsigned __int64 NonIsrTargetedSet;
  /* 0x00a8 */ long ParkLock;
  /* 0x00ac */ unsigned char ProcessSeed;
  /* 0x00ad */ unsigned char Spare5[3];
  union
  {
    /* 0x0100 */ struct _GROUP_AFFINITY Affinity;
    struct
    {
      /* 0x0100 */ unsigned char AffinityFill[10];
      /* 0x010a */ unsigned short ParentNodeNumber;
      /* 0x010c */ unsigned short SubNodeNumber;
      /* 0x010e */ unsigned short Spare;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
  /* 0x0110 */ unsigned __int64 SiblingMask;
  /* 0x0118 */ unsigned __int64 SharedReadyQueueMask;
  /* 0x0120 */ unsigned __int64 StrideMask;
  /* 0x0128 */ unsigned __int64 LLCLeaders;
  /* 0x0130 */ unsigned long Lowest;
  /* 0x0134 */ unsigned long Highest;
  /* 0x0138 */ struct _flags Flags;
  /* 0x0140 */ struct _KHETERO_PROCESSOR_SET HeteroSets[5];
  /* 0x01b8 */ unsigned __int64 PpmConfiguredQosSets[5];
  /* 0x01e0 */ union _KQOS_GROUPING_SETS QosGroupingSets;
  /* 0x01f0 */ unsigned __int64 QosPreemptibleSet;
  /* 0x01f8 */ long __PADDING__[2];
} KSCHEDULER_SUBNODE, *PKSCHEDULER_SUBNODE; /* size: 0x0200 */

