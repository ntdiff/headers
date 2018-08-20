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
  /* 0x0000 */ unsigned long Mask;
  /* 0x0004 */ unsigned short Group;
  /* 0x0006 */ unsigned short Reserved[3];
} GROUP_AFFINITY, *PGROUP_AFFINITY; /* size: 0x000c */

typedef struct _KNODE
{
  /* 0x0000 */ unsigned long DeepIdleSet;
  /* 0x0040 */ unsigned long ProximityId;
  /* 0x0044 */ unsigned short NodeNumber;
  /* 0x0046 */ unsigned short PrimaryNodeNumber;
  /* 0x0048 */ unsigned char MaximumProcessors;
  /* 0x0049 */ struct _flags Flags;
  /* 0x004a */ unsigned char Stride;
  /* 0x004b */ unsigned char NodePad0;
  /* 0x004c */ struct _GROUP_AFFINITY Affinity;
  /* 0x0058 */ unsigned long IdleCpuSet;
  /* 0x005c */ unsigned long IdleSmtSet;
  /* 0x0080 */ unsigned long Seed;
  /* 0x0084 */ unsigned long Lowest;
  /* 0x0088 */ unsigned long Highest;
  /* 0x008c */ long ParkLock;
  /* 0x0090 */ unsigned long NonParkedSet;
  /* 0x0094 */ long __PADDING__[11];
} KNODE, *PKNODE; /* size: 0x00c0 */

