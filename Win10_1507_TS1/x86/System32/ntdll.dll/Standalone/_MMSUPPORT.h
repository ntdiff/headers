typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _MMSUPPORT_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char WorkingSetType : 3; /* bit position: 0 */
    /* 0x0000 */ unsigned char ForceCredits : 3; /* bit position: 3 */
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
  /* 0x0004 */ struct _KGATE* ExitOutswapGate;
  /* 0x0008 */ void* AccessLog;
  /* 0x000c */ struct _LIST_ENTRY WorkingSetExpansionLinks;
  /* 0x0014 */ unsigned long AgeDistribution[7];
  /* 0x0030 */ unsigned long MinimumWorkingSetSize;
  /* 0x0034 */ unsigned long WorkingSetLeafSize;
  /* 0x0038 */ unsigned long WorkingSetLeafPrivateSize;
  /* 0x003c */ unsigned long WorkingSetSize;
  /* 0x0040 */ unsigned long WorkingSetPrivateSize;
  /* 0x0044 */ unsigned long MaximumWorkingSetSize;
  /* 0x0048 */ unsigned long ChargedWslePages;
  /* 0x004c */ unsigned long ActualWslePages;
  /* 0x0050 */ unsigned long WorkingSetSizeOverhead;
  /* 0x0054 */ unsigned long PeakWorkingSetSize;
  /* 0x0058 */ unsigned long HardFaultCount;
  /* 0x005c */ struct _MMWSL* VmWorkingSetList;
  /* 0x0060 */ unsigned short NextPageColor;
  /* 0x0062 */ unsigned short LastTrimStamp;
  /* 0x0064 */ unsigned long PageFaultCount;
  /* 0x0068 */ unsigned long TrimmedPageCount;
  /* 0x006c */ unsigned long ForceTrimPages;
  /* 0x0070 */ struct _MMSUPPORT_FLAGS Flags;
  /* 0x0074 */ unsigned long ReleasedCommitDebt;
  /* 0x0078 */ void* WsSwapSupport;
  /* 0x007c */ void* CommitReAcquireFailSupport;
} MMSUPPORT, *PMMSUPPORT; /* size: 0x0080 */

