typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _MMSUPPORT_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char WorkingSetType : 3; /* bit position: 0 */
    /* 0x0000 */ unsigned char Reserved0 : 3; /* bit position: 3 */
    /* 0x0000 */ unsigned char MaximumWorkingSetHard : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned char MinimumWorkingSetHard : 1; /* bit position: 7 */
  }; /* bitfield */
  struct /* bitfield */
  {
    /* 0x0001 */ unsigned char SessionMaster : 1; /* bit position: 0 */
    /* 0x0001 */ unsigned char TrimmerState : 2; /* bit position: 1 */
    /* 0x0001 */ unsigned char Reserved : 1; /* bit position: 3 */
    /* 0x0001 */ unsigned char PageStealers : 4; /* bit position: 4 */
  }; /* bitfield */
  /* 0x0002 */ unsigned char MemoryPriority;
  struct /* bitfield */
  {
    /* 0x0003 */ unsigned char WsleDeleted : 1; /* bit position: 0 */
    /* 0x0003 */ unsigned char VmExiting : 1; /* bit position: 1 */
    /* 0x0003 */ unsigned char ExpansionFailed : 1; /* bit position: 2 */
    /* 0x0003 */ unsigned char SvmEnabled : 1; /* bit position: 3 */
    /* 0x0003 */ unsigned char ForceAge : 1; /* bit position: 4 */
    /* 0x0003 */ unsigned char NewMaximum : 1; /* bit position: 5 */
    /* 0x0003 */ unsigned char CommitReleaseState : 2; /* bit position: 6 */
  }; /* bitfield */
} MMSUPPORT_FLAGS, *PMMSUPPORT_FLAGS; /* size: 0x0004 */

typedef struct _MMSUPPORT
{
  /* 0x0000 */ volatile long WorkingSetLock;
  /* 0x0008 */ struct _KGATE* ExitOutswapGate;
  /* 0x0010 */ void* AccessLog;
  /* 0x0018 */ struct _LIST_ENTRY WorkingSetExpansionLinks;
  /* 0x0028 */ unsigned __int64 AgeDistribution[7];
  /* 0x0060 */ unsigned __int64 MinimumWorkingSetSize;
  /* 0x0068 */ unsigned __int64 WorkingSetLeafSize;
  /* 0x0070 */ unsigned __int64 WorkingSetLeafPrivateSize;
  /* 0x0078 */ unsigned __int64 WorkingSetSize;
  /* 0x0080 */ unsigned __int64 WorkingSetPrivateSize;
  /* 0x0088 */ unsigned __int64 MaximumWorkingSetSize;
  /* 0x0090 */ unsigned __int64 ChargedWslePages;
  /* 0x0098 */ unsigned __int64 ActualWslePages;
  /* 0x00a0 */ unsigned __int64 WorkingSetSizeOverhead;
  /* 0x00a8 */ unsigned __int64 PeakWorkingSetSize;
  /* 0x00b0 */ unsigned long HardFaultCount;
  /* 0x00b4 */ unsigned short PartitionId;
  /* 0x00b6 */ unsigned short Pad0;
  /* 0x00b8 */ struct _MMWSL* VmWorkingSetList;
  /* 0x00c0 */ unsigned short NextPageColor;
  /* 0x00c2 */ unsigned short LastTrimStamp;
  /* 0x00c4 */ unsigned long PageFaultCount;
  /* 0x00c8 */ unsigned __int64 TrimmedPageCount;
  /* 0x00d0 */ unsigned __int64 Reserved0;
  /* 0x00d8 */ struct _MMSUPPORT_FLAGS Flags;
  /* 0x00e0 */ unsigned __int64 ReleasedCommitDebt;
  /* 0x00e8 */ void* WsSwapSupport;
  /* 0x00f0 */ void* CommitReAcquireFailSupport;
} MMSUPPORT, *PMMSUPPORT; /* size: 0x00f8 */

