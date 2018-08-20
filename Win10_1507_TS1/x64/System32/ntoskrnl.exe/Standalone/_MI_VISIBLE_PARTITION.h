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
    struct // _TAG_UNNAMED_1
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
  /* 0x000c */ unsigned short AllocationProcessorNumber;
  /* 0x000e */ unsigned short Reserved;
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
  struct // _TAG_UNNAMED_76
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
  /* 0x0020 */ struct _MMPAGING_FILE* PagingFile[16];
  /* 0x00c0 */ volatile unsigned __int64 AvailablePages;
  /* 0x0100 */ volatile unsigned __int64 ResidentAvailablePages;
  /* 0x0108 */ volatile unsigned __int64 TotalCommittedPages;
  /* 0x0140 */ struct _MMPFNLIST ModifiedPageListHead;
  /* 0x0180 */ struct _MMPFNLIST ModifiedNoWritePageListHead;
  /* 0x01a8 */ unsigned __int64 TotalCommitLimit;
  /* 0x01b0 */ unsigned __int64 TotalPagesForPagingFile;
  /* 0x01b8 */ unsigned __int64 VadPhysicalPages;
  /* 0x01c0 */ unsigned __int64 ProcessLockedFilePages;
  /* 0x01c8 */ unsigned long ChargeCommitmentFailures[4];
  /* 0x01d8 */ volatile unsigned __int64 PageTableBitmapPages;
  /* 0x01e0 */ volatile long PageFileTraceIndex;
  /* 0x01e8 */ struct _MI_PAGEFILE_TRACES PageFileTraces[32];
  /* 0x10e8 */ long __PADDING__[6];
} MI_VISIBLE_PARTITION, *PMI_VISIBLE_PARTITION; /* size: 0x1100 */

