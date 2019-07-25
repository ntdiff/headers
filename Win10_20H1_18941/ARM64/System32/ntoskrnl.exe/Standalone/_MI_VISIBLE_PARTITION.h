typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _MMSUPPORT_FLAGS
{
  union
  {
    struct
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
    }; /* size: 0x0002 */
    /* 0x0000 */ unsigned short u1;
  }; /* size: 0x0002 */
  /* 0x0002 */ unsigned char MemoryPriority;
  union
  {
    struct /* bitfield */
    {
      /* 0x0003 */ unsigned char WsleDeleted : 1; /* bit position: 0 */
      /* 0x0003 */ unsigned char SvmEnabled : 1; /* bit position: 1 */
      /* 0x0003 */ unsigned char ForceAge : 1; /* bit position: 2 */
      /* 0x0003 */ unsigned char ForceTrim : 1; /* bit position: 3 */
      /* 0x0003 */ unsigned char NewMaximum : 1; /* bit position: 4 */
      /* 0x0003 */ unsigned char CommitReleaseState : 2; /* bit position: 5 */
    }; /* bitfield */
    /* 0x0003 */ unsigned char u2;
  }; /* size: 0x0001 */
} MMSUPPORT_FLAGS, *PMMSUPPORT_FLAGS; /* size: 0x0004 */

typedef struct _MMSUPPORT_INSTANCE
{
  /* 0x0000 */ unsigned long NextPageColor;
  /* 0x0004 */ unsigned long PageFaultCount;
  /* 0x0008 */ unsigned __int64 TrimmedPageCount;
  /* 0x0010 */ struct _MMWSL_INSTANCE* VmWorkingSetList;
  /* 0x0018 */ struct _LIST_ENTRY WorkingSetExpansionLinks;
  /* 0x0028 */ unsigned __int64 AgeDistribution[8];
  /* 0x0068 */ struct _KGATE* ExitOutswapGate;
  /* 0x0070 */ unsigned __int64 MinimumWorkingSetSize;
  /* 0x0078 */ unsigned __int64 WorkingSetLeafSize;
  /* 0x0080 */ unsigned __int64 WorkingSetLeafPrivateSize;
  /* 0x0088 */ unsigned __int64 WorkingSetSize;
  /* 0x0090 */ unsigned __int64 WorkingSetPrivateSize;
  /* 0x0098 */ unsigned __int64 MaximumWorkingSetSize;
  /* 0x00a0 */ unsigned __int64 PeakWorkingSetSize;
  /* 0x00a8 */ unsigned long HardFaultCount;
  /* 0x00ac */ unsigned short LastTrimStamp;
  /* 0x00ae */ unsigned short PartitionId;
  /* 0x00b0 */ unsigned __int64 SelfmapLock;
  /* 0x00b8 */ struct _MMSUPPORT_FLAGS Flags;
  /* 0x00bc */ long __PADDING__[1];
} MMSUPPORT_INSTANCE, *PMMSUPPORT_INSTANCE; /* size: 0x00c0 */

typedef struct _MMWSL_INSTANCE
{
  /* 0x0000 */ struct _MMPTE* NextPteToTrim;
  /* 0x0008 */ struct _MMPTE* NextPteToAge;
  /* 0x0010 */ struct _MMPTE* NextPteToAccessClear;
  /* 0x0018 */ unsigned long LastAccessClearingRemainder;
  /* 0x001c */ unsigned long LastAgingRemainder;
  /* 0x0020 */ unsigned __int64 LockedEntries;
} MMWSL_INSTANCE, *PMMWSL_INSTANCE; /* size: 0x0028 */

typedef enum _MMLISTS
{
  ZeroedPageList = 0,
  FreePageList = 1,
  StandbyPageList = 2,
  ModifiedPageList = 3,
  ModifiedNoWritePageList = 4,
  BadPageList = 5,
  ActiveAndValid = 6,
  TransitionPage = 7,
} MMLISTS, *PMMLISTS;

typedef struct _MMPFNLIST
{
  /* 0x0000 */ unsigned __int64 Total;
  /* 0x0008 */ enum _MMLISTS ListName;
  /* 0x0010 */ unsigned __int64 Flink;
  /* 0x0018 */ unsigned __int64 Blink;
  /* 0x0020 */ unsigned __int64 Lock;
} MMPFNLIST, *PMMPFNLIST; /* size: 0x0028 */

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _MDL
{
  /* 0x0000 */ struct _MDL* Next;
  /* 0x0008 */ short Size;
  /* 0x000a */ short MdlFlags;
  /* 0x0010 */ struct _EPROCESS* Process;
  /* 0x0018 */ void* MappedSystemVa;
  /* 0x0020 */ void* StartVa;
  /* 0x0028 */ unsigned long ByteCount;
  /* 0x002c */ unsigned long ByteOffset;
} MDL, *PMDL; /* size: 0x0030 */

typedef struct _MI_PAGEFILE_TRACES
{
  /* 0x0000 */ long Status;
  /* 0x0004 */ unsigned short PartitionId;
  /* 0x0006 */ unsigned char Priority;
  /* 0x0007 */ unsigned char IrpPriority;
  /* 0x0008 */ unsigned char ReservationWrite;
  /* 0x0010 */ union _LARGE_INTEGER CurrentTime;
  /* 0x0018 */ unsigned __int64 AvailablePages;
  /* 0x0020 */ unsigned __int64 ModifiedPagesTotal;
  /* 0x0028 */ unsigned __int64 ModifiedPagefilePages;
  /* 0x0030 */ unsigned __int64 ModifiedNoWritePages;
  /* 0x0038 */ unsigned __int64 ModifiedPagefileNoReservationPages;
  struct
  {
    /* 0x0040 */ struct _MDL Mdl;
    /* 0x0070 */ unsigned __int64 Page[1];
  } /* size: 0x0038 */ MdlHack;
} MI_PAGEFILE_TRACES, *PMI_PAGEFILE_TRACES; /* size: 0x0078 */

typedef struct _MI_VISIBLE_PARTITION
{
  /* 0x0000 */ unsigned __int64 LowestPhysicalPage;
  /* 0x0008 */ unsigned __int64 HighestPhysicalPage;
  /* 0x0010 */ unsigned __int64 NumberOfPhysicalPages;
  /* 0x0018 */ volatile unsigned long NumberOfPagingFiles;
  /* 0x001c */ unsigned char SystemCacheInitialized;
  /* 0x0020 */ struct _MMPAGING_FILE* PagingFile[16];
  /* 0x0100 */ volatile unsigned __int64 AvailablePages;
  /* 0x0180 */ volatile unsigned __int64 ResidentAvailablePages;
  /* 0x0200 */ struct _MMSUPPORT_INSTANCE PartitionWs[1];
  /* 0x02c0 */ struct _MMWSL_INSTANCE PartitionWorkingSetLists[1];
  /* 0x02e8 */ volatile unsigned __int64 TotalCommittedPages;
  /* 0x0300 */ struct _MMPFNLIST ModifiedPageListHead;
  /* 0x0380 */ struct _MMPFNLIST ModifiedNoWritePageListHead;
  /* 0x03a8 */ unsigned __int64 TotalCommitLimit;
  /* 0x03b0 */ unsigned __int64 TotalPagesForPagingFile;
  /* 0x03b8 */ unsigned __int64 VadPhysicalPages;
  /* 0x03c0 */ unsigned __int64 ProcessLockedFilePages;
  /* 0x03c8 */ volatile unsigned __int64 SharedCommit;
  /* 0x03d0 */ unsigned __int64 SlabAllocatorPages;
  /* 0x03d8 */ unsigned long ChargeCommitmentFailures[4];
  /* 0x03e8 */ volatile long PageFileTraceIndex;
  /* 0x03f0 */ struct _MI_PAGEFILE_TRACES PageFileTraces[32];
  /* 0x12f0 */ long __PADDING__[4];
} MI_VISIBLE_PARTITION, *PMI_VISIBLE_PARTITION; /* size: 0x1300 */

