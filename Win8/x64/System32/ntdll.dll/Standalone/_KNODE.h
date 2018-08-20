typedef struct _flags
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char Removable : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned char GroupAssigned : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned char GroupCommitted : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned char GroupAssignmentFixed : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned char Fill : 4; /* bit position: 4 */
  }; /* bitfield */
} flags, *Pflags; /* size: 0x0001 */

typedef struct _GROUP_AFFINITY
{
  /* 0x0000 */ unsigned __int64 Mask;
  /* 0x0008 */ unsigned short Group;
  /* 0x000a */ unsigned short Reserved[3];
} GROUP_AFFINITY, *PGROUP_AFFINITY; /* size: 0x0010 */

typedef struct _KNODE
{
  /* 0x0000 */ unsigned __int64 DeepIdleSet;
  /* 0x0040 */ unsigned long ProximityId;
  /* 0x0044 */ unsigned short NodeNumber;
  /* 0x0046 */ unsigned short PrimaryNodeNumber;
  /* 0x0048 */ unsigned char MaximumProcessors;
  /* 0x0049 */ struct _flags Flags;
  /* 0x004a */ unsigned char Stride;
  /* 0x004b */ unsigned char NodePad0;
  /* 0x0050 */ struct _GROUP_AFFINITY Affinity;
  /* 0x0060 */ unsigned __int64 IdleCpuSet;
  /* 0x0068 */ unsigned __int64 IdleSmtSet;
  /* 0x0080 */ unsigned long Seed;
  /* 0x0084 */ unsigned long Lowest;
  /* 0x0088 */ unsigned long Highest;
  /* 0x008c */ long ParkLock;
  /* 0x0090 */ unsigned __int64 NonParkedSet;
  /* 0x0098 */ long __PADDING__[10];
} KNODE, *PKNODE; /* size: 0x00c0 */

