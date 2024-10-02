typedef struct _RTL_AVL_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
} RTL_AVL_TREE, *PRTL_AVL_TREE; /* size: 0x0008 */

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

typedef struct _MI_ACCESS_VIOLATION_RANGE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE Node;
  /* 0x0018 */ void* Va;
  /* 0x0020 */ void* EndVaInclusive;
} MI_ACCESS_VIOLATION_RANGE, *PMI_ACCESS_VIOLATION_RANGE; /* size: 0x0028 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _MI_CACHE_LINE
{
  union
  {
    struct
    {
      /* 0x0000 */ void* UniqueCacheLine[8];
    } /* size: 0x0040 */ u1;
    struct
    {
      struct
      {
        /* 0x0000 */ struct _LIST_ENTRY Links;
        /* 0x0010 */ volatile unsigned long Signaled;
        /* 0x0014 */ long __PADDING__[1];
      } /* size: 0x0018 */ u2;
      /* 0x0018 */ long __PADDING__[10];
    }; /* size: 0x0040 */
  }; /* size: 0x0040 */
} MI_CACHE_LINE, *PMI_CACHE_LINE; /* size: 0x0040 */

typedef struct _MI_WORKING_SET_LOCK_ARRAY
{
  union
  {
    /* 0x0000 */ volatile long Lock;
    /* 0x0000 */ struct _MI_CACHE_LINE CacheLinePadding;
  }; /* size: 0x0040 */
} MI_WORKING_SET_LOCK_ARRAY, *PMI_WORKING_SET_LOCK_ARRAY; /* size: 0x0040 */

typedef struct _MI_POOL_STATE
{
  /* 0x0000 */ unsigned __int64 MaximumNonPagedPoolThreshold;
  /* 0x0008 */ volatile unsigned __int64 AllocatedNonPagedPool;
  /* 0x0010 */ volatile unsigned __int64 AllocatedSecureNonPagedPool;
  /* 0x0018 */ unsigned long HighEventSets;
  /* 0x001c */ unsigned char HighEventSetsValid;
  /* 0x0020 */ unsigned __int64 LowPagedPoolThreshold;
  /* 0x0028 */ unsigned __int64 HighPagedPoolThreshold;
  /* 0x0030 */ volatile long PermittedFaultsLock;
  /* 0x0038 */ struct _RTL_AVL_TREE PermittedFaultsTree;
  /* 0x0040 */ struct _MI_ACCESS_VIOLATION_RANGE PermittedFaultsInitialNode[2];
  /* 0x0090 */ unsigned __int64 TotalPagedPoolQuota;
  /* 0x0098 */ unsigned __int64 TotalNonPagedPoolQuota;
  /* 0x00c0 */ struct _MI_WORKING_SET_LOCK_ARRAY PagedPoolWorkingSetLockArray[4];
} MI_POOL_STATE, *PMI_POOL_STATE; /* size: 0x01c0 */

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
      /* 0x0000 */ unsigned __int64 Flink : 40; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 NodeFlinkLow : 24; /* bit position: 40 */
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
    /* 0x0000 */ unsigned __int64 Dirty1 : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 Owner : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned __int64 WriteThrough : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned __int64 CacheDisable : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned __int64 Accessed : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 Dirty : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned __int64 LargePage : 1; /* bit position: 7 */
    /* 0x0000 */ unsigned __int64 Global : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned __int64 CopyOnWrite : 1; /* bit position: 9 */
    /* 0x0000 */ unsigned __int64 Unused : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Write : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 PageFrameNumber : 40; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 ReservedForSoftware : 4; /* bit position: 52 */
    /* 0x0000 */ unsigned __int64 WsleAge : 4; /* bit position: 56 */
    /* 0x0000 */ unsigned __int64 WsleProtection : 3; /* bit position: 60 */
    /* 0x0000 */ unsigned __int64 NoExecute : 1; /* bit position: 63 */
  }; /* bitfield */
} MMPTE_HARDWARE, *PMMPTE_HARDWARE; /* size: 0x0008 */

typedef struct _MMPTE_PROTOTYPE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 DemandFillProto : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 HiberVerifyConverted : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned __int64 ReadOnly : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned __int64 SwizzleBit : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Combined : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 Unused1 : 4; /* bit position: 12 */
    /* 0x0000 */ __int64 ProtoAddress : 48; /* bit position: 16 */
  }; /* bitfield */
} MMPTE_PROTOTYPE, *PMMPTE_PROTOTYPE; /* size: 0x0008 */

typedef struct _MMPTE_SOFTWARE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 PageFileReserved : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 PageFileAllocated : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned __int64 ColdPage : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned __int64 SwizzleBit : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Transition : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 PageFileLow : 4; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 UsedPageTableEntries : 10; /* bit position: 16 */
    /* 0x0000 */ unsigned __int64 ShadowStack : 1; /* bit position: 26 */
    /* 0x0000 */ unsigned __int64 OnStandbyLookaside : 1; /* bit position: 27 */
    /* 0x0000 */ unsigned __int64 Unused : 4; /* bit position: 28 */
    /* 0x0000 */ unsigned __int64 PageFileHigh : 32; /* bit position: 32 */
  }; /* bitfield */
} MMPTE_SOFTWARE, *PMMPTE_SOFTWARE; /* size: 0x0008 */

typedef struct _MMPTE_TIMESTAMP
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 MustBeZero : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Unused : 3; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 SwizzleBit : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Transition : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 PageFileLow : 4; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 Reserved : 16; /* bit position: 16 */
    /* 0x0000 */ unsigned __int64 GlobalTimeStamp : 32; /* bit position: 32 */
  }; /* bitfield */
} MMPTE_TIMESTAMP, *PMMPTE_TIMESTAMP; /* size: 0x0008 */

typedef struct _MMPTE_TRANSITION
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Write : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 OnStandbyLookaside : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned __int64 IoTracker : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned __int64 SwizzleBit : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 5 */
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
    /* 0x0000 */ unsigned __int64 Unused0 : 2; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 OnStandbyLookaside : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned __int64 SwizzleBit : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 ColdPage : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 Unused2 : 3; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 ExecutePrivilege : 1; /* bit position: 15 */
    /* 0x0000 */ __int64 SubsectionAddress : 48; /* bit position: 16 */
  }; /* bitfield */
} MMPTE_SUBSECTION, *PMMPTE_SUBSECTION; /* size: 0x0008 */

typedef struct _MMPTE_LIST
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 OneEntry : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 filler0 : 2; /* bit position: 2 */
    /* 0x0000 */ unsigned __int64 SwizzleBit : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 5 */
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
    /* 0x0000 */ unsigned __int64 Flink : 40; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 BlinkHigh : 24; /* bit position: 40 */
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
      /* 0x0000 */ unsigned __int64 Blink : 40; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 NodeBlinkLow : 19; /* bit position: 40 */
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
        /* 0x0000 */ unsigned long NodeBlinkHigh : 21; /* bit position: 0 */
        /* 0x0000 */ unsigned long NodeFlinkMiddle : 11; /* bit position: 21 */
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
      /* 0x0000 */ unsigned __int64 PteFrame : 40; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 ResidentPage : 1; /* bit position: 40 */
      /* 0x0000 */ unsigned __int64 ResidentPageContainsBadPages : 1; /* bit position: 41 */
      /* 0x0000 */ unsigned __int64 Unused1 : 1; /* bit position: 42 */
      /* 0x0000 */ unsigned __int64 Partition : 10; /* bit position: 43 */
      /* 0x0000 */ unsigned __int64 FileOnly : 1; /* bit position: 53 */
      /* 0x0000 */ unsigned __int64 PfnExists : 1; /* bit position: 54 */
      /* 0x0000 */ unsigned __int64 NodeFlinkHigh : 5; /* bit position: 55 */
      /* 0x0000 */ unsigned __int64 PageIdentity : 3; /* bit position: 60 */
      /* 0x0000 */ unsigned __int64 PrototypePte : 1; /* bit position: 63 */
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
  /* 0x0ac0 */ struct _RTL_BITMAP_EX ImageBitMap64Low;
  /* 0x0ad0 */ unsigned __int64 ImageBias64Low;
  /* 0x0ad8 */ void* ApiSetSection;
  /* 0x0ae0 */ void* ApiSetSchema;
  /* 0x0ae8 */ unsigned __int64 ApiSetSchemaSize;
  /* 0x0af0 */ unsigned long LostDataFiles;
  /* 0x0af4 */ unsigned long LostDataPages;
  /* 0x0af8 */ unsigned long ImageFailureReason;
  /* 0x0b00 */ struct _SECTION* CfgBitMapSection;
  /* 0x0b08 */ struct _CONTROL_AREA* CfgBitMapControlArea;
  /* 0x0b10 */ struct _RTL_BITMAP_EX KernelCfgBitMap;
  /* 0x0b20 */ struct _EX_PUSH_LOCK KernelCfgBitMapLock;
  /* 0x0b28 */ unsigned long ImageCfgFailure;
  /* 0x0b30 */ void* KernelScpStartAddress;
  /* 0x0b38 */ unsigned long KernelScpReservePages;
  /* 0x0b3c */ unsigned long KernelScpPages;
  /* 0x0b40 */ struct _MDL* KernelScpMdl;
  /* 0x0b48 */ long RetpolineBootStatus;
  /* 0x0b50 */ struct _MMPTE* RetpolineRevertPte;
  /* 0x0b58 */ struct _RTL_BITMAP_EX KernelRetpolineBitMap;
  /* 0x0b68 */ struct _LIST_ENTRY NonRetpolineImageLoadList;
  /* 0x0b78 */ unsigned long ImageBreakpointEnabled;
  /* 0x0b7c */ unsigned long ImageBreakpointChecksum;
  /* 0x0b80 */ unsigned long ImageBreakpointSize;
  /* 0x0b84 */ volatile long ImageValidationFailed;
  /* 0x0b88 */ struct _RTL_AVL_TREE ExtentTree[2];
  /* 0x0b98 */ struct _EX_PUSH_LOCK ExtentTreeLock;
  /* 0x0ba0 */ unsigned long ImageViewExtensionOffsets[3];
  /* 0x0bac */ unsigned long TotalImageViewExtensionSize;
  /* 0x0bb0 */ unsigned long TotalImageViewReservationSize;
  /* 0x0bb8 */ struct _MI_COMBINE_BLOCK* ScpCfgPages[4];
  /* 0x0bd8 */ struct _MI_COMBINE_BLOCK* EmulatedScpCfgPages[4];
  /* 0x0bf8 */ long __PADDING__[2];
} MI_SECTION_STATE, *PMI_SECTION_STATE; /* size: 0x0c00 */

typedef struct _MM_SYSTEM_PAGE_COUNTS
{
  /* 0x0000 */ volatile unsigned long SystemCodePage;
  /* 0x0004 */ volatile unsigned long SystemDriverPage;
  /* 0x0008 */ volatile long TotalSystemCodePages;
  /* 0x000c */ volatile long TotalSystemDriverPages;
} MM_SYSTEM_PAGE_COUNTS, *PMM_SYSTEM_PAGE_COUNTS; /* size: 0x0010 */

typedef struct _RTL_FUNCTION_OVERRIDE_CAPABILITIES
{
  /* 0x0000 */ unsigned char AMD64Capabilities[41];
  /* 0x0029 */ unsigned char AMD64KernelCapabilities[41];
} RTL_FUNCTION_OVERRIDE_CAPABILITIES, *PRTL_FUNCTION_OVERRIDE_CAPABILITIES; /* size: 0x0052 */

typedef struct _MI_SYSTEM_IMAGE_STATE
{
  /* 0x0000 */ struct _LIST_ENTRY FixupList;
  /* 0x0010 */ struct _ETHREAD* LoadLockOwner;
  /* 0x0018 */ unsigned long LoadLockCount;
  /* 0x001c */ volatile long FixupLock;
  /* 0x0020 */ struct _EX_PUSH_LOCK EncodeDecodeLock;
  /* 0x0028 */ unsigned long EncodeDecodeDepth;
  /* 0x002c */ unsigned char FirstLoadEver;
  /* 0x002d */ unsigned char SystemImagesLoaded;
  /* 0x0030 */ struct _LIST_ENTRY StrongCodeLoadFailureList;
  /* 0x0040 */ struct _KLDR_DATA_TABLE_ENTRY* SystemBase[1];
  /* 0x0048 */ struct _RTL_BITMAP_EX BaseImageDiscardedBitmaps[1];
  /* 0x0058 */ struct _EX_PUSH_LOCK MappingRangesPushLock;
  /* 0x0060 */ struct _MI_DRIVER_VA* MappingRanges;
  /* 0x0068 */ struct _MM_SYSTEM_PAGE_COUNTS PageCounts;
  /* 0x0078 */ struct _EX_PUSH_LOCK CollidedLock;
  /* 0x0080 */ struct _RTL_AVL_TREE ImageTree;
  /* 0x0088 */ struct _LIST_ENTRY LoadInProgress;
  /* 0x0098 */ unsigned __int64 ImportEntriesReplaced;
  /* 0x00a0 */ struct _EX_PUSH_LOCK SecurePteExclusionLock;
  /* 0x00a8 */ void* SecurePteExclusionBase;
  /* 0x00b0 */ void* SecurePteExclusionTop;
  /* 0x00c0 */ struct _MI_WORKING_SET_LOCK_ARRAY WorkingSetLockArray[4];
  /* 0x01c0 */ struct _RTL_FUNCTION_OVERRIDE_CAPABILITIES FunctionOverrideCapabilities;
  /* 0x0212 */ char __PADDING__[46];
} MI_SYSTEM_IMAGE_STATE, *PMI_SYSTEM_IMAGE_STATE; /* size: 0x0240 */

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

typedef struct _MI_PROCESS_STATE
{
  /* 0x0000 */ void* SystemDllBase;
  /* 0x0008 */ unsigned long ColorSeed;
  /* 0x000c */ long RotatingUniprocessorNumber;
  /* 0x0010 */ union _LARGE_INTEGER CriticalSectionTimeout;
  /* 0x0018 */ struct _LIST_ENTRY ProcessList;
  /* 0x0028 */ struct _MMPTE* SharedUserDataPte[2];
  /* 0x0038 */ void* HypervisorSharedVa;
  /* 0x0040 */ unsigned __int64 VadSecureCookie;
  /* 0x0048 */ void* NativeCfgBitmapPreferredAddress;
  /* 0x0050 */ void* EcBitmapPreferredAddress;
} MI_PROCESS_STATE, *PMI_PROCESS_STATE; /* size: 0x0058 */

typedef struct _MI_SYSTEM_NODE_AFFINITY_INFORMATION
{
  /* 0x0000 */ struct _GROUP_AFFINITY* GroupAffinity;
  /* 0x0008 */ unsigned long NumberOfDomains;
  /* 0x000c */ unsigned long GlobalDomainIndex;
  /* 0x0010 */ unsigned short GroupAffinityCount;
  /* 0x0012 */ unsigned short ProcessorCount[3];
  /* 0x0018 */ unsigned short UsableProcessorCount[3];
  /* 0x001e */ char __PADDING__[2];
} MI_SYSTEM_NODE_AFFINITY_INFORMATION, *PMI_SYSTEM_NODE_AFFINITY_INFORMATION; /* size: 0x0020 */

typedef struct _HAL_NODE_RANGE
{
  /* 0x0000 */ unsigned __int64 PageFrameIndex;
  /* 0x0008 */ unsigned long Node;
  /* 0x000c */ long __PADDING__[1];
} HAL_NODE_RANGE, *PHAL_NODE_RANGE; /* size: 0x0010 */

typedef struct _KAFFINITY_EX
{
  /* 0x0000 */ unsigned short Count;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ unsigned long Reserved;
  union
  {
    /* 0x0008 */ unsigned __int64 Bitmap[1];
    /* 0x0008 */ unsigned __int64 StaticBitmap[32];
  }; /* size: 0x0100 */
} KAFFINITY_EX, *PKAFFINITY_EX; /* size: 0x0108 */

typedef struct _MI_HARDWARE_STATE
{
  /* 0x0000 */ volatile unsigned long NumaHintIndex;
  /* 0x0004 */ unsigned long NumaLastRangeIndexInclusive;
  /* 0x0008 */ unsigned char MemoryNodeWithNoProcessorsFound;
  /* 0x0009 */ unsigned char AccessBitReplacementHonored;
  /* 0x000a */ unsigned char ChannelHintIndex;
  /* 0x000b */ unsigned char ChannelLastRangeIndexInclusive;
  /* 0x0010 */ struct _MI_NODE_NUMBER_ZERO_BASED* NodeGraph;
  /* 0x0018 */ struct _MI_SYSTEM_NODE_AFFINITY_INFORMATION AffinityInfo;
  /* 0x0038 */ struct _MI_SYSTEM_NODE_NONPAGED_POOL* SystemNodeNonPagedPool;
  /* 0x0040 */ struct _HAL_NODE_RANGE TemporaryNumaRanges[2];
  /* 0x0060 */ struct _HAL_NODE_RANGE* NumaMemoryRanges;
  /* 0x0068 */ struct _HAL_CHANNEL_MEMORY_RANGES* ChannelMemoryRanges;
  /* 0x0070 */ unsigned long SecondLevelCacheSize;
  /* 0x0074 */ unsigned long FirstLevelCacheSize;
  /* 0x0078 */ unsigned long PhysicalAddressBits;
  /* 0x007c */ unsigned long PfnDatabasePageBits;
  /* 0x0080 */ unsigned char ProcessorCachesFlushedOnPowerLoss;
  /* 0x0081 */ unsigned char PageTableReuseRequiresFlush;
  /* 0x0088 */ unsigned __int64 TotalPagesAllowed;
  /* 0x0090 */ unsigned long FlushTbForAttributeChange;
  /* 0x0094 */ unsigned long FlushCacheForAttributeChange;
  /* 0x0098 */ unsigned long FlushCacheForPageAttributeChange;
  /* 0x009c */ unsigned long CacheFlushPromoteThreshold;
  /* 0x00c0 */ unsigned __int64 InvalidPteMask;
  /* 0x0100 */ unsigned long PageColors[4];
  /* 0x0110 */ unsigned __int64 FlushTbThreshold;
  /* 0x0118 */ unsigned char AttributeChangeRequiresReZero;
  /* 0x0120 */ unsigned __int64 HighestPossiblePhysicalPage;
  /* 0x0128 */ unsigned __int64 VsmKernelPageCount;
  /* 0x0130 */ unsigned __int64 HugePageRemoveTracker[512];
  /* 0x1130 */ volatile unsigned __int64 HotAddSequenceNumber;
  /* 0x1138 */ unsigned __int64 HotRemoveSequenceNumber;
  /* 0x1140 */ struct _LIST_ENTRY HotAddsInFlight;
  /* 0x1150 */ unsigned long HotAddInFlightCount;
  /* 0x1154 */ unsigned long HotAddInFlightNumaCount;
  /* 0x1180 */ volatile long ParkedCoresLock;
  /* 0x1188 */ struct _KAFFINITY_EX ParkedCores;
  /* 0x1290 */ struct _WORK_QUEUE_ITEM ParkedCoresWorkItem;
  /* 0x12b0 */ struct _EX_PUSH_LOCK ShadowPageTablesLock;
  /* 0x12b8 */ volatile unsigned __int64 SpecialPurposeMemoryTypeId;
  /* 0x12c0 */ unsigned long SpecialPurposeMemoryQueryTypeExtraSpace;
  /* 0x12c4 */ unsigned char GlobalBitPolarity[2];
  /* 0x12c6 */ char __PADDING__[58];
} MI_HARDWARE_STATE, *PMI_HARDWARE_STATE; /* size: 0x1300 */

typedef struct _MI_DYNAMIC_BITMAP
{
  /* 0x0000 */ struct _RTL_BITMAP_EX Bitmap;
  /* 0x0010 */ unsigned __int64 MaximumSize;
  /* 0x0018 */ unsigned __int64 Hint;
  /* 0x0020 */ void* BaseVa;
  /* 0x0028 */ unsigned __int64 SizeTopDown;
  /* 0x0030 */ unsigned __int64 HintTopDown;
  /* 0x0038 */ void* BaseVaTopDown;
  /* 0x0040 */ volatile long SpinLock;
  /* 0x0044 */ long __PADDING__[1];
} MI_DYNAMIC_BITMAP, *PMI_DYNAMIC_BITMAP; /* size: 0x0048 */

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

typedef struct _MMSUPPORT_SHARED
{
  /* 0x0000 */ void* WorkingSetLockArray;
  /* 0x0008 */ unsigned __int64 ReleasedCommitDebt;
  /* 0x0010 */ unsigned __int64 ResetPagesRepurposedCount;
  /* 0x0018 */ void* WsSwapSupport;
  /* 0x0020 */ void* CommitReleaseContext;
  /* 0x0028 */ void* AccessLog;
  /* 0x0030 */ volatile unsigned __int64 ChargedWslePages;
  /* 0x0038 */ volatile unsigned __int64 ActualWslePages;
  /* 0x0040 */ volatile long WorkingSetCoreLock;
  /* 0x0048 */ void* ShadowMapping;
  /* 0x0050 */ long __PADDING__[12];
} MMSUPPORT_SHARED, *PMMSUPPORT_SHARED; /* size: 0x0080 */

typedef struct _MMSUPPORT_FULL
{
  /* 0x0000 */ struct _MMSUPPORT_INSTANCE Instance;
  /* 0x00c0 */ struct _MMSUPPORT_SHARED Shared;
} MMSUPPORT_FULL, *PMMSUPPORT_FULL; /* size: 0x0140 */

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
  /* 0x0040 */ struct _MI_WORKING_SET_PAGE_TABLE_AGE_LINKS ActivePageTableLinks[8];
} MMWSL_INSTANCE, *PMMWSL_INSTANCE; /* size: 0x0100 */

typedef struct _MI_SYSTEM_VA_STATE
{
  /* 0x0000 */ volatile long SystemTablesLock;
  /* 0x0008 */ unsigned __int64 AvailableSystemCacheVa;
  /* 0x0010 */ struct _MI_DYNAMIC_BITMAP DynamicBitMapKernelStacks;
  /* 0x0058 */ struct _MI_DYNAMIC_BITMAP DynamicBitMapKernelShadowStacks;
  /* 0x00a0 */ struct _MI_DYNAMIC_BITMAP DynamicBitMapSystemPtes;
  /* 0x00e8 */ struct _MI_DYNAMIC_BITMAP DynamicBitMapNonCachedMappings;
  /* 0x0130 */ struct _MI_DYNAMIC_BITMAP DynamicBitMapDriverImages;
  /* 0x0178 */ struct _MI_DYNAMIC_BITMAP DynamicBitMapPagedPool;
  /* 0x01c0 */ struct _MI_DYNAMIC_BITMAP DynamicBitMapSystemCache;
  /* 0x0208 */ struct _MI_DYNAMIC_BITMAP DynamicBitMapSystemDataViews;
  /* 0x0250 */ struct _MI_DYNAMIC_BITMAP DynamicBitMapSecureNonPagedPool;
  /* 0x0298 */ void* HalPrivateVaStart;
  /* 0x02a0 */ unsigned __int64 HalPrivateVaSize;
  /* 0x02a8 */ unsigned long SystemVaAssignment[8];
  /* 0x02c8 */ unsigned long SystemVaAssignmentHint;
  /* 0x02cc */ unsigned long VaRegionShadowed[8];
  /* 0x02ec */ unsigned long TopLevelPteLockBits[32];
  /* 0x0380 */ struct _MMSUPPORT_FULL SoftWsleSystemVm;
  /* 0x04c0 */ void* HyperSpaceBase;
  /* 0x04c8 */ void* PagableHyperSpace;
  /* 0x04d0 */ void* HyperSpaceEnd;
  /* 0x04d8 */ void* UserSoftWsleBase;
  /* 0x04e0 */ unsigned __int64 PagableHyperSpaceBytes;
  /* 0x04e8 */ unsigned __int64 PageTableCommitmentOffset[2];
  /* 0x04f8 */ volatile long SystemCacheViewLock;
  /* 0x0500 */ struct _MMWSL_INSTANCE SystemWorkingSetList[10];
  /* 0x0f00 */ unsigned __int64 SelfmapLock[4];
  /* 0x0f40 */ struct _MI_WORKING_SET_LOCK_ARRAY SystemCacheWorkingSetLockArray[4];
} MI_SYSTEM_VA_STATE, *PMI_SYSTEM_VA_STATE; /* size: 0x1040 */

typedef struct _MI_COMBINE_STATE
{
  /* 0x0000 */ volatile long ActiveSpinLock;
  /* 0x0004 */ unsigned long CombiningThreadCount;
  /* 0x0008 */ struct _RTL_AVL_TREE ActiveThreadTree;
  /* 0x0010 */ unsigned __int64 CommonPageCombineDomain;
  /* 0x0018 */ unsigned long CommonCombineDomainAssigned;
  /* 0x001c */ volatile long CombineSequence;
} MI_COMBINE_STATE, *PMI_COMBINE_STATE; /* size: 0x0020 */

typedef struct _KEVENT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT; /* size: 0x0018 */

typedef struct _MI_PAGELIST_STATE
{
  /* 0x0000 */ volatile long ActiveSpinLock;
  /* 0x0008 */ struct _RTL_AVL_TREE ActiveThreadTree;
  /* 0x0010 */ volatile long ActiveZeroSpinLock;
  /* 0x0018 */ struct _RTL_AVL_TREE ActiveZeroThreadTree;
  /* 0x0020 */ struct _MMPFN LargePfnTemplate;
  /* 0x0050 */ struct _MMPFN LargePfnBasePageTemplate;
  /* 0x0080 */ unsigned long NumberOfZeroFreePageListHeads;
  /* 0x0088 */ struct _KEVENT Phase1BootComplete;
  /* 0x00a0 */ struct _RTL_AVL_TREE PendingBadPageTree;
  /* 0x00a8 */ unsigned __int64 PendingBadPageCount;
  /* 0x00b0 */ volatile long PendingBadPageTreeLock;
  /* 0x00b8 */ unsigned __int64 PendingBadPagesWithoutNodesCount;
  /* 0x00c0 */ struct _LIST_ENTRY PendingBadPageNodesAwaitingDeleteList;
  /* 0x00d0 */ unsigned __int64 PendingBadPageNodesAwaitingDeleteCount;
  /* 0x00d8 */ unsigned char PendingBadPageNodeDeleteActive;
  /* 0x00e0 */ struct _WORK_QUEUE_ITEM PendingBadPageNodeDeleteWorkItem;
  /* 0x0100 */ struct _RTL_AVL_TREE BadHugePageTree;
  /* 0x0108 */ unsigned __int64 BadHugePageCount;
} MI_PAGELIST_STATE, *PMI_PAGELIST_STATE; /* size: 0x0110 */

typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0008 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0010 */

typedef struct _MI_PARTITION_STATE
{
  /* 0x0000 */ volatile long PartitionLock;
  /* 0x0008 */ struct _EX_PUSH_LOCK PartitionIdLock;
  /* 0x0010 */ unsigned __int64 InitialPartitionIdBits;
  /* 0x0018 */ struct _LIST_ENTRY PartitionList;
  /* 0x0028 */ struct _RTL_BITMAP* PartitionIdBitmap;
  /* 0x0030 */ struct _RTL_BITMAP InitialPartitionIdBitmap;
  /* 0x0040 */ struct _MI_PARTITION* TempPartitionPointers[1];
  /* 0x0048 */ struct _MI_PARTITION** Partition;
  /* 0x0050 */ unsigned long CrossPartitionDenials;
  /* 0x0054 */ unsigned char MultiplePartitionsExist;
  /* 0x0058 */ void* ExtendedPartitionStart;
  /* 0x0060 */ unsigned __int64 ExtendedPartitionBytes;
  /* 0x0068 */ unsigned __int64 ChildPartitionBytes;
  /* 0x0070 */ struct _RTL_BITMAP_EX HugeIoPfnBitMap;
  /* 0x0080 */ struct _MI_HUGE_PFN* HugePfnDatabase;
  /* 0x0088 */ long* HugePfnLockArray;
  /* 0x00c0 */ volatile long HugeRangesLock;
  /* 0x00c4 */ long __PADDING__[15];
} MI_PARTITION_STATE, *PMI_PARTITION_STATE; /* size: 0x0100 */

typedef struct _MI_RESUME_WORKITEM
{
  /* 0x0000 */ struct _KEVENT ResumeCompleteEvent;
  /* 0x0018 */ struct _WORK_QUEUE_ITEM WorkItem;
} MI_RESUME_WORKITEM, *PMI_RESUME_WORKITEM; /* size: 0x0038 */

typedef enum _MI_MIRROR_BITMAP_STATE
{
  MirrorBitmapStateDormant = 0,
  MirrorBitmapStateFailedInitialize = 1,
  MirrorBitmapStateFullyInitialized = 2,
} MI_MIRROR_BITMAP_STATE, *PMI_MIRROR_BITMAP_STATE;

typedef struct _MI_SHUTDOWN_STATE
{
  /* 0x0000 */ unsigned char CrashDumpInitialized;
  /* 0x0001 */ unsigned char ConnectedStandbyActive;
  /* 0x0002 */ unsigned char ZeroPageFileAtShutdown;
  /* 0x0003 */ unsigned char CacheConflictsAllowed;
  /* 0x0004 */ unsigned long SystemShutdown;
  /* 0x0008 */ long ShutdownFlushInProgress;
  /* 0x000c */ unsigned long MirroringActive;
  /* 0x0010 */ struct _MI_RESUME_WORKITEM ResumeItem;
  /* 0x0048 */ struct _ETHREAD* MirrorHoldsPfn;
  /* 0x0050 */ struct _RTL_BITMAP_EX MirrorBitMaps[2];
  /* 0x0070 */ enum _MI_MIRROR_BITMAP_STATE MirrorBitMapState;
  /* 0x0078 */ struct _MMPTE* CrashDumpPte;
} MI_SHUTDOWN_STATE, *PMI_SHUTDOWN_STATE; /* size: 0x0080 */

typedef struct _MI_BAD_MEMORY_EVENT_ENTRY
{
  /* 0x0000 */ unsigned long BugCheckCode;
  /* 0x0004 */ long Active;
  /* 0x0008 */ unsigned long Data;
  /* 0x0010 */ union _LARGE_INTEGER PhysicalAddress;
  /* 0x0018 */ struct _WORK_QUEUE_ITEM WorkItem;
} MI_BAD_MEMORY_EVENT_ENTRY, *PMI_BAD_MEMORY_EVENT_ENTRY; /* size: 0x0038 */

typedef struct _MI_PROBE_RAISE_TRACKER
{
  /* 0x0000 */ unsigned long UserRangeInKernel;
  /* 0x0004 */ unsigned long FaultFailed;
  /* 0x0008 */ unsigned long WriteFaultFailed;
  /* 0x000c */ unsigned long LargePageFailed;
  /* 0x0010 */ unsigned long UserAccessToKernelPte;
  /* 0x0014 */ unsigned long BadPageLocation;
  /* 0x0018 */ unsigned long InsufficientCharge;
  /* 0x001c */ unsigned long PageTableCharge;
  /* 0x0020 */ unsigned long NoIoReference;
  /* 0x0024 */ unsigned long ProbeFailed;
  /* 0x0028 */ unsigned long PteIsZero;
  /* 0x002c */ unsigned long StrongCodeWrite;
  /* 0x0030 */ unsigned long ReducedCloneCommitChargeFailed;
  /* 0x0034 */ unsigned long CopyOnWriteAtDispatchNoPages;
  /* 0x0038 */ unsigned long NoPageTablesAllowed;
  /* 0x003c */ unsigned long EnclavePageFailed;
} MI_PROBE_RAISE_TRACKER, *PMI_PROBE_RAISE_TRACKER; /* size: 0x0040 */

typedef struct _MI_FORCED_COMMITS
{
  /* 0x0000 */ unsigned long Regular;
  /* 0x0004 */ unsigned long Wrap;
} MI_FORCED_COMMITS, *PMI_FORCED_COMMITS; /* size: 0x0008 */

typedef enum _MI_PRE_PHASE0_BUGCHECK_PARAMETER
{
  LoaderPfnDatabaseAllGood = 0,
  LoaderPfnDatabaseNoBytes = 1,
  LoaderPfnDatabaseBadPxeFormat = 2,
  LoaderPfnDatabaseInsufficientSetPxes = 3,
  LoaderPfnDatabaseInconsistentBits = 4,
  LoaderPfnDatabaseNoRegionSpace = 5,
} MI_PRE_PHASE0_BUGCHECK_PARAMETER, *PMI_PRE_PHASE0_BUGCHECK_PARAMETER;

typedef enum _MI_PAGE_HASH_ERROR_BEHAVIOR
{
  MiPageHashErrorBugcheck = 0,
  MiPageHashErrorReturnError = 1,
  MiPageHashErrorIgnore = 2,
} MI_PAGE_HASH_ERROR_BEHAVIOR, *PMI_PAGE_HASH_ERROR_BEHAVIOR;

typedef struct _MI_RESAVAIL_FAILURES
{
  /* 0x0000 */ unsigned long Wrap;
  /* 0x0004 */ unsigned long NoCharge;
} MI_RESAVAIL_FAILURES, *PMI_RESAVAIL_FAILURES; /* size: 0x0008 */

typedef struct _MI_ERROR_STATE
{
  /* 0x0000 */ struct _MI_BAD_MEMORY_EVENT_ENTRY BadMemoryEventEntry;
  /* 0x0038 */ struct _MI_PROBE_RAISE_TRACKER ProbeRaises;
  /* 0x0078 */ struct _MI_FORCED_COMMITS ForcedCommits;
  /* 0x0080 */ enum _MI_PRE_PHASE0_BUGCHECK_PARAMETER PrePhase0BugCheckParameter;
  /* 0x0084 */ unsigned long WsleFailures;
  /* 0x0088 */ unsigned char PendingBadPages;
  /* 0x0089 */ unsigned char FatalGraphicsFailures;
  /* 0x008a */ unsigned char BadPagesInsertSignalState;
  /* 0x008c */ enum _MI_PAGE_HASH_ERROR_BEHAVIOR PageHashErrorBehavior;
  /* 0x0090 */ unsigned long PageHashReadErrors;
  /* 0x0094 */ unsigned long PageHashStandbyErrors;
  /* 0x0098 */ unsigned long PageHashTransferErrors;
  /* 0x009c */ unsigned long PageHashAllocationErrors;
  /* 0x00a0 */ unsigned __int64 FailedHashPageFrameIndex;
  /* 0x00a8 */ unsigned long CheckZeroCount;
  /* 0x00ac */ volatile unsigned long ZeroedPageSingleBitErrorsDetected;
  /* 0x00b0 */ volatile unsigned long BadPagesDetected;
  /* 0x00b4 */ unsigned long BadPagesInserted;
  /* 0x00b8 */ struct _WORK_QUEUE_ITEM BadPageInsertWorkItem;
  /* 0x00d8 */ unsigned long ScrubPasses;
  /* 0x00dc */ unsigned long ScrubBadPagesFound;
  /* 0x00e0 */ unsigned long UserViewFailures;
  /* 0x00e4 */ unsigned long UserViewCollisionFailures;
  /* 0x00e8 */ unsigned long UserAllocateFailures;
  /* 0x00ec */ unsigned long UserAllocateCollisionFailures;
  /* 0x00f0 */ struct _MI_RESAVAIL_FAILURES ResavailFailures;
  /* 0x00f8 */ volatile unsigned long BadPhysicalMapsEarly;
  /* 0x00fc */ volatile unsigned long BadPhysicalMaps;
} MI_ERROR_STATE, *PMI_ERROR_STATE; /* size: 0x0100 */

typedef struct _MI_DBG_PATCH
{
  union
  {
    /* 0x0000 */ struct _CONTROL_AREA* ControlArea;
  } /* size: 0x0008 */ u1;
  union
  {
    union
    {
      /* 0x0008 */ unsigned long EntireField;
      struct
      {
        struct /* bitfield */
        {
          /* 0x0008 */ unsigned long Pending : 1; /* bit position: 0 */
          /* 0x0008 */ unsigned long Reserved : 1; /* bit position: 1 */
          /* 0x0008 */ unsigned long Offset : 30; /* bit position: 2 */
        }; /* bitfield */
      } /* size: 0x0004 */ e2;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u2;
  /* 0x000c */ unsigned long OriginalBytes;
  /* 0x0010 */ unsigned long NewBytes;
  /* 0x0014 */ unsigned long Padding;
} MI_DBG_PATCH, *PMI_DBG_PATCH; /* size: 0x0018 */

typedef struct _MI_DEBUGGER_STATE
{
  /* 0x0000 */ unsigned char TransientWrite;
  /* 0x0008 */ struct _MMPTE* DebugPtes[2];
  /* 0x0018 */ unsigned long PoisonedTb;
  /* 0x001c */ volatile long InDebugger;
  /* 0x0020 */ void* volatile Pfns[32];
  /* 0x0120 */ struct _MI_DBG_PATCH PatchBuffer[256];
  /* 0x1920 */ unsigned long PatchBufferInsertIndex;
  /* 0x1924 */ unsigned long PatchBufferRemoveIndex;
  /* 0x1928 */ struct _MI_DBG_PATCH PatchTableSpace[512];
  /* 0x4928 */ struct _MI_DBG_PATCH* PatchTable[512];
  /* 0x5928 */ volatile long PatchTableLock;
  /* 0x592c */ unsigned long PatchTableFreeEntry;
  /* 0x5930 */ unsigned long PatchTableEntryCount;
  /* 0x5934 */ long __PADDING__[1];
} MI_DEBUGGER_STATE, *PMI_DEBUGGER_STATE; /* size: 0x5938 */

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
    } /* size: 0x0010 */ HeaderX64;
  }; /* size: 0x0010 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0010 */

typedef struct _MI_STANDBY_STATE
{
  /* 0x0000 */ unsigned __int64 FirstDecayPage;
  /* 0x0010 */ union _SLIST_HEADER PfnDecayFreeSList;
  /* 0x0020 */ volatile long DecayPfnLock;
  /* 0x0028 */ struct _RTL_BITMAP DecayPfnsToBeFreed;
  /* 0x0038 */ unsigned long DecayPfnsToBeFreedBuffer[64];
  /* 0x0140 */ union _SLIST_HEADER PageHeatListSlist;
  /* 0x0150 */ volatile long PageHeatListDisableAllocation;
  /* 0x0154 */ volatile unsigned long TransitionPagesMadeCold;
  /* 0x0158 */ long __PADDING__[2];
} MI_STANDBY_STATE, *PMI_STANDBY_STATE; /* size: 0x0160 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

typedef enum _POOL_TYPE
{
  NonPagedPool = 0,
  NonPagedPoolExecute = 0,
  PagedPool = 1,
  NonPagedPoolMustSucceed = 2,
  DontUseThisType = 3,
  NonPagedPoolCacheAligned = 4,
  PagedPoolCacheAligned = 5,
  NonPagedPoolCacheAlignedMustS = 6,
  MaxPoolType = 7,
  NonPagedPoolBase = 0,
  NonPagedPoolBaseMustSucceed = 2,
  NonPagedPoolBaseCacheAligned = 4,
  NonPagedPoolBaseCacheAlignedMustS = 6,
  NonPagedPoolSession = 32,
  PagedPoolSession = 33,
  NonPagedPoolMustSucceedSession = 34,
  DontUseThisTypeSession = 35,
  NonPagedPoolCacheAlignedSession = 36,
  PagedPoolCacheAlignedSession = 37,
  NonPagedPoolCacheAlignedMustSSession = 38,
  NonPagedPoolNx = 512,
  NonPagedPoolNxCacheAligned = 516,
  NonPagedPoolSessionNx = 544,
} POOL_TYPE, *PPOOL_TYPE;

typedef struct _GENERAL_LOOKASIDE
{
  union
  {
    /* 0x0000 */ union _SLIST_HEADER ListHead;
    /* 0x0000 */ struct _SINGLE_LIST_ENTRY SingleListHead;
  }; /* size: 0x0010 */
  /* 0x0010 */ unsigned short Depth;
  /* 0x0012 */ unsigned short MaximumDepth;
  /* 0x0014 */ unsigned long TotalAllocates;
  union
  {
    /* 0x0018 */ unsigned long AllocateMisses;
    /* 0x0018 */ unsigned long AllocateHits;
  }; /* size: 0x0004 */
  /* 0x001c */ unsigned long TotalFrees;
  union
  {
    /* 0x0020 */ unsigned long FreeMisses;
    /* 0x0020 */ unsigned long FreeHits;
  }; /* size: 0x0004 */
  /* 0x0024 */ enum _POOL_TYPE Type;
  /* 0x0028 */ unsigned long Tag;
  /* 0x002c */ unsigned long Size;
  union
  {
    /* 0x0030 */ void* AllocateEx /* function */;
    /* 0x0030 */ void* Allocate /* function */;
  }; /* size: 0x0008 */
  union
  {
    /* 0x0038 */ void* FreeEx /* function */;
    /* 0x0038 */ void* Free /* function */;
  }; /* size: 0x0008 */
  /* 0x0040 */ struct _LIST_ENTRY ListEntry;
  /* 0x0050 */ unsigned long LastTotalAllocates;
  union
  {
    /* 0x0054 */ unsigned long LastAllocateMisses;
    /* 0x0054 */ unsigned long LastAllocateHits;
  }; /* size: 0x0004 */
  /* 0x0058 */ unsigned long Future[2];
  /* 0x0060 */ long __PADDING__[8];
} GENERAL_LOOKASIDE, *PGENERAL_LOOKASIDE; /* size: 0x0080 */

typedef struct _NPAGED_LOOKASIDE_LIST
{
  /* 0x0000 */ struct _GENERAL_LOOKASIDE L;
} NPAGED_LOOKASIDE_LIST, *PNPAGED_LOOKASIDE_LIST; /* size: 0x0080 */

typedef enum _MI_SYSTEM_VA_TYPE
{
  MiVaUnused = 0,
  MiVaProcessSpace = 1,
  MiVaBootLoaded = 2,
  MiVaPfnDatabase = 3,
  MiVaNonPagedPool = 4,
  MiVaPagedPool = 5,
  MiVaNonCachedMappings = 6,
  MiVaSystemCache = 7,
  MiVaSystemPtes = 8,
  MiVaHal = 9,
  MiVaNonCachedMappingsLarge = 10,
  MiVaDriverImages = 11,
  MiVaSystemPtesLarge = 12,
  MiVaKernelStacks = 13,
  MiVaSecureNonPagedPool = 14,
  MiVaKernelShadowStacks = 15,
  MiVaSoftWsles = 16,
  MiVaSystemDataViews = 17,
  MiVaKernelControlFlowGuard = 18,
  MiVaKasan = 19,
  MiVaMaximumType = 20,
} MI_SYSTEM_VA_TYPE, *PMI_SYSTEM_VA_TYPE;

typedef struct _MI_SYSTEM_PTE_TYPE
{
  /* 0x0000 */ struct _RTL_BITMAP_EX Bitmap;
  /* 0x0010 */ struct _RTL_BITMAP_EX TrackingBitmap;
  /* 0x0020 */ struct _MMPTE* BasePte;
  /* 0x0028 */ unsigned long Flags;
  /* 0x002c */ enum _MI_SYSTEM_VA_TYPE VaType;
  /* 0x0030 */ unsigned long PteFailures;
  /* 0x0034 */ volatile long SpinLock;
  /* 0x0038 */ volatile unsigned __int64 TotalSystemPtes;
  /* 0x0040 */ unsigned __int64 Hint;
  /* 0x0048 */ volatile unsigned __int64 LowestBitEverAllocated;
  /* 0x0050 */ struct _MI_CACHED_PTES* CachedPtes;
  /* 0x0058 */ volatile unsigned __int64 TotalFreeSystemPtes;
} MI_SYSTEM_PTE_TYPE, *PMI_SYSTEM_PTE_TYPE; /* size: 0x0060 */

typedef struct _MI_ULTRA_VA_CONTEXT
{
  /* 0x0000 */ volatile long Lock;
  /* 0x0008 */ void* ZeroMapping;
  /* 0x0010 */ unsigned __int64 AllocationHintBit;
  /* 0x0018 */ struct _RTL_BITMAP_EX Bitmap[2];
  /* 0x0038 */ unsigned long ConcurrencyMaximum;
  /* 0x003c */ volatile long ConcurrencyCount;
} MI_ULTRA_VA_CONTEXT, *PMI_ULTRA_VA_CONTEXT; /* size: 0x0040 */

typedef struct _MI_HUGE_SYSTEM_VIEW_HEAD
{
  /* 0x0000 */ struct _RTL_AVL_TREE ViewRoot;
  /* 0x0008 */ unsigned long ViewCount;
  /* 0x000c */ volatile long Lock;
} MI_HUGE_SYSTEM_VIEW_HEAD, *PMI_HUGE_SYSTEM_VIEW_HEAD; /* size: 0x0010 */

typedef struct _MI_SYSTEM_PTE_STATE
{
  /* 0x0000 */ struct _NPAGED_LOOKASIDE_LIST MdlTrackerLookaside;
  /* 0x0080 */ union _SLIST_HEADER DeadPteTrackerSListHead;
  /* 0x0090 */ volatile long PteTrackerLock;
  /* 0x0098 */ volatile struct _MI_CACHED_PTES* CachedPteHeads;
  /* 0x00a0 */ struct _MI_SYSTEM_PTE_TYPE SystemViewPteInfo;
  /* 0x0100 */ struct _MI_SYSTEM_PTE_TYPE NonCachedMappingsPteInfo;
  /* 0x0160 */ struct _MI_SYSTEM_PTE_TYPE KernelStackPteInfo[2];
  /* 0x0220 */ unsigned long StackGrowthFailures;
  /* 0x0224 */ unsigned char KernelStackPages;
  /* 0x0225 */ unsigned char TrackPtesAborted;
  /* 0x0226 */ unsigned char AdjustCounter;
  /* 0x0228 */ volatile long ReservedMappingLock;
  /* 0x0230 */ struct _RTL_AVL_TREE ReservedMappingTree;
  /* 0x0238 */ struct _MI_PAGE_CHAIN_HEAD ReservedMappingPageTablePfns;
  /* 0x0250 */ struct _RTL_AVL_TREE OutswappedKernelStackRoot;
  /* 0x0258 */ volatile long OutswappedKernelStackLock;
  /* 0x0260 */ struct _MI_ULTRA_VA_CONTEXT UltraSpaceContext;
  /* 0x02a0 */ unsigned long NumberOfUltraMdlMaps;
  /* 0x02a8 */ struct _MI_ULTRA_MDL_NODE* UltraMdlNodeMappings;
  /* 0x02b0 */ struct _MMPTE* UltraSpaceLowPpe;
  /* 0x02b8 */ struct _MMPTE* UltraSpaceHighPpe;
  /* 0x02c0 */ struct _EX_PUSH_LOCK SystemSpaceViewLock;
  /* 0x02c8 */ struct _RTL_AVL_TREE ViewRoot;
  /* 0x02d0 */ unsigned long ViewCount;
  /* 0x0300 */ struct _MI_WORKING_SET_LOCK_ARRAY WorkingSetLockArray[4];
  /* 0x0400 */ struct _MI_WORKING_SET_LOCK_ARRAY SystemDataViewsWorkingSetLockArray[4];
  /* 0x0500 */ struct _MI_HUGE_SYSTEM_VIEW_HEAD SystemViewBuckets[256];
} MI_SYSTEM_PTE_STATE, *PMI_SYSTEM_PTE_STATE; /* size: 0x1500 */

typedef struct _MI_IO_PAGE_STATE_CELL
{
  /* 0x0000 */ struct _RTL_AVL_TREE PfnRoot;
  /* 0x0008 */ volatile unsigned __int64 UnmappedNodeCount;
  /* 0x0010 */ volatile unsigned __int64 UnmappedHugeIoSpaceNodeCount;
  /* 0x0018 */ volatile unsigned __int64 TotalNodeCount;
  /* 0x0020 */ unsigned __int64 ResumePageForDeleteScans;
  /* 0x0028 */ long __PADDING__[6];
} MI_IO_PAGE_STATE_CELL, *PMI_IO_PAGE_STATE_CELL; /* size: 0x0040 */

typedef struct _MI_IO_CACHE_STATS
{
  /* 0x0000 */ unsigned long UnmappedCacheFlush;
  /* 0x0004 */ unsigned long UnmappedCacheConflict;
  /* 0x0008 */ unsigned long PermanentIoAttributeConflict;
  /* 0x000c */ unsigned long PermanentIoNodeConflict;
  /* 0x0010 */ unsigned long ExclusionReferenceConflict;
} MI_IO_CACHE_STATS, *PMI_IO_CACHE_STATS; /* size: 0x0014 */

typedef struct _MI_IO_PAGE_STATE
{
  /* 0x0000 */ struct _MI_IO_PAGE_STATE_CELL TypeCell[2];
  /* 0x0080 */ struct _RTL_AVL_TREE InvariantIoSpace;
  /* 0x0088 */ struct _RTL_AVL_TREE ExclusionSpace;
  /* 0x0090 */ volatile long IoPfnPruneLock;
  /* 0x0098 */ struct _WORK_QUEUE_ITEM UnmappedNodeWorkItem;
  /* 0x00b8 */ struct _MI_IO_CACHE_STATS IoCacheStats;
  /* 0x00cc */ long __PADDING__[13];
} MI_IO_PAGE_STATE, *PMI_IO_PAGE_STATE; /* size: 0x0100 */

typedef struct _MI_PAGEFILE_METADATA_LAYOUT
{
  /* 0x0000 */ unsigned long EntryInBytes;
  /* 0x0004 */ unsigned long OwningPteOffset;
} MI_PAGEFILE_METADATA_LAYOUT, *PMI_PAGEFILE_METADATA_LAYOUT; /* size: 0x0008 */

typedef struct _MI_PAGING_IO_STATE
{
  /* 0x0000 */ struct _RTL_AVL_TREE PageFileHead;
  /* 0x0008 */ volatile long PageFileHeadSpinLock;
  /* 0x000c */ struct _MI_PAGEFILE_METADATA_LAYOUT PageFileMetadata;
  /* 0x0014 */ long PrefetchSeekThreshold;
  /* 0x0018 */ unsigned long InPageSinglePages;
  /* 0x0020 */ union _SLIST_HEADER InPageSupportSListHead[2];
  /* 0x0040 */ union _SLIST_HEADER ReservedInPageSupportSListHead[2];
  /* 0x0060 */ unsigned char InPageSupportSListMinimum[2];
  /* 0x0068 */ struct _MMINPAGE_SUPPORT* FirstReservedInPageBlock[2];
  /* 0x0078 */ struct _MMINPAGE_SUPPORT* LastReservedInPageBlock[2];
  /* 0x0088 */ struct _MMPTE* ReservedPtes;
  /* 0x0090 */ volatile long ReservedPtesLock;
  /* 0x0094 */ unsigned long ReservedPtesBitBuffer;
  /* 0x0098 */ volatile long DelayPageFaults;
  /* 0x009c */ unsigned char MdlsAdjusted;
  /* 0x00a0 */ volatile long NumberOfFailedStoreReads;
  /* 0x00a4 */ long __PADDING__[3];
} MI_PAGING_IO_STATE, *PMI_PAGING_IO_STATE; /* size: 0x00b0 */

typedef struct _MI_FILLED_COMMON_PAGE_STATE
{
  /* 0x0000 */ unsigned __int64 PageFrameIndex[4];
  /* 0x0020 */ void* LeafMapping;
  /* 0x0028 */ unsigned __int64 LeafCrc;
  /* 0x0030 */ struct _MMPTE PdeContents;
} MI_FILLED_COMMON_PAGE_STATE, *PMI_FILLED_COMMON_PAGE_STATE; /* size: 0x0038 */

typedef struct _MI_COMMON_PAGE_STATE
{
  /* 0x0000 */ struct _MMPFN* DummyPagePfn;
  /* 0x0008 */ unsigned __int64 DummyPage;
  /* 0x0010 */ struct _MI_FILLED_COMMON_PAGE_STATE GapFrames[2];
} MI_COMMON_PAGE_STATE, *PMI_COMMON_PAGE_STATE; /* size: 0x0080 */

typedef struct _MI_VERIFIER_TRIM_STATE
{
  /* 0x0000 */ unsigned __int64 StartTime;
  /* 0x0008 */ unsigned __int64 ActualTrimTime;
  /* 0x0010 */ unsigned __int64 MaximumSingleTrimTimeReached;
  /* 0x0018 */ unsigned long Instances;
  /* 0x001c */ volatile long TrimInProgress;
} MI_VERIFIER_TRIM_STATE, *PMI_VERIFIER_TRIM_STATE; /* size: 0x0020 */

typedef struct _MI_SYSTEM_TRIM_STATE
{
  /* 0x0000 */ volatile long ExpansionLock;
  /* 0x0004 */ volatile long TrimInProgressCount;
  /* 0x0008 */ struct _KEVENT PeriodicWorkingSetEvent;
  /* 0x0020 */ struct _MI_VERIFIER_TRIM_STATE Verifier;
  /* 0x0040 */ unsigned long TrimAllPageFaultCount[4];
  /* 0x0050 */ struct _ETHREAD* volatile EmptyAllThread;
  /* 0x0058 */ unsigned long FaultedInSystemPage;
  /* 0x005c */ long __PADDING__[9];
} MI_SYSTEM_TRIM_STATE, *PMI_SYSTEM_TRIM_STATE; /* size: 0x0080 */

typedef struct _MI_SYSTEM_ACCELERATORS
{
  /* 0x0000 */ struct _LIST_ENTRY HardwareInstances;
  /* 0x0010 */ unsigned long NumberOfHardwareInstances;
  /* 0x0014 */ unsigned char ShuttingDown;
  /* 0x0015 */ unsigned char AllocationFailures;
  /* 0x0016 */ unsigned char AllocationQueryFailures;
  /* 0x0017 */ unsigned char AllocationQueryBadNodes;
  /* 0x0018 */ struct _SINGLE_LIST_ENTRY DeferredPoolFrees;
  /* 0x0020 */ void** OpaqueContext;
  /* 0x0028 */ volatile long Lock;
  /* 0x002c */ long __PADDING__[1];
} MI_SYSTEM_ACCELERATORS, *PMI_SYSTEM_ACCELERATORS; /* size: 0x0030 */

typedef struct _MI_HOT_PATCH_STATE
{
  /* 0x0000 */ struct _RTL_AVL_TREE UserSidPatchLists;
  /* 0x0008 */ struct _RTL_AVL_TREE GlobalHotPatchList;
  /* 0x0010 */ struct _RTL_AVL_TREE PreviouslyRegisteredHotPatchList;
  /* 0x0018 */ struct _RTL_AVL_TREE SecureImageActivePatches;
  /* 0x0020 */ struct _EX_PUSH_LOCK HotPatchListLock;
  /* 0x0028 */ struct _KLDR_DATA_TABLE_ENTRY* InProgressPatchTableEntry;
  /* 0x0030 */ struct _KLDR_DATA_TABLE_ENTRY* InProgressBaseTableEntry;
  /* 0x0038 */ volatile char ReadyForPatchOperations;
  /* 0x003c */ unsigned long HotPatchReserveSize;
  /* 0x0040 */ unsigned long DriverProxyReserveSize;
  struct /* bitfield */
  {
    /* 0x0044 */ unsigned long HotPatchingEnabled : 1; /* bit position: 0 */
    /* 0x0044 */ unsigned long Spare : 31; /* bit position: 1 */
  }; /* bitfield */
} MI_HOT_PATCH_STATE, *PMI_HOT_PATCH_STATE; /* size: 0x0048 */

typedef struct _EX_RUNDOWN_REF
{
  union
  {
    /* 0x0000 */ unsigned __int64 Count;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} EX_RUNDOWN_REF, *PEX_RUNDOWN_REF; /* size: 0x0008 */

typedef struct _MI_ENCLAVE_STATE
{
  /* 0x0000 */ struct _RTL_AVL_TREE EnclaveRegions;
  /* 0x0008 */ void* EnclaveMetadataPage;
  /* 0x0010 */ struct _RTL_BITMAP* EnclaveMetadataBitMap;
  /* 0x0018 */ struct _EX_PUSH_LOCK EnclaveMetadataEntryLock;
  /* 0x0020 */ volatile long EnclaveMetadataPageLock;
  /* 0x0028 */ struct _LIST_ENTRY EnclaveList;
  /* 0x0038 */ struct _EX_PUSH_LOCK EnclaveListLock;
  /* 0x0040 */ struct _EX_RUNDOWN_REF ShutdownRundown;
} MI_ENCLAVE_STATE, *PMI_ENCLAVE_STATE; /* size: 0x0048 */

typedef struct _MM_PAGED_POOL_INFO
{
  /* 0x0000 */ struct _EX_PUSH_LOCK Lock;
  /* 0x0008 */ unsigned __int64 MaximumSize;
  /* 0x0010 */ volatile unsigned __int64 AllocatedPagedPool;
} MM_PAGED_POOL_INFO, *PMM_PAGED_POOL_INFO; /* size: 0x0018 */

typedef struct _MMSUPPORT_AGGREGATION
{
  /* 0x0000 */ unsigned long PageFaultCount;
  /* 0x0008 */ unsigned __int64 WorkingSetSize;
  /* 0x0010 */ unsigned __int64 WorkingSetLeafSize;
  /* 0x0018 */ unsigned __int64 PeakWorkingSetSize;
} MMSUPPORT_AGGREGATION, *PMMSUPPORT_AGGREGATION; /* size: 0x0020 */

typedef struct _SYSPTES_HEADER
{
  /* 0x0000 */ struct _LIST_ENTRY ListHead[16];
  /* 0x0100 */ unsigned __int64 Count;
  /* 0x0108 */ unsigned __int64 NumberOfEntries;
  /* 0x0110 */ unsigned __int64 NumberOfEntriesPeak;
} SYSPTES_HEADER, *PSYSPTES_HEADER; /* size: 0x0118 */

typedef struct _MI_SYSTEM_VA_ASSIGNMENT
{
  /* 0x0000 */ void* BaseAddress;
  /* 0x0008 */ unsigned __int64 NumberOfBytes;
} MI_SYSTEM_VA_ASSIGNMENT, *PMI_SYSTEM_VA_ASSIGNMENT; /* size: 0x0010 */

typedef struct _MI_VISIBLE_STATE
{
  /* 0x0000 */ struct _MM_PAGED_POOL_INFO PagedPoolInfo;
  /* 0x0018 */ unsigned __int64 MaximumNonPagedPoolInPages;
  /* 0x0020 */ unsigned __int64 SizeOfPagedPoolInPages;
  /* 0x0028 */ struct _MI_SYSTEM_PTE_TYPE SystemPteInfo;
  /* 0x0088 */ volatile unsigned __int64 NonPagedPoolCommit;
  /* 0x0090 */ volatile unsigned __int64 SmallNonPagedPtesCommit;
  /* 0x0098 */ volatile unsigned __int64 BootCommit;
  /* 0x00a0 */ volatile unsigned __int64 SystemPageTableCommit;
  /* 0x00a8 */ volatile unsigned __int64 ProcessCommit;
  /* 0x00b0 */ volatile long DriverCommit;
  /* 0x00b4 */ unsigned char PagingLevels;
  /* 0x00b8 */ volatile unsigned __int64 PfnDatabaseCommit;
  /* 0x00c0 */ unsigned __int64 TotalNodePagesInChildPartitions[64];
  /* 0x02c0 */ unsigned __int64 TotalSpecialPurposeMemoryInChildPartitions[2][64];
  /* 0x06c0 */ struct _MMSUPPORT_FULL SystemWs[9];
  /* 0x1200 */ struct _MMSUPPORT_SHARED SystemCacheShared;
  /* 0x1280 */ struct _MMSUPPORT_AGGREGATION AggregateSystemWs[1];
  /* 0x12a0 */ unsigned long MapCacheFailures;
  /* 0x12a8 */ unsigned __int64 PagefileHashPages;
  /* 0x12b0 */ struct _SYSPTES_HEADER PteHeader;
  /* 0x13c8 */ unsigned __int64 SystemVaTypeCount[20];
  /* 0x1468 */ unsigned char SystemVaType[256];
  /* 0x1568 */ struct _MI_SYSTEM_VA_ASSIGNMENT SystemVaRegions[18];
  /* 0x1688 */ unsigned __int64 SecurePtRoot;
  /* 0x1690 */ long __PADDING__[12];
} MI_VISIBLE_STATE, *PMI_VISIBLE_STATE; /* size: 0x16c0 */

typedef struct _MI_SYSTEM_INFORMATION
{
  /* 0x0000 */ struct _MI_POOL_STATE Pools;
  /* 0x01c0 */ struct _MI_SECTION_STATE Sections;
  /* 0x0dc0 */ struct _MI_SYSTEM_IMAGE_STATE SystemImages;
  /* 0x1000 */ struct _MI_PROCESS_STATE Processes;
  /* 0x1080 */ struct _MI_HARDWARE_STATE Hardware;
  /* 0x2380 */ struct _MI_SYSTEM_VA_STATE SystemVa;
  /* 0x33c0 */ struct _MI_COMBINE_STATE PageCombines;
  /* 0x33e0 */ struct _MI_PAGELIST_STATE PageLists;
  /* 0x3500 */ struct _MI_PARTITION_STATE Partitions;
  /* 0x3600 */ struct _MI_SHUTDOWN_STATE Shutdowns;
  /* 0x3680 */ struct _MI_ERROR_STATE Errors;
  /* 0x3780 */ struct _MI_DEBUGGER_STATE Debugger;
  /* 0x90c0 */ struct _MI_STANDBY_STATE Standby;
  /* 0x9240 */ struct _MI_SYSTEM_PTE_STATE SystemPtes;
  /* 0xa740 */ struct _MI_IO_PAGE_STATE IoPages;
  /* 0xa840 */ struct _MI_PAGING_IO_STATE PagingIo;
  /* 0xa8f0 */ struct _MI_COMMON_PAGE_STATE CommonPages;
  /* 0xa980 */ struct _MI_SYSTEM_TRIM_STATE Trims;
  /* 0xaa00 */ struct _MI_SYSTEM_ACCELERATORS Accelerators;
  /* 0xaa30 */ struct _MI_HOT_PATCH_STATE HotPatch;
  /* 0xaa78 */ struct _MI_ENCLAVE_STATE Enclaves;
  /* 0xaac0 */ unsigned __int64 Cookie;
  /* 0xaac8 */ void* volatile BootRegistryRuns;
  /* 0xaad0 */ volatile long ZeroingDisabled;
  /* 0xaad4 */ unsigned char FullyInitialized;
  /* 0xaad5 */ unsigned char SafeBooted;
  /* 0xaad8 */ const struct _tlgProvider_t* TraceLogging;
  /* 0xab00 */ struct _MI_VISIBLE_STATE Vs;
} MI_SYSTEM_INFORMATION, *PMI_SYSTEM_INFORMATION; /* size: 0xc1c0 */

