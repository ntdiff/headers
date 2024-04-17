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
  /* 0x0130 */ struct _WORK_QUEUE_ITEM HotAddProcessorWorkItem;
  /* 0x0150 */ long __PADDING__[12];
} ENODE, *PENODE; /* size: 0x0180 */

