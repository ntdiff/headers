typedef struct _RTL_AVL_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
} RTL_AVL_TREE, *PRTL_AVL_TREE; /* size: 0x0008 */

typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 Shared : 60; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0008 */

typedef struct _MI_UNUSED_SEGMENT_TRACES
{
  /* 0x0000 */ unsigned __int64 ElapsedTime;
  /* 0x0008 */ unsigned __int64 PagesMoved;
  /* 0x0010 */ unsigned __int64 PagesFlushed;
  /* 0x0018 */ unsigned long NumberOfThreads;
  /* 0x001c */ long __PADDING__[1];
} MI_UNUSED_SEGMENT_TRACES, *PMI_UNUSED_SEGMENT_TRACES; /* size: 0x0020 */

typedef union _MMSUBSECTION_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long SubsectionAccessed : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Protection : 5; /* bit position: 1 */
      /* 0x0000 */ unsigned long StartingSector4132 : 10; /* bit position: 6 */
      /* 0x0000 */ unsigned long SubsectionStatic : 1; /* bit position: 16 */
      /* 0x0000 */ unsigned long GlobalMemory : 1; /* bit position: 17 */
      /* 0x0000 */ unsigned long Spare : 1; /* bit position: 18 */
      /* 0x0000 */ unsigned long OnDereferenceList : 1; /* bit position: 19 */
      /* 0x0000 */ unsigned long SectorEndOffset : 12; /* bit position: 20 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long EntireField;
  }; /* size: 0x0004 */
} MMSUBSECTION_FLAGS, *PMMSUBSECTION_FLAGS; /* size: 0x0004 */

typedef struct _MI_SUBSECTION_ENTRY1
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long CrossPartitionReferences : 30; /* bit position: 0 */
    /* 0x0000 */ unsigned long SubsectionMappedLarge : 2; /* bit position: 30 */
  }; /* bitfield */
} MI_SUBSECTION_ENTRY1, *PMI_SUBSECTION_ENTRY1; /* size: 0x0004 */

typedef struct _SUBSECTION
{
  /* 0x0000 */ struct _CONTROL_AREA* ControlArea;
  /* 0x0008 */ struct _MMPTE* SubsectionBase;
  /* 0x0010 */ struct _SUBSECTION* NextSubsection;
  union
  {
    /* 0x0018 */ struct _RTL_AVL_TREE GlobalPerSessionHead;
    /* 0x0018 */ struct _MI_CONTROL_AREA_WAIT_BLOCK* CreationWaitList;
  }; /* size: 0x0008 */
  /* 0x0020 */ union _MMSUBSECTION_FLAGS SubsectionFlags;
  /* 0x0024 */ unsigned long StartingSector;
  /* 0x0028 */ unsigned long NumberOfFullSectors;
  /* 0x002c */ unsigned long PtesInSubsection;
  union
  {
    union
    {
      /* 0x0030 */ struct _MI_SUBSECTION_ENTRY1 e1;
      /* 0x0030 */ unsigned long EntireField;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u1;
  struct /* bitfield */
  {
    /* 0x0034 */ unsigned long UnusedPtes : 30; /* bit position: 0 */
    /* 0x0034 */ unsigned long ExtentQueryNeeded : 1; /* bit position: 30 */
    /* 0x0034 */ unsigned long Spare : 1; /* bit position: 31 */
  }; /* bitfield */
} SUBSECTION, *PSUBSECTION; /* size: 0x0038 */

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

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _MI_PROTOTYPE_PTES_NODE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE Node;
  union
  {
    union
    {
      struct
      {
        struct /* bitfield */
        {
          /* 0x0018 */ unsigned __int64 AllocationType : 3; /* bit position: 0 */
          /* 0x0018 */ unsigned __int64 Inserted : 1; /* bit position: 3 */
        }; /* bitfield */
      } /* size: 0x0008 */ e1;
      struct
      {
        /* 0x0018 */ unsigned __int64 PrototypePtesFlags;
      } /* size: 0x0008 */ e2;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u1;
} MI_PROTOTYPE_PTES_NODE, *PMI_PROTOTYPE_PTES_NODE; /* size: 0x0020 */

typedef struct _MSUBSECTION
{
  /* 0x0000 */ struct _SUBSECTION Core;
  /* 0x0038 */ struct _RTL_BALANCED_NODE SubsectionNode;
  /* 0x0050 */ unsigned __int64 NumberOfMappedViews;
  /* 0x0058 */ struct _LIST_ENTRY DereferenceList;
  /* 0x0068 */ unsigned long NumberOfPfnReferences;
  /* 0x006c */ unsigned long LargeViews;
  /* 0x0070 */ void* SubsectionExtentList;
  /* 0x0078 */ struct _MI_PROTOTYPE_PTES_NODE ProtosNode;
} MSUBSECTION, *PMSUBSECTION; /* size: 0x0098 */

typedef struct _MMSECTION_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned int BeingDeleted : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned int BeingCreated : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned int BeingPurged : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned int NoModifiedWriting : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned int FailAllIo : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned int Image : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned int Based : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned int File : 1; /* bit position: 7 */
    /* 0x0000 */ unsigned int SectionOfInterest : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned int PrefetchCreated : 1; /* bit position: 9 */
    /* 0x0000 */ unsigned int PhysicalMemory : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned int ImageControlAreaOnRemovableMedia : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned int Reserve : 1; /* bit position: 12 */
    /* 0x0000 */ unsigned int Commit : 1; /* bit position: 13 */
    /* 0x0000 */ unsigned int NoChange : 1; /* bit position: 14 */
    /* 0x0000 */ unsigned int WasPurged : 1; /* bit position: 15 */
    /* 0x0000 */ unsigned int UserReference : 1; /* bit position: 16 */
    /* 0x0000 */ unsigned int GlobalMemory : 1; /* bit position: 17 */
    /* 0x0000 */ unsigned int DeleteOnClose : 1; /* bit position: 18 */
    /* 0x0000 */ unsigned int FilePointerNull : 1; /* bit position: 19 */
    /* 0x0000 */ unsigned long PreferredNode : 7; /* bit position: 20 */
    /* 0x0000 */ unsigned int GlobalOnlyPerSession : 1; /* bit position: 27 */
    /* 0x0000 */ unsigned int ControlAreaOnUnusedList : 1; /* bit position: 28 */
    /* 0x0000 */ unsigned int SystemVaAllocated : 1; /* bit position: 29 */
    /* 0x0000 */ unsigned int NotBeingUsed : 1; /* bit position: 30 */
    /* 0x0000 */ unsigned int PageSize64K : 1; /* bit position: 31 */
  }; /* bitfield */
} MMSECTION_FLAGS, *PMMSECTION_FLAGS; /* size: 0x0004 */

typedef struct _MMSECTION_FLAGS2
{
  /* 0x0000 */ unsigned short PartitionId : 10; /* bit position: 0 */
  struct /* bitfield */
  {
    /* 0x0002 */ unsigned char NoCrossPartitionAccess : 1; /* bit position: 0 */
    /* 0x0002 */ unsigned char SubsectionCrossPartitionReferenceOverflow : 1; /* bit position: 1 */
    /* 0x0002 */ unsigned char UsingFileExtents : 2; /* bit position: 2 */
  }; /* bitfield */
  /* 0x0003 */ char __PADDING__[1];
} MMSECTION_FLAGS2, *PMMSECTION_FLAGS2; /* size: 0x0004 */

typedef struct _EX_FAST_REF
{
  union
  {
    /* 0x0000 */ void* Object;
    /* 0x0000 */ unsigned __int64 RefCnt : 4; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Value;
  }; /* size: 0x0008 */
} EX_FAST_REF, *PEX_FAST_REF; /* size: 0x0008 */

typedef union _MI_IMAGE_INFO_REF
{
  union
  {
    /* 0x0000 */ long LongValue;
    /* 0x0000 */ unsigned __int64 FullValue;
    /* 0x0000 */ struct _MI_IMAGE_ADDITIONAL_INFO* PointerValue;
    /* 0x0000 */ unsigned __int64 AllFlags : 3; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 DebugRecordsPresent : 1; /* bit position: 0 */
  }; /* size: 0x0008 */
} MI_IMAGE_INFO_REF, *PMI_IMAGE_INFO_REF; /* size: 0x0008 */

typedef struct _CONTROL_AREA
{
  /* 0x0000 */ struct _SEGMENT* Segment;
  union
  {
    /* 0x0008 */ struct _LIST_ENTRY ListHead;
    /* 0x0008 */ void* AweContext;
  }; /* size: 0x0010 */
  /* 0x0018 */ unsigned __int64 NumberOfSectionReferences;
  /* 0x0020 */ unsigned __int64 NumberOfPfnReferences;
  /* 0x0028 */ unsigned __int64 NumberOfMappedViews;
  /* 0x0030 */ unsigned __int64 NumberOfUserReferences;
  union
  {
    union
    {
      /* 0x0038 */ unsigned long LongFlags;
      /* 0x0038 */ struct _MMSECTION_FLAGS Flags;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u;
  union
  {
    union
    {
      /* 0x003c */ unsigned long LongFlags;
      /* 0x003c */ struct _MMSECTION_FLAGS2 Flags;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u1;
  /* 0x0040 */ struct _EX_FAST_REF FilePointer;
  /* 0x0048 */ volatile long ControlAreaLock;
  /* 0x004c */ unsigned long ModifiedWriteCount;
  /* 0x0050 */ struct _MI_CONTROL_AREA_WAIT_BLOCK* WaitList;
  union
  {
    struct
    {
      union
      {
        /* 0x0058 */ unsigned long NumberOfSystemCacheViews;
        /* 0x0058 */ unsigned long ImageRelocationStartBit;
      }; /* size: 0x0004 */
      union
      {
        /* 0x005c */ volatile long WritableUserReferences;
        struct /* bitfield */
        {
          /* 0x005c */ unsigned long ImageRelocationSizeIn64k : 16; /* bit position: 0 */
          /* 0x005c */ unsigned long SystemImage : 1; /* bit position: 16 */
          /* 0x005c */ unsigned long CantMove : 1; /* bit position: 17 */
          /* 0x005c */ unsigned long StrongCode : 2; /* bit position: 18 */
          /* 0x005c */ unsigned long BitMap : 2; /* bit position: 20 */
          /* 0x005c */ unsigned long ImageActive : 1; /* bit position: 22 */
          /* 0x005c */ unsigned long ImageBaseOkToReuse : 1; /* bit position: 23 */
        }; /* bitfield */
      }; /* size: 0x0004 */
      union
      {
        /* 0x0060 */ unsigned long NumberOfSubsections;
        /* 0x0060 */ union _MI_IMAGE_INFO_REF ImageInfoRef;
      }; /* size: 0x0008 */
    } /* size: 0x0010 */ e2;
  } /* size: 0x0010 */ u2;
  /* 0x0068 */ struct _EX_PUSH_LOCK FileObjectLock;
  /* 0x0070 */ volatile unsigned __int64 LockedPages;
  union
  {
    union
    {
      struct /* bitfield */
      {
        /* 0x0078 */ unsigned __int64 Spare : 3; /* bit position: 0 */
        /* 0x0078 */ unsigned __int64 IoAttributionContext : 61; /* bit position: 3 */
      }; /* bitfield */
      /* 0x0078 */ unsigned __int64 ImageCrossPartitionCharge;
      /* 0x0078 */ unsigned __int64 CommittedPageCount : 36; /* bit position: 0 */
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u3;
} CONTROL_AREA, *PCONTROL_AREA; /* size: 0x0080 */

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

typedef struct _MI_PAGE_CHAIN_HEAD
{
  /* 0x0000 */ struct _MMPFN* Head;
  /* 0x0008 */ struct _MMPFN* Tail;
  /* 0x0010 */ unsigned __int64 NumberOfEntries;
} MI_PAGE_CHAIN_HEAD, *PMI_PAGE_CHAIN_HEAD; /* size: 0x0018 */

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0010 */ void* WorkerRoutine /* function */;
  /* 0x0018 */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0020 */

typedef struct _DISPATCHER_HEADER
{
  union
  {
    /* 0x0000 */ volatile long Lock;
    /* 0x0000 */ long LockNV;
    struct
    {
      /* 0x0000 */ unsigned char Type;
      /* 0x0001 */ unsigned char Signalling;
      /* 0x0002 */ unsigned char Size;
      /* 0x0003 */ unsigned char Reserved1;
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char TimerType;
      union
      {
        /* 0x0001 */ unsigned char TimerControlFlags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0001 */ unsigned char Absolute : 1; /* bit position: 0 */
            /* 0x0001 */ unsigned char Wake : 1; /* bit position: 1 */
            /* 0x0001 */ unsigned char EncodedTolerableDelay : 6; /* bit position: 2 */
          }; /* bitfield */
          /* 0x0002 */ unsigned char Hand;
          union
          {
            /* 0x0003 */ unsigned char TimerMiscFlags;
            struct /* bitfield */
            {
              /* 0x0003 */ unsigned char Index : 6; /* bit position: 0 */
              /* 0x0003 */ unsigned char Inserted : 1; /* bit position: 6 */
              /* 0x0003 */ volatile unsigned char Expired : 1; /* bit position: 7 */
            }; /* bitfield */
          }; /* size: 0x0001 */
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char Timer2Type;
      union
      {
        /* 0x0001 */ unsigned char Timer2Flags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0001 */ unsigned char Timer2Inserted : 1; /* bit position: 0 */
            /* 0x0001 */ unsigned char Timer2Expiring : 1; /* bit position: 1 */
            /* 0x0001 */ unsigned char Timer2CancelPending : 1; /* bit position: 2 */
            /* 0x0001 */ unsigned char Timer2SetPending : 1; /* bit position: 3 */
            /* 0x0001 */ unsigned char Timer2Running : 1; /* bit position: 4 */
            /* 0x0001 */ unsigned char Timer2Disabled : 1; /* bit position: 5 */
            /* 0x0001 */ unsigned char Timer2ReservedFlags : 2; /* bit position: 6 */
          }; /* bitfield */
          /* 0x0002 */ unsigned char Timer2ComponentId;
          /* 0x0003 */ unsigned char Timer2RelativeId;
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char QueueType;
      union
      {
        /* 0x0001 */ unsigned char QueueControlFlags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0001 */ unsigned char Abandoned : 1; /* bit position: 0 */
            /* 0x0001 */ unsigned char DisableIncrement : 1; /* bit position: 1 */
            /* 0x0001 */ unsigned char QueueReservedControlFlags : 6; /* bit position: 2 */
          }; /* bitfield */
          /* 0x0002 */ unsigned char QueueSize;
          /* 0x0003 */ unsigned char QueueReserved;
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char ThreadType;
      /* 0x0001 */ unsigned char ThreadReserved;
      union
      {
        /* 0x0002 */ unsigned char ThreadControlFlags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0002 */ unsigned char CycleProfiling : 1; /* bit position: 0 */
            /* 0x0002 */ unsigned char CounterProfiling : 1; /* bit position: 1 */
            /* 0x0002 */ unsigned char GroupScheduling : 1; /* bit position: 2 */
            /* 0x0002 */ unsigned char AffinitySet : 1; /* bit position: 3 */
            /* 0x0002 */ unsigned char Tagged : 1; /* bit position: 4 */
            /* 0x0002 */ unsigned char EnergyProfiling : 1; /* bit position: 5 */
            /* 0x0002 */ unsigned char SchedulerAssist : 1; /* bit position: 6 */
            /* 0x0002 */ unsigned char ThreadReservedControlFlags : 1; /* bit position: 7 */
          }; /* bitfield */
          union
          {
            /* 0x0003 */ unsigned char DebugActive;
            struct /* bitfield */
            {
              /* 0x0003 */ unsigned char ActiveDR7 : 1; /* bit position: 0 */
              /* 0x0003 */ unsigned char Instrumented : 1; /* bit position: 1 */
              /* 0x0003 */ unsigned char Minimal : 1; /* bit position: 2 */
              /* 0x0003 */ unsigned char Reserved4 : 2; /* bit position: 3 */
              /* 0x0003 */ unsigned char AltSyscall : 1; /* bit position: 5 */
              /* 0x0003 */ unsigned char Emulation : 1; /* bit position: 6 */
              /* 0x0003 */ unsigned char Reserved5 : 1; /* bit position: 7 */
            }; /* bitfield */
          }; /* size: 0x0001 */
        }; /* size: 0x0002 */
      }; /* size: 0x0002 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char MutantType;
      /* 0x0001 */ unsigned char MutantSize;
      /* 0x0002 */ unsigned char DpcActive;
      /* 0x0003 */ unsigned char MutantReserved;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
  /* 0x0004 */ long SignalState;
  /* 0x0008 */ struct _LIST_ENTRY WaitListHead;
} DISPATCHER_HEADER, *PDISPATCHER_HEADER; /* size: 0x0018 */

typedef struct _KGATE
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KGATE, *PKGATE; /* size: 0x0018 */

typedef struct _MI_EXTENT_DELETION_WAIT_BLOCK
{
  /* 0x0000 */ struct _MI_EXTENT_DELETION_WAIT_BLOCK* Next;
  /* 0x0008 */ struct _KGATE Gate;
} MI_EXTENT_DELETION_WAIT_BLOCK, *PMI_EXTENT_DELETION_WAIT_BLOCK; /* size: 0x0020 */

typedef struct _RTL_BITMAP_EX
{
  /* 0x0000 */ unsigned __int64 SizeOfBitMap;
  /* 0x0008 */ unsigned __int64* Buffer;
} RTL_BITMAP_EX, *PRTL_BITMAP_EX; /* size: 0x0010 */

typedef struct _MI_DLL_OVERFLOW_AREA
{
  /* 0x0000 */ void* RangeStart;
  /* 0x0008 */ void* NextVa;
  /* 0x0010 */ void* RangeStartAbove2gb;
  /* 0x0018 */ void* NextVaAbove2gb;
} MI_DLL_OVERFLOW_AREA, *PMI_DLL_OVERFLOW_AREA; /* size: 0x0020 */

typedef struct _MI_SECTION_WOW_STATE
{
  /* 0x0000 */ struct _RTL_BITMAP_EX ImageBitMap;
  /* 0x0010 */ struct _MI_DLL_OVERFLOW_AREA OverflowArea;
  /* 0x0030 */ struct _SECTION* CfgBitMapSection;
  /* 0x0038 */ struct _CONTROL_AREA* CfgBitMapControlArea;
} MI_SECTION_WOW_STATE, *PMI_SECTION_WOW_STATE; /* size: 0x0040 */

typedef struct _MI_SECTION_STATE
{
  /* 0x0000 */ volatile long SectionObjectPointersLock;
  /* 0x0008 */ struct _RTL_AVL_TREE SectionBasedRoot;
  /* 0x0010 */ struct _EX_PUSH_LOCK SectionBasedLock;
  /* 0x0018 */ volatile unsigned __int64 UnusedSegmentPagedPool;
  /* 0x0020 */ long CalibrationIndex;
  /* 0x0028 */ struct _MI_UNUSED_SEGMENT_TRACES CalibrationData[64];
  /* 0x0828 */ unsigned long DataSectionProtectionMask;
  /* 0x0830 */ void* HighSectionBase;
  /* 0x0838 */ struct _MSUBSECTION PhysicalSubsection;
  /* 0x08d0 */ struct _CONTROL_AREA PhysicalControlArea;
  /* 0x0950 */ struct _MMPFNLIST PurgingExtentPages;
  /* 0x09a8 */ struct _MI_PAGE_CHAIN_HEAD DanglingExtentPages;
  /* 0x09c0 */ struct _WORK_QUEUE_ITEM DanglingExtentsWorkItem;
  /* 0x09e0 */ struct _MI_EXTENT_DELETION_WAIT_BLOCK DanglingExtentsDeletionWaitList;
  /* 0x0a00 */ unsigned char FileOnlyMemoryPfnsCreated;
  /* 0x0a01 */ unsigned char DanglingExtentsWorkerActive;
  /* 0x0a02 */ unsigned char PurgingExtentsNeedWatchdog;
  /* 0x0a08 */ struct _RTL_AVL_TREE PrototypePtesTree;
  /* 0x0a10 */ volatile long PrototypePtesTreeSpinLock;
  /* 0x0a18 */ struct _EX_PUSH_LOCK PrivateFixupMappingLock;
  /* 0x0a20 */ struct _MMPTE* PrivateFixupPte;
  /* 0x0a28 */ struct _EX_PUSH_LOCK RelocateBitmapsLock;
  /* 0x0a30 */ struct _RTL_BITMAP_EX ImageBitMapNative;
  /* 0x0a40 */ unsigned __int64 ImageBiasNative;
  /* 0x0a48 */ struct _MI_DLL_OVERFLOW_AREA OverflowArea;
  /* 0x0a68 */ struct _MI_SECTION_WOW_STATE Wow[1];
  /* 0x0aa8 */ unsigned __int64 ImageBiasWow;
  /* 0x0ab0 */ struct _RTL_BITMAP_EX ImageBitMapWowScratch;
  /* 0x0ac0 */ void* ApiSetSection;
  /* 0x0ac8 */ void* ApiSetSchema;
  /* 0x0ad0 */ unsigned __int64 ApiSetSchemaSize;
  /* 0x0ad8 */ unsigned long LostDataFiles;
  /* 0x0adc */ unsigned long LostDataPages;
  /* 0x0ae0 */ unsigned long ImageFailureReason;
  /* 0x0ae8 */ struct _SECTION* CfgBitMapSection;
  /* 0x0af0 */ struct _CONTROL_AREA* CfgBitMapControlArea;
  /* 0x0af8 */ struct _RTL_BITMAP_EX KernelCfgBitMap;
  /* 0x0b08 */ struct _EX_PUSH_LOCK KernelCfgBitMapLock;
  /* 0x0b10 */ unsigned long ImageCfgFailure;
  /* 0x0b18 */ void* KernelScpStartAddress;
  /* 0x0b20 */ unsigned long KernelScpReservePages;
  /* 0x0b24 */ unsigned long KernelScpPages;
  /* 0x0b28 */ struct _MDL* KernelScpMdl;
  /* 0x0b30 */ long RetpolineBootStatus;
  /* 0x0b38 */ struct _MMPTE* RetpolineRevertPte;
  /* 0x0b40 */ struct _SECTION* EcBitMapSection;
  /* 0x0b48 */ struct _CONTROL_AREA* EcBitMapControlArea;
  /* 0x0b50 */ unsigned long ImageBreakpointEnabled;
  /* 0x0b54 */ unsigned long ImageBreakpointChecksum;
  /* 0x0b58 */ unsigned long ImageBreakpointSize;
  /* 0x0b5c */ volatile long ImageValidationFailed;
  /* 0x0b60 */ struct _RTL_AVL_TREE ExtentTree[2];
  /* 0x0b70 */ struct _EX_PUSH_LOCK ExtentTreeLock;
  /* 0x0b78 */ unsigned long ImageViewExtensionOffsets[3];
  /* 0x0b84 */ unsigned long TotalImageViewExtensionSize;
  /* 0x0b88 */ unsigned long TotalImageViewReservationSize;
  /* 0x0b90 */ struct _MI_COMBINE_BLOCK* ScpCfgPages[4];
  /* 0x0bb0 */ struct _MI_COMBINE_BLOCK* EmulatedScpCfgPages[4];
  /* 0x0bd0 */ long __PADDING__[12];
} MI_SECTION_STATE, *PMI_SECTION_STATE; /* size: 0x0c00 */

