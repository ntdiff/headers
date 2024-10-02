typedef struct _RTL_BITMAP_EX
{
  /* 0x0000 */ unsigned __int64 SizeOfBitMap;
  /* 0x0008 */ unsigned __int64* Buffer;
} RTL_BITMAP_EX, *PRTL_BITMAP_EX; /* size: 0x0010 */

typedef struct _MI_NODE_FREE_PAGE_INFORMATION
{
  /* 0x0000 */ volatile unsigned long PageColorHand;
  /* 0x0008 */ unsigned __int64 FreeCount[2];
  /* 0x0018 */ unsigned __int64 FreeZeroCountByAttribute[4][2];
  /* 0x0080 */ struct _RTL_BITMAP_EX FreePageListHeadsBitmap[2][4][2];
  /* 0x0180 */ unsigned __int64 FreePageListHeadsBitmapBuffer[64];
  /* 0x0380 */ unsigned __int64 LargePageFreeCountHiLow[2][2];
  /* 0x03a0 */ unsigned __int64 LargePageCount[2][2][2];
  /* 0x03e0 */ struct _MMPFNLIST* LargePageEntries[4][2][2][2];
  /* 0x04e0 */ long __PADDING__[8];
} MI_NODE_FREE_PAGE_INFORMATION, *PMI_NODE_FREE_PAGE_INFORMATION; /* size: 0x0500 */

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

typedef struct _MI_REBUILD_LARGE_PAGE_TIMER
{
  /* 0x0000 */ struct _WORK_QUEUE_ITEM WorkItem;
  /* 0x0020 */ unsigned char SecondsLeft;
  /* 0x0021 */ unsigned char RebuildActive;
  /* 0x0022 */ unsigned char NextPassDelta;
  /* 0x0023 */ unsigned char LargeSubPagesActive;
  /* 0x0024 */ long __PADDING__[1];
} MI_REBUILD_LARGE_PAGE_TIMER, *PMI_REBUILD_LARGE_PAGE_TIMER; /* size: 0x0028 */

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

typedef struct _MI_STANDBY_LOOKASIDE
{
  /* 0x0000 */ unsigned __int64 Array[64];
} MI_STANDBY_LOOKASIDE, *PMI_STANDBY_LOOKASIDE; /* size: 0x0200 */

typedef struct _MI_HUGE_PFN_COLORHEAD
{
  union
  {
    union
    {
      struct
      {
        /* 0x0000 */ unsigned __int64 EntireField;
      } /* size: 0x0008 */ e1;
      struct
      {
        struct /* bitfield */
        {
          /* 0x0000 */ unsigned __int64 PageState : 3; /* bit position: 0 */
          /* 0x0000 */ unsigned __int64 LockBit : 1; /* bit position: 3 */
          /* 0x0000 */ unsigned __int64 Partition : 11; /* bit position: 4 */
          /* 0x0000 */ unsigned __int64 Flink : 18; /* bit position: 15 */
          /* 0x0000 */ unsigned __int64 Blink : 18; /* bit position: 33 */
        }; /* bitfield */
      } /* size: 0x0008 */ OnList;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u1;
} MI_HUGE_PFN_COLORHEAD, *PMI_HUGE_PFN_COLORHEAD; /* size: 0x0008 */

typedef union _MI_PAGE_MOVE_PROGRESS_STATE
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 InProgressProcessors : 16; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 SequenceNumber : 48; /* bit position: 16 */
    }; /* bitfield */
    /* 0x0000 */ __int64 EntireValue;
  }; /* size: 0x0008 */
} MI_PAGE_MOVE_PROGRESS_STATE, *PMI_PAGE_MOVE_PROGRESS_STATE; /* size: 0x0008 */

typedef union _SLIST_HEADER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned __int64 Alignment;
      /* 0x0008 */ unsigned __int64 Region;
    }; /* size: 0x0010 */
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Depth : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 Sequence : 48; /* bit position: 16 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 Reserved : 4; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 NextEntry : 60; /* bit position: 4 */
      }; /* bitfield */
    } /* size: 0x0010 */ HeaderArm64;
  }; /* size: 0x0010 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0010 */

typedef struct _MI_KSTACK_ALLOCATIONS
{
  /* 0x0000 */ unsigned long AllocationPeaks[4];
} MI_KSTACK_ALLOCATIONS, *PMI_KSTACK_ALLOCATIONS; /* size: 0x0010 */

typedef struct _CACHED_KSTACK_LIST
{
  /* 0x0000 */ union _SLIST_HEADER SListHead;
  /* 0x0010 */ struct _MI_KSTACK_ALLOCATIONS Counters;
  /* 0x0020 */ volatile unsigned long CurrentIndex;
  /* 0x0024 */ volatile unsigned long InUseAtOnce;
  /* 0x0028 */ unsigned long MinimumFree;
  /* 0x002c */ unsigned char NonIdealStacksPresent;
  /* 0x002d */ char __PADDING__[3];
} CACHED_KSTACK_LIST, *PCACHED_KSTACK_LIST; /* size: 0x0030 */

typedef struct _RTL_RB_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
  union
  {
    /* 0x0008 */ unsigned char Encoded : 1; /* bit position: 0 */
    /* 0x0008 */ struct _RTL_BALANCED_NODE* Min;
  }; /* size: 0x0008 */
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0010 */

typedef enum _MI_SLAB_ALLOCATOR_TYPE
{
  MiSlabAllocatorTypeSlatProtectedStart = 0,
  MiSlabAllocatorTypeExecuteProtected = 0,
  MiSlabAllocatorTypeReadOnlyProtected = 1,
  MiSlabAllocatorTypeNoAccessProtected = 2,
  MiSlabAllocatorTypeKernelShadowStackProtected = 3,
  MiSlabAllocatorTypePagingProtected = 4,
  MiSlabAllocatorTypeSlatProtectedLast = 4,
  MiSlabAllocatorTypeSlatUnprotectedStart = 5,
  MiSlabAllocatorTypeImageUnprotected = 5,
  MiSlabAllocatorTypeGenericUnprotected = 6,
  MiSlabAllocatorTypeNonPagedUnprotected = 7,
  MiSlabAllocatorTypeIdentityUnprotected = 8,
  MiSlabAllocatorTypeSlatUnprotectedLast = 8,
  MiSlabAllocatorTypeMax = 9,
} MI_SLAB_ALLOCATOR_TYPE, *PMI_SLAB_ALLOCATOR_TYPE;

typedef struct _MI_NODE_NUMBER_ZERO_BASED
{
  /* 0x0000 */ unsigned long ZeroBased;
} MI_NODE_NUMBER_ZERO_BASED, *PMI_NODE_NUMBER_ZERO_BASED; /* size: 0x0004 */

typedef struct _MI_SLAB_ALLOCATOR_CONTEXT
{
  /* 0x0000 */ struct _RTL_RB_TREE SlabTree;
  /* 0x0010 */ volatile long Lock;
  /* 0x0018 */ struct _MI_PARTITION* Partition;
  struct
  {
    union
    {
      struct
      {
        /* 0x0020 */ struct _MI_SLAB_ALLOCATOR_ENTRY* AllocationHint;
        /* 0x0028 */ struct _MI_SLAB_ALLOCATOR_ENTRY* FreeHint;
      } /* size: 0x0010 */ NonIdentity;
      struct
      {
        /* 0x0020 */ struct _MI_SLAB_ALLOCATOR_ENTRY** AllocationHints;
        /* 0x0028 */ struct _MI_SLAB_ALLOCATOR_ENTRY** FreeHints;
      } /* size: 0x0010 */ Identity;
    }; /* size: 0x0010 */
    /* 0x0030 */ struct _MI_SLAB_ALLOCATOR_ENTRY* DefragSourceEntry;
    /* 0x0038 */ struct _MI_SLAB_ALLOCATOR_ENTRY* DefragTargetEntry;
  } /* size: 0x0020 */ Hints;
  /* 0x0040 */ void* StandbyPageCache;
  /* 0x0048 */ void* StandbyPageList;
  /* 0x0050 */ struct _MMPFNLIST* RepurposedStandbyPageList;
  /* 0x0058 */ struct _LIST_ENTRY* SlabListsByIdentity;
  /* 0x0060 */ unsigned __int64 FreePageCount;
  /* 0x0068 */ unsigned __int64 AvailablePagesGoal;
  /* 0x0070 */ unsigned __int64 ChargedPageCount;
  /* 0x0078 */ unsigned __int64 SlabEntryCount;
  /* 0x0080 */ enum _MI_SLAB_ALLOCATOR_TYPE Type;
  /* 0x0084 */ struct _MI_NODE_NUMBER_ZERO_BASED NumaNodeIndex;
  union
  {
    union
    {
      struct /* bitfield */
      {
        /* 0x0088 */ unsigned long EntryBecameEmpty : 1; /* bit position: 0 */
        /* 0x0088 */ unsigned long DemoteInProgress : 1; /* bit position: 1 */
        /* 0x0088 */ unsigned long PreferZeroedPages : 1; /* bit position: 2 */
        /* 0x0088 */ unsigned long ZeroOnFree : 1; /* bit position: 3 */
        /* 0x0088 */ unsigned long LargePageIndex : 2; /* bit position: 4 */
        /* 0x0088 */ unsigned long Spare : 26; /* bit position: 6 */
      }; /* bitfield */
      /* 0x0088 */ unsigned long AllFlags;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ Flags;
  /* 0x008c */ volatile long ReEvaluateAllocationHint;
  /* 0x0090 */ unsigned long SlabEntriesAllocated;
  /* 0x0094 */ unsigned long SlabEntriesDemoted;
  /* 0x0098 */ unsigned long SlabEntriesFailedFast;
  /* 0x009c */ unsigned long SlabEntriesFailedSlow;
  /* 0x00a0 */ unsigned long SlabPagesFreedNonZeroed;
  /* 0x00a4 */ unsigned long SlabPagesCrossIdentity;
  /* 0x00a8 */ unsigned __int64 LastReplenishTime;
  /* 0x00b0 */ unsigned __int64 LastFailureTime;
  /* 0x00b8 */ struct _WORK_QUEUE_ITEM ReplenishWorkItem;
  /* 0x00d8 */ struct _LIST_ENTRY ReplenishWaitList;
} MI_SLAB_ALLOCATOR_CONTEXT, *PMI_SLAB_ALLOCATOR_CONTEXT; /* size: 0x00e8 */

typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0008 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0010 */

typedef struct _MI_LARGE_PAGE_NODE_COALESCE_STATE
{
  /* 0x0000 */ __int64 CandidateCount[3];
  /* 0x0018 */ unsigned __int64 NewCandidateSequence[3];
} MI_LARGE_PAGE_NODE_COALESCE_STATE, *PMI_LARGE_PAGE_NODE_COALESCE_STATE; /* size: 0x0030 */

typedef struct _MI_NODE_INFORMATION
{
  /* 0x0000 */ struct _MI_NODE_FREE_PAGE_INFORMATION FreePageInfo[4];
  /* 0x1400 */ unsigned __int64* HotZeroedPageCountsByColor[4];
  /* 0x1420 */ struct _MI_REBUILD_LARGE_PAGE_TIMER LargePageRebuildTimer;
  /* 0x1448 */ struct _MMPFNLIST StandbyPageList[8][2];
  /* 0x1a00 */ struct _MI_STANDBY_LOOKASIDE StandbyPageCachePerChannel[8][2];
  /* 0x3a00 */ struct _RTL_BITMAP_EX FreePageSListsBitmap[2];
  /* 0x3a20 */ unsigned __int64 FreePageSListsBitmapBuffer[8];
  /* 0x3a60 */ union _SLIST_HEADER* FreeZeroPageSlists[2];
  /* 0x3a70 */ unsigned __int64 TotalPages[2];
  /* 0x3a80 */ unsigned __int64 TotalPagesEntireNode;
  /* 0x3a88 */ struct _MI_PARTITION* Partition;
  /* 0x3a90 */ unsigned __int64 TotalHugeIoPages;
  /* 0x3a98 */ unsigned __int64 HugeIoRangeFreeCount[2][2];
  /* 0x3b00 */ struct _RTL_BITMAP_EX FreeHugeRangeListHeadsBitmap[2];
  /* 0x3b20 */ unsigned __int64 FreeHugeRangeListHeadsBitmapBuffer[8];
  /* 0x3b60 */ struct _MI_HUGE_PFN_COLORHEAD BadHugeRangeListHead;
  /* 0x3b68 */ unsigned long Color;
  /* 0x3b70 */ unsigned __int64 ChannelFreeCount[2][2];
  struct
  {
    struct /* bitfield */
    {
      /* 0x3b90 */ unsigned long ChannelsHotCold : 1; /* bit position: 0 */
      /* 0x3b90 */ unsigned long HeatHintsDisabled : 1; /* bit position: 1 */
      /* 0x3b90 */ unsigned long Spare : 30; /* bit position: 2 */
    }; /* bitfield */
  } /* size: 0x0004 */ Flags;
  /* 0x3b98 */ union _MI_PAGE_MOVE_PROGRESS_STATE PageListMoveInProgress[3];
  /* 0x3bb0 */ unsigned long CurrentHugeRangeColor;
  /* 0x3bb4 */ volatile long NodeLock;
  /* 0x3bb8 */ volatile long ZeroThreadHugeMapLock;
  /* 0x3bbc */ volatile long LargePageRebuildLock;
  /* 0x3bc0 */ unsigned char ChannelStatus;
  /* 0x3bc1 */ unsigned char ChannelOrdering[2];
  /* 0x3bc3 */ unsigned char LockedChannelOrdering[2];
  /* 0x3bc5 */ unsigned char PowerAttribute[2];
  /* 0x3bc8 */ unsigned long RollingKernelStackAllocationIndex;
  /* 0x3bd0 */ unsigned __int64 ScrubResumePage;
  /* 0x3bd8 */ unsigned __int64 NumberOfPagesGoingBad;
  /* 0x3be0 */ void* BootZeroContext;
  /* 0x3be8 */ void* ZeroingContext;
  /* 0x3bf0 */ volatile long ZeroContextLock;
  /* 0x3bf8 */ void* ZeroThreadConductor;
  /* 0x3c00 */ unsigned char BackgroundZeroingActive;
  /* 0x3c08 */ struct _PHYSICAL_MEMORY_DESCRIPTOR* ZeroingPhysicalMemoryBlock;
  /* 0x3c10 */ struct _CACHED_KSTACK_LIST CachedKernelStacks[8];
  /* 0x3d90 */ struct _MI_SLAB_ALLOCATOR_CONTEXT SlabContexts[9];
  /* 0x4600 */ struct _MI_STANDBY_LOOKASIDE SlabStandbyListCaches[8][8];
  /* 0xc600 */ struct _MMPFNLIST SlabStandbyPageLists[8][8];
  /* 0xdc00 */ struct _MMPFNLIST SlabRepurposedStandbyPageLists[9];
  /* 0xdf18 */ struct _RTL_BITMAP SlabTypeStandbyExistsBitmap;
  /* 0xdf28 */ unsigned long SlabTypeStandbyExistsBitmapBuffer[1];
  /* 0xdf30 */ struct _MI_NODE_SLAB_IDENTITY_STATE* SlabIdentityState;
  /* 0xdf38 */ unsigned __int64 MdlSlabFragmentionLastDemoteTime;
  /* 0xdf40 */ struct _MI_LARGE_PAGE_NODE_COALESCE_STATE LargePageCoalesceState;
  /* 0xdf70 */ long __PADDING__[4];
} MI_NODE_INFORMATION, *PMI_NODE_INFORMATION; /* size: 0xdf80 */

