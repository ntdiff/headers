typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

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
  /* 0x0008 */ unsigned long TrimmedPageCount;
  /* 0x000c */ struct _MMWSL_INSTANCE* VmWorkingSetList;
  /* 0x0010 */ struct _LIST_ENTRY WorkingSetExpansionLinks;
  /* 0x0018 */ unsigned long AgeDistribution[8];
  /* 0x0038 */ struct _KGATE* ExitOutswapGate;
  /* 0x003c */ unsigned long MinimumWorkingSetSize;
  /* 0x0040 */ unsigned long WorkingSetLeafSize;
  /* 0x0044 */ unsigned long WorkingSetLeafPrivateSize;
  /* 0x0048 */ unsigned long WorkingSetSize;
  /* 0x004c */ unsigned long WorkingSetPrivateSize;
  /* 0x0050 */ unsigned long MaximumWorkingSetSize;
  /* 0x0054 */ unsigned long PeakWorkingSetSize;
  /* 0x0058 */ unsigned long HardFaultCount;
  /* 0x005c */ unsigned short LastTrimStamp;
  /* 0x005e */ unsigned short Unused0;
  /* 0x0060 */ struct _MMSUPPORT_FLAGS Flags;
} MMSUPPORT_INSTANCE, *PMMSUPPORT_INSTANCE; /* size: 0x0064 */

typedef struct _MMWSL_INSTANCE
{
  /* 0x0000 */ struct _MMPTE* NextPteToTrim;
  /* 0x0004 */ struct _MMPTE* NextPteToAge;
  /* 0x0008 */ struct _MMPTE* NextPteToAccessClear;
  /* 0x000c */ unsigned long LastAccessClearingRemainder;
  /* 0x0010 */ unsigned long LastAgingRemainder;
  /* 0x0014 */ unsigned long LockedEntries;
} MMWSL_INSTANCE, *PMMWSL_INSTANCE; /* size: 0x0018 */

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
  /* 0x0000 */ unsigned long Total;
  /* 0x0004 */ enum _MMLISTS ListName;
  /* 0x0008 */ unsigned long Flink;
  /* 0x000c */ unsigned long Blink;
  /* 0x0010 */ unsigned long Lock;
} MMPFNLIST, *PMMPFNLIST; /* size: 0x0014 */

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
  /* 0x0004 */ short Size;
  /* 0x0006 */ short MdlFlags;
  /* 0x0008 */ struct _EPROCESS* Process;
  /* 0x000c */ void* MappedSystemVa;
  /* 0x0010 */ void* StartVa;
  /* 0x0014 */ unsigned long ByteCount;
  /* 0x0018 */ unsigned long ByteOffset;
} MDL, *PMDL; /* size: 0x001c */

typedef struct _MI_PAGEFILE_TRACES
{
  /* 0x0000 */ long Status;
  /* 0x0004 */ unsigned short PartitionId;
  /* 0x0006 */ unsigned char Priority;
  /* 0x0007 */ unsigned char IrpPriority;
  /* 0x0008 */ unsigned char ReservationWrite;
  /* 0x0010 */ union _LARGE_INTEGER CurrentTime;
  /* 0x0018 */ unsigned long AvailablePages;
  /* 0x001c */ unsigned long ModifiedPagesTotal;
  /* 0x0020 */ unsigned long ModifiedPagefilePages;
  /* 0x0024 */ unsigned long ModifiedNoWritePages;
  /* 0x0028 */ unsigned long ModifiedPagefileNoReservationPages;
  struct
  {
    /* 0x002c */ struct _MDL Mdl;
    /* 0x0048 */ unsigned long Page[1];
  } /* size: 0x0020 */ MdlHack;
  /* 0x004c */ long __PADDING__[1];
} MI_PAGEFILE_TRACES, *PMI_PAGEFILE_TRACES; /* size: 0x0050 */

typedef struct _MI_VISIBLE_PARTITION
{
  /* 0x0000 */ unsigned long LowestPhysicalPage;
  /* 0x0004 */ unsigned long HighestPhysicalPage;
  /* 0x0008 */ unsigned long NumberOfPhysicalPages;
  /* 0x000c */ volatile unsigned long NumberOfPagingFiles;
  /* 0x0010 */ unsigned char SystemCacheInitialized;
  /* 0x0014 */ struct _MMPAGING_FILE* PagingFile[16];
  /* 0x0080 */ volatile unsigned long AvailablePages;
  /* 0x00c0 */ volatile unsigned long ResidentAvailablePages;
  /* 0x0100 */ struct _MMSUPPORT_INSTANCE PartitionWs[1];
  /* 0x0164 */ struct _MMWSL_INSTANCE PartitionWorkingSetLists[1];
  /* 0x017c */ volatile unsigned long TotalCommittedPages;
  /* 0x0180 */ struct _MMPFNLIST ModifiedPageListHead;
  /* 0x01c0 */ struct _MMPFNLIST ModifiedNoWritePageListHead;
  /* 0x01d4 */ unsigned long TotalCommitLimit;
  /* 0x01d8 */ unsigned long TotalPagesForPagingFile;
  /* 0x01dc */ unsigned long VadPhysicalPages;
  /* 0x01e0 */ unsigned long ProcessLockedFilePages;
  /* 0x01e4 */ volatile unsigned long SharedCommit;
  /* 0x01e8 */ unsigned long SlabAllocatorPages;
  /* 0x01ec */ unsigned long ChargeCommitmentFailures[4];
  /* 0x01fc */ volatile long PageFileTraceIndex;
  /* 0x0200 */ struct _MI_PAGEFILE_TRACES PageFileTraces[32];
} MI_VISIBLE_PARTITION, *PMI_VISIBLE_PARTITION; /* size: 0x0c00 */

