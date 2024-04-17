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
  /* 0x0010 */ unsigned long ActiveGroups;
  /* 0x0018 */ struct _KSCHEDULER_SUBNODE* SchedulerSubNodes[32];
  /* 0x0118 */ unsigned long ActiveTopologyElements[5];
  /* 0x012c */ long __PADDING__[1];
} KNODE, *PKNODE; /* size: 0x0130 */

