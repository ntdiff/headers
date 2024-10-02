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
        /* 0x0000 */ unsigned char WorkingSetType : 4; /* bit position: 0 */
        /* 0x0000 */ unsigned char Reserved0 : 2; /* bit position: 4 */
        /* 0x0000 */ unsigned char MaximumWorkingSetHard : 1; /* bit position: 6 */
        /* 0x0000 */ unsigned char MinimumWorkingSetHard : 1; /* bit position: 7 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0001 */ unsigned char Reserved1 : 1; /* bit position: 0 */
        /* 0x0001 */ unsigned char TrimmerState : 2; /* bit position: 1 */
        /* 0x0001 */ unsigned char LinearAddressProtected : 1; /* bit position: 3 */
        /* 0x0001 */ unsigned char PageStealers : 4; /* bit position: 4 */
      }; /* bitfield */
    }; /* size: 0x0002 */
    struct
    {
      /* 0x0000 */ unsigned short u1;
      /* 0x0002 */ unsigned char MemoryPriority;
      union
      {
        struct /* bitfield */
        {
          /* 0x0003 */ unsigned char WsleDeleted : 1; /* bit position: 0 */
          /* 0x0003 */ unsigned char SvmEnabled : 1; /* bit position: 1 */
          /* 0x0003 */ unsigned char ForceAge : 1; /* bit position: 2 */
          /* 0x0003 */ unsigned char ForceTrim : 1; /* bit position: 3 */
          /* 0x0003 */ unsigned char CommitReleaseState : 2; /* bit position: 4 */
          /* 0x0003 */ unsigned char Reserved2 : 2; /* bit position: 6 */
        }; /* bitfield */
        /* 0x0003 */ unsigned char u2;
      }; /* size: 0x0001 */
    }; /* size: 0x0004 */
    /* 0x0000 */ unsigned long EntireFlags;
  }; /* size: 0x0004 */
} MMSUPPORT_FLAGS, *PMMSUPPORT_FLAGS; /* size: 0x0004 */

typedef struct _MMSUPPORT_INSTANCE
{
  /* 0x0000 */ unsigned long NextPageColor;
  /* 0x0004 */ volatile unsigned long PageFaultCount;
  /* 0x0008 */ unsigned __int64 TrimmedPageCount;
  /* 0x0010 */ struct _MMWSL_INSTANCE* VmWorkingSetList;
  /* 0x0018 */ struct _LIST_ENTRY WorkingSetExpansionLinks;
  /* 0x0028 */ volatile unsigned __int64 AgeDistribution[8];
  /* 0x0068 */ struct _KGATE* ExitOutswapGate;
  /* 0x0070 */ unsigned __int64 MinimumWorkingSetSize;
  /* 0x0078 */ unsigned __int64 MaximumWorkingSetSize;
  /* 0x0080 */ volatile unsigned __int64 WorkingSetLeafSize;
  /* 0x0088 */ volatile unsigned __int64 WorkingSetLeafPrivateSize;
  /* 0x0090 */ volatile unsigned __int64 WorkingSetSize;
  /* 0x0098 */ volatile unsigned __int64 WorkingSetPrivateSize;
  /* 0x00a0 */ volatile unsigned __int64 PeakWorkingSetSize;
  /* 0x00a8 */ unsigned long HardFaultCount;
  /* 0x00ac */ unsigned short LastTrimStamp;
  /* 0x00ae */ unsigned short PartitionId;
  /* 0x00b0 */ unsigned __int64 SelfmapLock;
  /* 0x00b8 */ volatile struct _MMSUPPORT_FLAGS Flags;
  /* 0x00bc */ volatile unsigned long InterlockedFlags;
} MMSUPPORT_INSTANCE, *PMMSUPPORT_INSTANCE; /* size: 0x00c0 */

typedef struct _MI_WORKING_SET_PAGE_TABLE_AGE_LINKS
{
  /* 0x0000 */ volatile long Lock;
  /* 0x0004 */ unsigned long EntryCount;
  /* 0x0008 */ struct _MMPFN* Flink;
  /* 0x0010 */ struct _MMPFN* Blink;
} MI_WORKING_SET_PAGE_TABLE_AGE_LINKS, *PMI_WORKING_SET_PAGE_TABLE_AGE_LINKS; /* size: 0x0018 */

typedef struct _MMWSL_INSTANCE
{
  /* 0x0000 */ struct _MMPTE* PteResumePoint[3];
  /* 0x0018 */ unsigned long LastAccessClearingRemainder;
  /* 0x001c */ unsigned long LastAgingRemainder;
  /* 0x0020 */ unsigned __int64 LockedEntries;
  /* 0x0080 */ struct _MI_WORKING_SET_PAGE_TABLE_AGE_LINKS ActivePageTableLinks[8];
  /* 0x0140 */ long __PADDING__[16];
} MMWSL_INSTANCE, *PMMWSL_INSTANCE; /* size: 0x0180 */

typedef struct _MI_PARTITION_WORKING_SET
{
  /* 0x0000 */ struct _MMSUPPORT_INSTANCE VmInstance;
  /* 0x0100 */ struct _MMWSL_INSTANCE VmWorkingSetList;
} MI_PARTITION_WORKING_SET, *PMI_PARTITION_WORKING_SET; /* size: 0x0280 */

typedef struct _MI_COLOR
{
  union
  {
    /* 0x0000 */ unsigned long EntireField;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Cache : 8; /* bit position: 0 */
      /* 0x0000 */ unsigned long Channel : 1; /* bit position: 8 */
      /* 0x0000 */ unsigned long Node : 6; /* bit position: 9 */
      /* 0x0000 */ unsigned long HighLow : 1; /* bit position: 15 */
      /* 0x0000 */ unsigned long LargePageIndex : 2; /* bit position: 16 */
      /* 0x0000 */ unsigned long CacheAttribute : 2; /* bit position: 18 */
      /* 0x0000 */ unsigned long ListName : 1; /* bit position: 20 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} MI_COLOR, *PMI_COLOR; /* size: 0x0004 */

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

typedef struct _RTL_BALANCED_NODE
{
  union
  {
    /* 0x0000 */ struct _RTL_BALANCED_NODE* Children[2];
    struct
    {
      /* 0x0000 */ struct _RTL_BALANCED_NODE* Left;
      /* 0x0008 */ struct _RTL_BALANCED_NODE* Right;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
  union
  {
    /* 0x0010 */ unsigned char Red : 1; /* bit position: 0 */
    /* 0x0010 */ unsigned char Balance : 2; /* bit position: 0 */
    /* 0x0010 */ unsigned __int64 ParentValue;
  }; /* size: 0x0008 */
} RTL_BALANCED_NODE, *PRTL_BALANCED_NODE; /* size: 0x0018 */

typedef struct _MI_ACTIVE_PFN
{
  union
  {
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Tradable : 1; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 NonPagedBuddy : 43; /* bit position: 1 */
        /* 0x0000 */ unsigned __int64 Spare : 20; /* bit position: 44 */
      }; /* bitfield */
    } /* size: 0x0008 */ Leaf;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Tradable : 1; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 NonPagedBuddy : 31; /* bit position: 1 */
        /* 0x0000 */ unsigned __int64 UsedPageTableEntries : 10; /* bit position: 32 */
        /* 0x0000 */ unsigned __int64 WsleAge : 3; /* bit position: 42 */
        /* 0x0000 */ unsigned __int64 OldestWsleLeafEntries : 10; /* bit position: 45 */
        /* 0x0000 */ unsigned __int64 OldestWsleLeafAge : 3; /* bit position: 55 */
        /* 0x0000 */ unsigned __int64 Spare : 6; /* bit position: 58 */
      }; /* bitfield */
    } /* size: 0x0008 */ PageTable;
    /* 0x0000 */ unsigned __int64 EntireActiveField;
  }; /* size: 0x0008 */
} MI_ACTIVE_PFN, *PMI_ACTIVE_PFN; /* size: 0x0008 */

typedef struct _MIPFNFLINK
{
  union
  {
    /* 0x0000 */ struct _SLIST_ENTRY* NextSlistPfn;
    /* 0x0000 */ void* Next;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Flink : 36; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 NodeFlinkLow : 28; /* bit position: 36 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 EntireField;
    /* 0x0000 */ struct _MI_ACTIVE_PFN Active;
  }; /* size: 0x0008 */
} MIPFNFLINK, *PMIPFNFLINK; /* size: 0x0008 */

typedef struct _MMPTE_HARDWARE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 NotLargePage : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 CacheType : 2; /* bit position: 2 */
    /* 0x0000 */ unsigned __int64 OsAvailable2 : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned __int64 NonSecure : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 Owner : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned __int64 NotDirty : 1; /* bit position: 7 */
    /* 0x0000 */ unsigned __int64 Sharability : 2; /* bit position: 8 */
    /* 0x0000 */ unsigned __int64 Accessed : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 NonGlobal : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 PageFrameNumber : 36; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 reserved1 : 4; /* bit position: 48 */
    /* 0x0000 */ unsigned __int64 ContiguousBit : 1; /* bit position: 52 */
    /* 0x0000 */ unsigned __int64 PrivilegedNoExecute : 1; /* bit position: 53 */
    /* 0x0000 */ unsigned __int64 UserNoExecute : 1; /* bit position: 54 */
    /* 0x0000 */ unsigned __int64 Writable : 1; /* bit position: 55 */
    /* 0x0000 */ unsigned __int64 CopyOnWrite : 1; /* bit position: 56 */
    /* 0x0000 */ unsigned __int64 WsleProtection : 3; /* bit position: 57 */
    /* 0x0000 */ unsigned __int64 WsleAge : 4; /* bit position: 60 */
  }; /* bitfield */
} MMPTE_HARDWARE, *PMMPTE_HARDWARE; /* size: 0x0008 */

typedef struct _HARDWARE_PTE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 NotLargePage : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 CacheType : 2; /* bit position: 2 */
    /* 0x0000 */ unsigned __int64 OsAvailable2 : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned __int64 NonSecure : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 Owner : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned __int64 NotDirty : 1; /* bit position: 7 */
    /* 0x0000 */ unsigned __int64 Shareability : 2; /* bit position: 8 */
    /* 0x0000 */ unsigned __int64 Accessed : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 NonGlobal : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 PageFrameNumber : 36; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 reserved1 : 4; /* bit position: 48 */
    /* 0x0000 */ unsigned __int64 ContiguousBit : 1; /* bit position: 52 */
    /* 0x0000 */ unsigned __int64 PrivilegedNoExecute : 1; /* bit position: 53 */
    /* 0x0000 */ unsigned __int64 UserNoExecute : 1; /* bit position: 54 */
    /* 0x0000 */ unsigned __int64 Writable : 1; /* bit position: 55 */
    /* 0x0000 */ unsigned __int64 CopyOnWrite : 1; /* bit position: 56 */
    /* 0x0000 */ unsigned __int64 OsAvailable : 2; /* bit position: 57 */
    /* 0x0000 */ unsigned __int64 PxnTable : 1; /* bit position: 59 */
    /* 0x0000 */ unsigned __int64 UxnTable : 1; /* bit position: 60 */
    /* 0x0000 */ unsigned __int64 ApTable : 2; /* bit position: 61 */
    /* 0x0000 */ unsigned __int64 NsTable : 1; /* bit position: 63 */
  }; /* bitfield */
} HARDWARE_PTE, *PHARDWARE_PTE; /* size: 0x0008 */

typedef struct _MMPTE_PROTOTYPE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 HiberVerifyConverted : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned __int64 Unused1 : 1; /* bit position: 7 */
    /* 0x0000 */ unsigned __int64 ReadOnly : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned __int64 Combined : 1; /* bit position: 9 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 DemandFillProto : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 Unused0 : 4; /* bit position: 12 */
    /* 0x0000 */ __int64 ProtoAddress : 48; /* bit position: 16 */
  }; /* bitfield */
} MMPTE_PROTOTYPE, *PMMPTE_PROTOTYPE; /* size: 0x0008 */

typedef struct _MMPTE_SOFTWARE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 PageFileLow : 4; /* bit position: 6 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Transition : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 PageFileReserved : 1; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 PageFileAllocated : 1; /* bit position: 13 */
    /* 0x0000 */ unsigned __int64 UsedPageTableEntries : 10; /* bit position: 14 */
    /* 0x0000 */ unsigned __int64 ColdPage : 1; /* bit position: 24 */
    /* 0x0000 */ unsigned __int64 OnStandbyLookaside : 1; /* bit position: 25 */
    /* 0x0000 */ unsigned __int64 Unused : 6; /* bit position: 26 */
    /* 0x0000 */ unsigned __int64 PageFileHigh : 32; /* bit position: 32 */
  }; /* bitfield */
} MMPTE_SOFTWARE, *PMMPTE_SOFTWARE; /* size: 0x0008 */

typedef struct _MMPTE_TIMESTAMP
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 MustBeZero : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 PageFileLow : 4; /* bit position: 6 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Transition : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 Reserved : 20; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 GlobalTimeStamp : 32; /* bit position: 32 */
  }; /* bitfield */
} MMPTE_TIMESTAMP, *PMMPTE_TIMESTAMP; /* size: 0x0008 */

typedef struct _MMPTE_TRANSITION
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 Spare : 2; /* bit position: 6 */
    /* 0x0000 */ unsigned __int64 OnStandbyLookaside : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned __int64 IoTracker : 1; /* bit position: 9 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Transition : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 PageFrameNumber : 40; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 Unused : 12; /* bit position: 52 */
  }; /* bitfield */
} MMPTE_TRANSITION, *PMMPTE_TRANSITION; /* size: 0x0008 */

typedef struct _MMPTE_SUBSECTION
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 OnStandbyLookaside : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned __int64 Unused0 : 3; /* bit position: 7 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 ColdPage : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 Unused1 : 4; /* bit position: 12 */
    /* 0x0000 */ __int64 SubsectionAddress : 48; /* bit position: 16 */
  }; /* bitfield */
} MMPTE_SUBSECTION, *PMMPTE_SUBSECTION; /* size: 0x0008 */

typedef struct _MMPTE_LIST
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 OneEntry : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned __int64 filler0 : 3; /* bit position: 7 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Transition : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 filler1 : 13; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 NextEntry : 39; /* bit position: 25 */
  }; /* bitfield */
} MMPTE_LIST, *PMMPTE_LIST; /* size: 0x0008 */

typedef struct _MMPTE_ACTIVE_PAGE_TABLE_LINKS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Flink : 36; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 BlinkHigh : 28; /* bit position: 36 */
  }; /* bitfield */
} MMPTE_ACTIVE_PAGE_TABLE_LINKS, *PMMPTE_ACTIVE_PAGE_TABLE_LINKS; /* size: 0x0008 */

typedef struct _MMPTE
{
  union
  {
    union
    {
      /* 0x0000 */ unsigned __int64 Long;
      /* 0x0000 */ struct _MMPTE_HARDWARE Hard;
      /* 0x0000 */ struct _HARDWARE_PTE Flush;
      /* 0x0000 */ struct _MMPTE_PROTOTYPE Proto;
      /* 0x0000 */ struct _MMPTE_SOFTWARE Soft;
      /* 0x0000 */ struct _MMPTE_TIMESTAMP TimeStamp;
      /* 0x0000 */ struct _MMPTE_TRANSITION Trans;
      /* 0x0000 */ struct _MMPTE_SUBSECTION Subsect;
      /* 0x0000 */ struct _MMPTE_LIST List;
      /* 0x0000 */ struct _MMPTE_ACTIVE_PAGE_TABLE_LINKS PageTableLinks;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u;
} MMPTE, *PMMPTE; /* size: 0x0008 */

typedef struct _MIPFNBLINK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Blink : 36; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 NodeBlinkLow : 23; /* bit position: 36 */
      /* 0x0000 */ unsigned __int64 TbFlushStamp : 3; /* bit position: 59 */
      /* 0x0000 */ unsigned __int64 PageBlinkDeleteBit : 1; /* bit position: 62 */
      /* 0x0000 */ unsigned __int64 PageBlinkLockBit : 1; /* bit position: 63 */
    }; /* bitfield */
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 ShareCount : 62; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 PageShareCountDeleteBit : 1; /* bit position: 62 */
      /* 0x0000 */ unsigned __int64 PageShareCountLockBit : 1; /* bit position: 63 */
    }; /* bitfield */
    /* 0x0000 */ __int64 EntireField;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 LockNotUsed : 62; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 DeleteBit : 1; /* bit position: 62 */
      /* 0x0000 */ unsigned __int64 LockBit : 1; /* bit position: 63 */
    }; /* bitfield */
  }; /* size: 0x0008 */
} MIPFNBLINK, *PMIPFNBLINK; /* size: 0x0008 */

typedef struct _MMPFNENTRY1
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char PageLocation : 3; /* bit position: 0 */
    /* 0x0000 */ unsigned char WriteInProgress : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned char Modified : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned char ReadInProgress : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned char CacheAttribute : 2; /* bit position: 6 */
  }; /* bitfield */
} MMPFNENTRY1, *PMMPFNENTRY1; /* size: 0x0001 */

typedef struct _MMPFNENTRY3
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char Priority : 3; /* bit position: 0 */
    /* 0x0000 */ unsigned char OnProtectedStandby : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned char InPageError : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned char SystemChargedPage : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned char RemovalRequested : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned char ParityError : 1; /* bit position: 7 */
  }; /* bitfield */
} MMPFNENTRY3, *PMMPFNENTRY3; /* size: 0x0001 */

typedef struct _MI_PFN_FLAGS
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short ReferenceCount;
      struct /* bitfield */
      {
        /* 0x0002 */ unsigned char PageLocation : 3; /* bit position: 0 */
        /* 0x0002 */ unsigned char WriteInProgress : 1; /* bit position: 3 */
        /* 0x0002 */ unsigned char Modified : 1; /* bit position: 4 */
        /* 0x0002 */ unsigned char ReadInProgress : 1; /* bit position: 5 */
        /* 0x0002 */ unsigned char CacheAttribute : 2; /* bit position: 6 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0003 */ unsigned char Priority : 3; /* bit position: 0 */
        /* 0x0003 */ unsigned char OnProtectedStandby : 1; /* bit position: 3 */
        /* 0x0003 */ unsigned char InPageError : 1; /* bit position: 4 */
        /* 0x0003 */ unsigned char SystemChargedPage : 1; /* bit position: 5 */
        /* 0x0003 */ unsigned char RemovalRequested : 1; /* bit position: 6 */
        /* 0x0003 */ unsigned char ParityError : 1; /* bit position: 7 */
      }; /* bitfield */
    }; /* size: 0x0004 */
    /* 0x0000 */ unsigned long EntireField;
  }; /* size: 0x0004 */
} MI_PFN_FLAGS, *PMI_PFN_FLAGS; /* size: 0x0004 */

typedef struct _MI_PFN_FLAGS5
{
  union
  {
    /* 0x0000 */ unsigned long EntireField;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long NodeBlinkHigh : 13; /* bit position: 0 */
        /* 0x0000 */ unsigned long NodeFlinkMiddle : 19; /* bit position: 13 */
      }; /* bitfield */
    } /* size: 0x0004 */ StandbyList;
    struct
    {
      /* 0x0000 */ unsigned char ModifiedListBucketIndex : 4; /* bit position: 0 */
    } /* size: 0x0001 */ MappedPageList;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long PageTableBlinkLow : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned long PageTableBuddyHigh : 10; /* bit position: 16 */
        /* 0x0000 */ unsigned long PageTableLinked : 1; /* bit position: 26 */
        /* 0x0000 */ unsigned long AnchorLargePageSize : 2; /* bit position: 27 */
        /* 0x0000 */ unsigned long Spare1 : 3; /* bit position: 29 */
      }; /* bitfield */
    } /* size: 0x0004 */ Active;
  }; /* size: 0x0004 */
} MI_PFN_FLAGS5, *PMI_PFN_FLAGS5; /* size: 0x0004 */

typedef struct _MI_PFN_FLAGS4
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 PteFrame : 36; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 ResidentPage : 1; /* bit position: 36 */
      /* 0x0000 */ unsigned __int64 ResidentPageContainsBadPages : 1; /* bit position: 37 */
      /* 0x0000 */ unsigned __int64 Unused1 : 1; /* bit position: 38 */
      /* 0x0000 */ unsigned __int64 Partition : 10; /* bit position: 39 */
      /* 0x0000 */ unsigned __int64 FileOnly : 1; /* bit position: 49 */
      /* 0x0000 */ unsigned __int64 PfnExists : 1; /* bit position: 50 */
      /* 0x0000 */ unsigned __int64 PageIdentity : 3; /* bit position: 51 */
      /* 0x0000 */ unsigned __int64 PrototypePte : 1; /* bit position: 54 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 EntireField;
  }; /* size: 0x0008 */
} MI_PFN_FLAGS4, *PMI_PFN_FLAGS4; /* size: 0x0008 */

typedef struct _MMPFN
{
  union
  {
    /* 0x0000 */ struct _LIST_ENTRY ListEntry;
    /* 0x0000 */ struct _RTL_BALANCED_NODE TreeNode;
    struct
    {
      /* 0x0000 */ struct _MIPFNFLINK u1;
      union
      {
        /* 0x0008 */ struct _MMPTE* PteAddress;
        /* 0x0008 */ unsigned __int64 PteLong;
      }; /* size: 0x0008 */
      /* 0x0010 */ struct _MMPTE OriginalPte;
    }; /* size: 0x0018 */
  }; /* size: 0x0018 */
  /* 0x0018 */ volatile struct _MIPFNBLINK u2;
  union
  {
    union
    {
      struct
      {
        /* 0x0020 */ unsigned short ReferenceCount;
        /* 0x0022 */ struct _MMPFNENTRY1 e1;
        /* 0x0023 */ struct _MMPFNENTRY3 e3;
      }; /* size: 0x0004 */
      struct
      {
        /* 0x0020 */ unsigned short ReferenceCount;
      } /* size: 0x0002 */ e2;
      /* 0x0020 */ volatile struct _MI_PFN_FLAGS e4;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u3;
  /* 0x0024 */ struct _MI_PFN_FLAGS5 u5;
  /* 0x0028 */ struct _MI_PFN_FLAGS4 u4;
} MMPFN, *PMMPFN; /* size: 0x0030 */

typedef struct _MMPFNLIST
{
  /* 0x0000 */ volatile unsigned __int64 Total;
  /* 0x0008 */ struct _MI_COLOR Color;
  /* 0x000c */ enum _MMLISTS ListName;
  /* 0x0010 */ volatile unsigned __int64 Flink;
  /* 0x0018 */ volatile unsigned __int64 Blink;
  /* 0x0020 */ volatile long Lock;
  /* 0x0028 */ struct _MMPFN EmbeddedPfn;
} MMPFNLIST, *PMMPFNLIST; /* size: 0x0058 */

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
  /* 0x0004 */ unsigned char PagefileNumber;
  /* 0x0005 */ unsigned char Priority;
  /* 0x0006 */ unsigned char IrpPriority;
  /* 0x0007 */ unsigned char ReservationWrite;
  /* 0x0008 */ unsigned __int64 CurrentTime;
  /* 0x0010 */ unsigned __int64 AvailablePages;
  /* 0x0018 */ unsigned __int64 ModifiedPagesTotal;
  /* 0x0020 */ unsigned __int64 ModifiedPagefilePages;
  /* 0x0028 */ unsigned __int64 ModifiedNoWritePages;
  /* 0x0030 */ unsigned __int64 ModifiedPagefileNoReservationPages;
  /* 0x0038 */ unsigned __int64 ModifiedPageFileNoReservationCompressPages;
  /* 0x0040 */ unsigned __int64 ModifiedPagefileReservationPages;
  struct
  {
    /* 0x0048 */ struct _MDL Mdl;
    /* 0x0078 */ unsigned __int64 Page[1];
  } /* size: 0x0038 */ LocalMdl;
} MI_PAGEFILE_TRACES, *PMI_PAGEFILE_TRACES; /* size: 0x0080 */

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
  /* 0x0200 */ struct _MI_PARTITION_WORKING_SET PartitionWs[1];
  /* 0x0480 */ volatile unsigned __int64 TotalCommittedPages;
  /* 0x0500 */ volatile unsigned __int64 TotalCommittedPagesExposed;
  /* 0x0580 */ struct _MMPFNLIST ModifiedPageListHead;
  /* 0x0600 */ struct _MMPFNLIST ModifiedNoWritePageListHead;
  /* 0x0658 */ volatile unsigned __int64 TotalCommitLimit;
  /* 0x0660 */ unsigned __int64 TotalPagesForPagingFile;
  /* 0x0668 */ unsigned __int64 VadPhysicalPages;
  /* 0x0670 */ unsigned __int64 ProcessLockedFilePages;
  /* 0x0678 */ volatile unsigned __int64 SharedCommit;
  /* 0x0680 */ volatile unsigned __int64 MdlPagesAllocated;
  /* 0x0688 */ volatile unsigned __int64 ContiguousPagesAllocated;
  /* 0x0690 */ unsigned __int64 SlabAllocatorPages;
  /* 0x0698 */ unsigned __int64 SlabAllocatorPagesUncharged;
  /* 0x06a0 */ unsigned __int64 BootSlabPages;
  /* 0x06a8 */ unsigned __int64 SecureKernelPagesFromNonChargedSlabs;
  /* 0x06b0 */ unsigned long ChargeCommitmentFailures[4];
  /* 0x06c0 */ volatile long PageFileTraceIndex;
  /* 0x06c8 */ struct _MI_PAGEFILE_TRACES PageFileTraces[32];
  /* 0x16c8 */ long __PADDING__[14];
} MI_VISIBLE_PARTITION, *PMI_VISIBLE_PARTITION; /* size: 0x1700 */

