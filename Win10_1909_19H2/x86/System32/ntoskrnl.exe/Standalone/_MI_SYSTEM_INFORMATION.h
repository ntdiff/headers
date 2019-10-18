typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef struct _RTL_AVL_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
} RTL_AVL_TREE, *PRTL_AVL_TREE; /* size: 0x0004 */

typedef struct _RTL_BALANCED_NODE
{
  union
  {
    /* 0x0000 */ struct _RTL_BALANCED_NODE* Children[2];
    struct
    {
      /* 0x0000 */ struct _RTL_BALANCED_NODE* Left;
      /* 0x0004 */ struct _RTL_BALANCED_NODE* Right;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
  union
  {
    /* 0x0008 */ unsigned char Red : 1; /* bit position: 0 */
    /* 0x0008 */ unsigned char Balance : 2; /* bit position: 0 */
    /* 0x0008 */ unsigned long ParentValue;
  }; /* size: 0x0004 */
} RTL_BALANCED_NODE, *PRTL_BALANCED_NODE; /* size: 0x000c */

typedef struct _MI_ACCESS_VIOLATION_RANGE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE Node;
  /* 0x000c */ void* Va;
  /* 0x0010 */ void* EndVaInclusive;
} MI_ACCESS_VIOLATION_RANGE, *PMI_ACCESS_VIOLATION_RANGE; /* size: 0x0014 */

typedef struct _MI_POOL_STATE
{
  /* 0x0000 */ unsigned long MaximumNonPagedPoolThreshold;
  /* 0x0004 */ volatile unsigned long AllocatedNonPagedPool;
  /* 0x0008 */ struct _SINGLE_LIST_ENTRY BadPoolHead;
  /* 0x000c */ unsigned long HighEventSets;
  /* 0x0010 */ unsigned char HighEventSetsValid;
  /* 0x0014 */ unsigned long LowPagedPoolThreshold;
  /* 0x0018 */ unsigned long HighPagedPoolThreshold;
  /* 0x001c */ volatile long PermittedFaultsLock;
  /* 0x0020 */ struct _RTL_AVL_TREE PermittedFaultsTree;
  /* 0x0024 */ struct _MI_ACCESS_VIOLATION_RANGE PermittedFaultsInitialNode[2];
  /* 0x004c */ unsigned long TotalPagedPoolQuota;
  /* 0x0050 */ unsigned long TotalNonPagedPoolQuota;
} MI_POOL_STATE, *PMI_POOL_STATE; /* size: 0x0054 */

typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long Shared : 28; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0004 */

typedef struct _MMSUBSECTION_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned short SubsectionAccessed : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned short Protection : 5; /* bit position: 1 */
    /* 0x0000 */ unsigned short StartingSector4132 : 10; /* bit position: 6 */
  }; /* bitfield */
  struct /* bitfield */
  {
    /* 0x0002 */ unsigned short SubsectionStatic : 1; /* bit position: 0 */
    /* 0x0002 */ unsigned short GlobalMemory : 1; /* bit position: 1 */
    /* 0x0002 */ unsigned short Spare : 1; /* bit position: 2 */
    /* 0x0002 */ unsigned short OnDereferenceList : 1; /* bit position: 3 */
    /* 0x0002 */ unsigned short SectorEndOffset : 12; /* bit position: 4 */
  }; /* bitfield */
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
  /* 0x0004 */ struct _MMPTE* SubsectionBase;
  /* 0x0008 */ struct _SUBSECTION* NextSubsection;
  union
  {
    /* 0x000c */ struct _RTL_AVL_TREE GlobalPerSessionHead;
    /* 0x000c */ struct _MI_CONTROL_AREA_WAIT_BLOCK* CreationWaitList;
    /* 0x000c */ struct _MI_PER_SESSION_PROTOS* SessionDriverProtos;
  }; /* size: 0x0004 */
  union
  {
    union
    {
      /* 0x0010 */ unsigned long LongFlags;
      /* 0x0010 */ struct _MMSUBSECTION_FLAGS SubsectionFlags;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u;
  /* 0x0014 */ unsigned long StartingSector;
  /* 0x0018 */ unsigned long NumberOfFullSectors;
  /* 0x001c */ unsigned long PtesInSubsection;
  union
  {
    union
    {
      /* 0x0020 */ struct _MI_SUBSECTION_ENTRY1 e1;
      /* 0x0020 */ unsigned long EntireField;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u1;
  struct /* bitfield */
  {
    /* 0x0024 */ unsigned long UnusedPtes : 30; /* bit position: 0 */
    /* 0x0024 */ unsigned long ExtentQueryNeeded : 1; /* bit position: 30 */
    /* 0x0024 */ unsigned long DirtyPages : 1; /* bit position: 31 */
  }; /* bitfield */
} SUBSECTION, *PSUBSECTION; /* size: 0x0028 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

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
          /* 0x000c */ unsigned long AllocationType : 3; /* bit position: 0 */
          /* 0x000c */ unsigned long Inserted : 1; /* bit position: 3 */
        }; /* bitfield */
      } /* size: 0x0004 */ e1;
      struct
      {
        /* 0x000c */ unsigned long PrototypePtesFlags;
      } /* size: 0x0004 */ e2;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u1;
} MI_PROTOTYPE_PTES_NODE, *PMI_PROTOTYPE_PTES_NODE; /* size: 0x0010 */

typedef struct _MSUBSECTION
{
  /* 0x0000 */ struct _SUBSECTION Core;
  /* 0x0028 */ struct _RTL_BALANCED_NODE SubsectionNode;
  /* 0x0034 */ struct _LIST_ENTRY DereferenceList;
  /* 0x003c */ unsigned long NumberOfMappedViews;
  /* 0x0040 */ unsigned long NumberOfPfnReferences;
  /* 0x0044 */ struct _MI_PROTOTYPE_PTES_NODE ProtosNode;
} MSUBSECTION, *PMSUBSECTION; /* size: 0x0054 */

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
    /* 0x0000 */ unsigned int AttemptingDelete : 1; /* bit position: 8 */
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
    /* 0x0000 */ unsigned long PreferredNode : 6; /* bit position: 20 */
    /* 0x0000 */ unsigned int GlobalOnlyPerSession : 1; /* bit position: 26 */
    /* 0x0000 */ unsigned int UserWritable : 1; /* bit position: 27 */
    /* 0x0000 */ unsigned int SystemVaAllocated : 1; /* bit position: 28 */
    /* 0x0000 */ unsigned int PreferredFsCompressionBoundary : 1; /* bit position: 29 */
    /* 0x0000 */ unsigned int UsingFileExtents : 1; /* bit position: 30 */
    /* 0x0000 */ unsigned int PageSize64K : 1; /* bit position: 31 */
  }; /* bitfield */
} MMSECTION_FLAGS, *PMMSECTION_FLAGS; /* size: 0x0004 */

typedef struct _EX_FAST_REF
{
  union
  {
    /* 0x0000 */ void* Object;
    /* 0x0000 */ unsigned long RefCnt : 3; /* bit position: 0 */
    /* 0x0000 */ unsigned long Value;
  }; /* size: 0x0004 */
} EX_FAST_REF, *PEX_FAST_REF; /* size: 0x0004 */

typedef struct _CONTROL_AREA
{
  /* 0x0000 */ struct _SEGMENT* Segment;
  union
  {
    /* 0x0004 */ struct _LIST_ENTRY ListHead;
    /* 0x0004 */ void* AweContext;
  }; /* size: 0x0008 */
  /* 0x000c */ unsigned long NumberOfSectionReferences;
  /* 0x0010 */ unsigned long NumberOfPfnReferences;
  /* 0x0014 */ unsigned long NumberOfMappedViews;
  /* 0x0018 */ unsigned long NumberOfUserReferences;
  union
  {
    union
    {
      /* 0x001c */ unsigned long LongFlags;
      /* 0x001c */ struct _MMSECTION_FLAGS Flags;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u;
  /* 0x0020 */ struct _EX_FAST_REF FilePointer;
  /* 0x0024 */ volatile long ControlAreaLock;
  /* 0x0028 */ unsigned long ModifiedWriteCount;
  /* 0x002c */ struct _MI_CONTROL_AREA_WAIT_BLOCK* WaitList;
  union
  {
    struct
    {
      union
      {
        /* 0x0030 */ unsigned long NumberOfSystemCacheViews;
        /* 0x0030 */ unsigned long ImageRelocationStartBit;
      }; /* size: 0x0004 */
      union
      {
        /* 0x0034 */ volatile long WritableUserReferences;
        struct /* bitfield */
        {
          /* 0x0034 */ unsigned long ImageRelocationSizeIn64k : 16; /* bit position: 0 */
          /* 0x0034 */ unsigned long SystemImage : 1; /* bit position: 16 */
          /* 0x0034 */ unsigned long CantMove : 1; /* bit position: 17 */
          /* 0x0034 */ unsigned long StrongCode : 2; /* bit position: 18 */
          /* 0x0034 */ unsigned long BitMap : 2; /* bit position: 20 */
          /* 0x0034 */ unsigned long ImageActive : 1; /* bit position: 22 */
          /* 0x0034 */ unsigned long ImageBaseOkToReuse : 1; /* bit position: 23 */
        }; /* bitfield */
      }; /* size: 0x0004 */
      union
      {
        /* 0x0038 */ unsigned long FlushInProgressCount;
        /* 0x0038 */ unsigned long NumberOfSubsections;
        /* 0x0038 */ struct _MI_IMAGE_SECURITY_REFERENCE* SeImageStub;
      }; /* size: 0x0004 */
    } /* size: 0x000c */ e2;
  } /* size: 0x000c */ u2;
  /* 0x003c */ struct _EX_PUSH_LOCK FileObjectLock;
  /* 0x0040 */ volatile unsigned __int64 LockedPages;
  union
  {
    union
    {
      struct /* bitfield */
      {
        /* 0x0048 */ unsigned long IoAttributionContext : 29; /* bit position: 0 */
        /* 0x0048 */ unsigned long Spare : 3; /* bit position: 29 */
      }; /* bitfield */
      /* 0x0048 */ unsigned long ImageCrossPartitionCharge;
      /* 0x0048 */ unsigned long CommittedPageCount : 20; /* bit position: 0 */
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u3;
  /* 0x004c */ long __PADDING__[1];
} CONTROL_AREA, *PCONTROL_AREA; /* size: 0x0050 */

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

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0008 */ void* WorkerRoutine /* function */;
  /* 0x000c */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0010 */

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
              /* 0x0003 */ unsigned char Index : 1; /* bit position: 0 */
              /* 0x0003 */ unsigned char Processor : 5; /* bit position: 1 */
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
            /* 0x0002 */ unsigned char Instrumented : 1; /* bit position: 7 */
          }; /* bitfield */
          /* 0x0003 */ unsigned char DebugActive;
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
} DISPATCHER_HEADER, *PDISPATCHER_HEADER; /* size: 0x0010 */

typedef struct _KGATE
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KGATE, *PKGATE; /* size: 0x0010 */

typedef struct _MI_EXTENT_DELETION_WAIT_BLOCK
{
  /* 0x0000 */ struct _MI_EXTENT_DELETION_WAIT_BLOCK* Next;
  /* 0x0004 */ struct _KGATE Gate;
} MI_EXTENT_DELETION_WAIT_BLOCK, *PMI_EXTENT_DELETION_WAIT_BLOCK; /* size: 0x0014 */

typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0004 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0008 */

typedef struct _MI_DLL_OVERFLOW_AREA
{
  /* 0x0000 */ void* RangeStart;
  /* 0x0004 */ void* NextVa;
} MI_DLL_OVERFLOW_AREA, *PMI_DLL_OVERFLOW_AREA; /* size: 0x0008 */

typedef struct _MI_SECTION_STATE
{
  /* 0x0000 */ volatile long SectionObjectPointersLock;
  /* 0x0004 */ struct _RTL_AVL_TREE SectionBasedRoot;
  /* 0x0008 */ struct _EX_PUSH_LOCK SectionBasedLock;
  /* 0x000c */ volatile unsigned long UnusedSegmentPagedPool;
  /* 0x0010 */ unsigned long DataSectionProtectionMask;
  /* 0x0014 */ void* HighSectionBase;
  /* 0x0018 */ struct _MSUBSECTION PhysicalSubsection;
  /* 0x0070 */ struct _CONTROL_AREA PhysicalControlArea;
  /* 0x00c0 */ struct _MMPFNLIST PurgingExtentPages;
  /* 0x00d4 */ struct _MMPFN* DanglingExtentPages;
  /* 0x00d8 */ struct _WORK_QUEUE_ITEM DanglingExtentsWorkItem;
  /* 0x00e8 */ struct _MI_EXTENT_DELETION_WAIT_BLOCK DanglingExtentsDeletionWaitList;
  /* 0x00fc */ unsigned char FileOnlyMemoryPfnsCreated;
  /* 0x00fd */ unsigned char DanglingExtentsWorkerActive;
  /* 0x00fe */ unsigned char PurgingExtentsNeedWatchdog;
  /* 0x0100 */ struct _RTL_AVL_TREE PrototypePtesTree;
  /* 0x0104 */ volatile long PrototypePtesTreeSpinLock;
  /* 0x0108 */ struct _EX_PUSH_LOCK RelocateBitmapsLock;
  /* 0x010c */ struct _RTL_BITMAP ImageBitMapNative;
  /* 0x0114 */ unsigned long ImageBiasNative;
  /* 0x0118 */ struct _MI_DLL_OVERFLOW_AREA OverflowArea;
  /* 0x0120 */ void* ApiSetSection;
  /* 0x0124 */ void* ApiSetSchema;
  /* 0x0128 */ unsigned long ApiSetSchemaSize;
  /* 0x012c */ unsigned long LostDataFiles;
  /* 0x0130 */ unsigned long LostDataPages;
  /* 0x0134 */ unsigned long ImageFailureReason;
  /* 0x0138 */ struct _SECTION* CfgBitMapSection;
  /* 0x013c */ struct _CONTROL_AREA* CfgBitMapControlArea;
  /* 0x0140 */ unsigned long ImageCfgFailure;
  /* 0x0144 */ unsigned long ImageBreakpointEnabled;
  /* 0x0148 */ unsigned long ImageBreakpointChecksum;
  /* 0x014c */ unsigned long ImageBreakpointSize;
  /* 0x0150 */ volatile long ImageValidationFailed;
  /* 0x0154 */ struct _RTL_AVL_TREE ImageExtentTree;
  /* 0x0158 */ struct _EX_PUSH_LOCK ImageExtentTreeLock;
  /* 0x015c */ unsigned long HotPatchReserveSize;
  /* 0x0160 */ long __PADDING__[8];
} MI_SECTION_STATE, *PMI_SECTION_STATE; /* size: 0x0180 */

typedef struct _MM_SYSTEM_PAGE_COUNTS
{
  /* 0x0000 */ unsigned long SystemCodePage;
  /* 0x0004 */ unsigned long SystemDriverPage;
  /* 0x0008 */ long TotalSystemCodePages;
  /* 0x000c */ long TotalSystemDriverPages;
} MM_SYSTEM_PAGE_COUNTS, *PMM_SYSTEM_PAGE_COUNTS; /* size: 0x0010 */

typedef struct _MI_SYSTEM_IMAGE_STATE
{
  /* 0x0000 */ struct _LIST_ENTRY FixupList;
  /* 0x0008 */ struct _EX_PUSH_LOCK LoadLock;
  /* 0x000c */ struct _ETHREAD* LoadLockOwner;
  /* 0x0010 */ unsigned long LoadLockCount;
  /* 0x0014 */ volatile long FixupLock;
  /* 0x0018 */ unsigned char FirstLoadEver;
  /* 0x0019 */ unsigned char LargePageAll;
  /* 0x001c */ unsigned long LastPage;
  /* 0x0020 */ struct _LIST_ENTRY LargePageList;
  /* 0x0028 */ struct _LIST_ENTRY StrongCodeLoadFailureList;
  /* 0x0030 */ struct _KLDR_DATA_TABLE_ENTRY* BeingDeleted;
  /* 0x0034 */ struct _EX_PUSH_LOCK MappingRangesPushLock;
  /* 0x0038 */ struct _MI_DRIVER_VA* MappingRanges[2];
  /* 0x0040 */ unsigned long PageCount;
  /* 0x0044 */ struct _MM_SYSTEM_PAGE_COUNTS PageCounts;
  /* 0x0054 */ struct _EX_PUSH_LOCK CollidedLock;
  /* 0x0058 */ struct _RTL_AVL_TREE ImageTree;
} MI_SYSTEM_IMAGE_STATE, *PMI_SYSTEM_IMAGE_STATE; /* size: 0x005c */

typedef struct _MMSESSION
{
  /* 0x0000 */ struct _EX_PUSH_LOCK SystemSpaceViewLock;
  /* 0x0004 */ struct _EX_PUSH_LOCK* SystemSpaceViewLockPointer;
  /* 0x0008 */ struct _RTL_AVL_TREE ViewRoot;
  /* 0x000c */ unsigned long ViewCount;
  /* 0x0010 */ unsigned long BitmapFailures;
} MMSESSION, *PMMSESSION; /* size: 0x0014 */

typedef struct _MI_SESSION_STATE
{
  /* 0x0000 */ struct _MMSESSION SystemSession;
  /* 0x0014 */ unsigned char CodePageEdited;
  /* 0x0018 */ long VaReferenceCount[1024];
  /* 0x1018 */ unsigned long* DynamicPtesBitBuffer;
  /* 0x101c */ struct _EX_PUSH_LOCK IdLock;
  /* 0x1020 */ struct _EPROCESS* LeaderProcess;
  /* 0x1024 */ struct _EX_PUSH_LOCK InitializeLock;
  /* 0x1028 */ struct _MMWSL_INSTANCE* WorkingSetList;
  /* 0x102c */ void* SessionBase;
  /* 0x1030 */ void* SessionCore;
} MI_SESSION_STATE, *PMI_SESSION_STATE; /* size: 0x1034 */

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

typedef struct _MMPTE_HIGHLOW
{
  /* 0x0000 */ unsigned long LowPart;
  /* 0x0004 */ unsigned long HighPart;
} MMPTE_HIGHLOW, *PMMPTE_HIGHLOW; /* size: 0x0008 */

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
    /* 0x0000 */ unsigned __int64 PageFrameNumber : 26; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 reserved1 : 25; /* bit position: 38 */
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
    /* 0x0000 */ unsigned __int64 Unused : 20; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 ProtoAddress : 32; /* bit position: 32 */
  }; /* bitfield */
} MMPTE_PROTOTYPE, *PMMPTE_PROTOTYPE; /* size: 0x0008 */

typedef struct _MMPTE_SOFTWARE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 PageFileReserved : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 PageFileAllocated : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned __int64 Unused0 : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned __int64 SwizzleBit : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Transition : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 PageFileLow : 4; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 Unused1 : 16; /* bit position: 16 */
    /* 0x0000 */ unsigned __int64 PageFileHigh : 32; /* bit position: 32 */
  }; /* bitfield */
} MMPTE_SOFTWARE, *PMMPTE_SOFTWARE; /* size: 0x0008 */

typedef struct _MMPTE_TIMESTAMP
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 MustBeZero : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Unused0 : 3; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 SwizzleBit : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Transition : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 PageFileLow : 4; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 Unused1 : 16; /* bit position: 16 */
    /* 0x0000 */ unsigned __int64 GlobalTimeStamp : 32; /* bit position: 32 */
  }; /* bitfield */
} MMPTE_TIMESTAMP, *PMMPTE_TIMESTAMP; /* size: 0x0008 */

typedef struct _MMPTE_TRANSITION
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Write : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 Spare : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned __int64 IoTracker : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned __int64 SwizzleBit : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Transition : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 PageFrameNumber : 26; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 Unused : 26; /* bit position: 38 */
  }; /* bitfield */
} MMPTE_TRANSITION, *PMMPTE_TRANSITION; /* size: 0x0008 */

typedef struct _MMPTE_SUBSECTION
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Unused0 : 3; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 SwizzleBit : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Unused1 : 21; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 SubsectionAddress : 32; /* bit position: 32 */
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
    /* 0x0000 */ unsigned __int64 filler2 : 20; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 NextEntry : 32; /* bit position: 32 */
  }; /* bitfield */
} MMPTE_LIST, *PMMPTE_LIST; /* size: 0x0008 */

typedef struct _MMPTE
{
  union
  {
    union
    {
      /* 0x0000 */ unsigned __int64 Long;
      /* 0x0000 */ volatile unsigned __int64 VolatileLong;
      /* 0x0000 */ struct _MMPTE_HIGHLOW HighLow;
      /* 0x0000 */ struct _MMPTE_HARDWARE Hard;
      /* 0x0000 */ struct _MMPTE_PROTOTYPE Proto;
      /* 0x0000 */ struct _MMPTE_SOFTWARE Soft;
      /* 0x0000 */ struct _MMPTE_TIMESTAMP TimeStamp;
      /* 0x0000 */ struct _MMPTE_TRANSITION Trans;
      /* 0x0000 */ struct _MMPTE_SUBSECTION Subsect;
      /* 0x0000 */ struct _MMPTE_LIST List;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u;
} MMPTE, *PMMPTE; /* size: 0x0008 */

typedef struct _PAE_PAGEINFO
{
  /* 0x0000 */ struct _LIST_ENTRY ListHead;
  /* 0x0008 */ unsigned long PageFrameNumber;
  /* 0x000c */ unsigned long EntriesInUse;
} PAE_PAGEINFO, *PPAE_PAGEINFO; /* size: 0x0010 */

typedef struct _PAE_ENTRY
{
  union
  {
    /* 0x0000 */ struct _MMPTE PteEntry[4];
    /* 0x0000 */ struct _PAE_PAGEINFO PaeEntry;
    struct
    {
      /* 0x0000 */ struct _SINGLE_LIST_ENTRY NextPae;
      /* 0x0004 */ long __PADDING__[7];
    }; /* size: 0x0020 */
  }; /* size: 0x0020 */
} PAE_ENTRY, *PPAE_ENTRY; /* size: 0x0020 */

typedef union _SLIST_HEADER
{
  union
  {
    /* 0x0000 */ unsigned __int64 Alignment;
    struct
    {
      /* 0x0000 */ struct _SINGLE_LIST_ENTRY Next;
      /* 0x0004 */ unsigned short Depth;
      /* 0x0006 */ unsigned short CpuId;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0008 */

typedef struct _MI_PROCESS_STATE
{
  /* 0x0000 */ void* SystemDllBase;
  /* 0x0004 */ unsigned long ColorSeed;
  /* 0x0008 */ long RotatingUniprocessorNumber;
  /* 0x0010 */ union _LARGE_INTEGER CriticalSectionTimeout;
  /* 0x0018 */ struct _LIST_ENTRY ProcessList;
  /* 0x0020 */ struct _MMPTE* SharedUserDataPte[2];
  /* 0x0028 */ void* HypervisorSharedVa;
  /* 0x002c */ unsigned long VadSecureCookie;
  /* 0x0030 */ unsigned long PaeGroups;
  /* 0x0034 */ unsigned long FreePaeEntries;
  /* 0x0038 */ struct _PAE_ENTRY FirstFreePae;
  /* 0x0058 */ volatile long AllocatedPaePages;
  /* 0x005c */ unsigned long PaeLock;
  /* 0x0060 */ union _SLIST_HEADER PaeEntrySList;
} MI_PROCESS_STATE, *PMI_PROCESS_STATE; /* size: 0x0068 */

typedef struct _HAL_NODE_RANGE
{
  /* 0x0000 */ unsigned long PageFrameIndex;
  /* 0x0004 */ unsigned long Node;
} HAL_NODE_RANGE, *PHAL_NODE_RANGE; /* size: 0x0008 */

typedef enum _MI_PFN_CACHE_ATTRIBUTE
{
  MiNonCached = 0,
  MiCached = 1,
  MiWriteCombined = 2,
  MiNotMapped = 3,
} MI_PFN_CACHE_ATTRIBUTE, *PMI_PFN_CACHE_ATTRIBUTE;

typedef struct _MI_ZERO_COST_COUNTS
{
  /* 0x0000 */ unsigned __int64 NativeSum;
  /* 0x0008 */ unsigned __int64 CachedSum;
} MI_ZERO_COST_COUNTS, *PMI_ZERO_COST_COUNTS; /* size: 0x0010 */

typedef struct _MI_HARDWARE_STATE
{
  /* 0x0000 */ unsigned long NodeMask;
  /* 0x0004 */ unsigned long NumaHintIndex;
  /* 0x0008 */ unsigned long NumaLastRangeIndexInclusive;
  /* 0x000c */ unsigned char NumaTableCaptured;
  /* 0x000d */ unsigned char NodeShift;
  /* 0x000e */ unsigned char ChannelShift;
  /* 0x0010 */ struct _MI_NODE_NUMBER_ZERO_BASED* NodeGraph;
  /* 0x0014 */ struct _MI_SYSTEM_NODE_INFORMATION* SystemNodeInformation;
  /* 0x0018 */ struct _HAL_NODE_RANGE TemporaryNumaRanges[2];
  /* 0x0028 */ struct _HAL_NODE_RANGE* NumaMemoryRanges;
  /* 0x002c */ struct _HAL_CHANNEL_MEMORY_RANGES* ChannelMemoryRanges;
  /* 0x0030 */ volatile long NumaNodeLock;
  /* 0x0034 */ unsigned long SecondLevelCacheSize;
  /* 0x0038 */ unsigned long FirstLevelCacheSize;
  /* 0x003c */ unsigned long PhysicalAddressBits;
  /* 0x0040 */ unsigned char ProcessorCachesFlushedOnPowerLoss;
  /* 0x0044 */ unsigned long TotalPagesAllowed;
  /* 0x0048 */ unsigned long SecondaryColorMask;
  /* 0x004c */ unsigned long SecondaryColors;
  /* 0x0050 */ unsigned long FlushTbForAttributeChange;
  /* 0x0054 */ unsigned long FlushCacheForAttributeChange;
  /* 0x0058 */ unsigned long FlushCacheForPageAttributeChange;
  /* 0x005c */ unsigned long CacheFlushPromoteThreshold;
  /* 0x0080 */ unsigned __int64 InvalidPteMask;
  /* 0x00c0 */ unsigned long LargePageColors[2];
  /* 0x00c8 */ unsigned long FlushTbThreshold;
  /* 0x00cc */ enum _MI_PFN_CACHE_ATTRIBUTE OptimalZeroingAttribute[4][4];
  /* 0x010c */ unsigned char AttributeChangeRequiresReZero;
  /* 0x0110 */ struct _MI_ZERO_COST_COUNTS ZeroCostCounts[2];
  /* 0x0130 */ unsigned long HighestPossiblePhysicalPage;
  /* 0x0134 */ unsigned long VsmKernelPageCount;
  /* 0x0138 */ struct _RTL_AVL_TREE EnclaveRegions;
  /* 0x013c */ void* EnclaveMetadataPage;
  /* 0x0140 */ struct _RTL_BITMAP* EnclaveMetadataBitMap;
  /* 0x0144 */ struct _EX_PUSH_LOCK EnclaveMetadataEntryLock;
  /* 0x0148 */ volatile long EnclaveMetadataPageLock;
  /* 0x014c */ long __PADDING__[13];
} MI_HARDWARE_STATE, *PMI_HARDWARE_STATE; /* size: 0x0180 */

typedef struct _MI_SYSTEM_REGION_ANCHOR
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long ReferenceCount : 31; /* bit position: 0 */
    /* 0x0000 */ unsigned long BeingDeleted : 1; /* bit position: 31 */
  }; /* bitfield */
} MI_SYSTEM_REGION_ANCHOR, *PMI_SYSTEM_REGION_ANCHOR; /* size: 0x0004 */

typedef struct _MI_SYSTEM_REGION_REFERENCE
{
  struct
  {
    union
    {
      /* 0x0000 */ struct _MI_SYSTEM_REGION_ANCHOR Anchor;
      /* 0x0000 */ unsigned long EntireReference;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u1;
} MI_SYSTEM_REGION_REFERENCE, *PMI_SYSTEM_REGION_REFERENCE; /* size: 0x0004 */

typedef struct _KEVENT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT; /* size: 0x0010 */

typedef struct _MMWSL_INSTANCE
{
  /* 0x0000 */ struct _MMPTE* NextPteToTrim;
  /* 0x0004 */ struct _MMPTE* NextPteToAge;
  /* 0x0008 */ struct _MMPTE* NextPteToAccessClear;
  /* 0x000c */ unsigned long LastAccessClearingRemainder;
  /* 0x0010 */ unsigned long LastAgingRemainder;
  /* 0x0014 */ unsigned long LockedEntries;
} MMWSL_INSTANCE, *PMMWSL_INSTANCE; /* size: 0x0018 */

typedef struct _MI_SYSTEM_VA_STATE
{
  /* 0x0000 */ unsigned long SystemTablesLock;
  /* 0x0004 */ unsigned long SystemVaBias;
  /* 0x0008 */ unsigned long SystemAvailableVaLow;
  /* 0x000c */ unsigned long VirtualBias;
  /* 0x0010 */ void* SystemRangeStart;
  /* 0x0014 */ unsigned char SystemCachePdeCount[1024];
  /* 0x0414 */ void* SystemCacheReverseMaps[1024];
  /* 0x1414 */ struct _MI_SYSTEM_REGION_REFERENCE VaRegion[1024];
  /* 0x2414 */ unsigned long TopLevelPteLockBits[128];
  /* 0x2614 */ unsigned long TopLevelPteAlternateLockBits[4];
  /* 0x2624 */ volatile long DeleteKvaLock;
  /* 0x2628 */ struct _MI_WSLE* WsleArrays[8];
  /* 0x2648 */ void* PagableHyperSpace;
  /* 0x264c */ void* HyperSpaceEnd;
  /* 0x2650 */ unsigned long PagableHyperSpaceBytes;
  /* 0x2654 */ struct _KEVENT FreeSystemCacheVa;
  /* 0x2664 */ unsigned long SystemVaLock;
  /* 0x2668 */ unsigned long SystemCacheViewLock;
  /* 0x266c */ struct _MMWSL_INSTANCE SystemWorkingSetList[8];
  /* 0x272c */ long __PADDING__[5];
} MI_SYSTEM_VA_STATE, *PMI_SYSTEM_VA_STATE; /* size: 0x2740 */

typedef struct _MI_COMBINE_STATE
{
  /* 0x0000 */ volatile long ActiveSpinLock;
  /* 0x0004 */ unsigned long CombiningThreadCount;
  /* 0x0008 */ struct _RTL_AVL_TREE ActiveThreadTree;
  /* 0x0010 */ unsigned __int64 CommonPageCombineDomain;
  /* 0x0018 */ unsigned long CommonCombineDomainAssigned;
  /* 0x001c */ long __PADDING__[1];
} MI_COMBINE_STATE, *PMI_COMBINE_STATE; /* size: 0x0020 */

typedef struct _MI_PAGELIST_STATE
{
  /* 0x0000 */ volatile long ActiveSpinLock;
  /* 0x0004 */ struct _RTL_AVL_TREE ActiveThreadTree;
  /* 0x0008 */ volatile long ActiveZeroSpinLock;
  /* 0x000c */ struct _RTL_AVL_TREE ActiveZeroThreadTree;
  /* 0x0010 */ unsigned long NumberOfLargePageListHeads;
} MI_PAGELIST_STATE, *PMI_PAGELIST_STATE; /* size: 0x0014 */

typedef struct _MI_PARTITION_STATE
{
  /* 0x0000 */ unsigned long PartitionLock;
  /* 0x0004 */ struct _EX_PUSH_LOCK PartitionIdLock;
  /* 0x0008 */ unsigned __int64 InitialPartitionIdBits;
  /* 0x0010 */ struct _LIST_ENTRY PartitionList;
  /* 0x0018 */ struct _RTL_BITMAP* PartitionIdBitmap;
  /* 0x001c */ struct _RTL_BITMAP InitialPartitionIdBitmap;
  /* 0x0024 */ struct _MI_PARTITION* TempPartitionPointers[1];
  /* 0x0028 */ struct _MI_PARTITION** Partition;
  /* 0x002c */ unsigned long TotalPagesInChildPartitions;
  /* 0x0030 */ unsigned long CrossPartitionDenials;
  /* 0x0034 */ unsigned char MultiplePartitionsExist;
  /* 0x0035 */ char __PADDING__[3];
} MI_PARTITION_STATE, *PMI_PARTITION_STATE; /* size: 0x0038 */

typedef struct _MI_RESUME_WORKITEM
{
  /* 0x0000 */ struct _KEVENT ResumeCompleteEvent;
  /* 0x0010 */ struct _WORK_QUEUE_ITEM WorkItem;
} MI_RESUME_WORKITEM, *PMI_RESUME_WORKITEM; /* size: 0x0020 */

typedef struct _MI_SHUTDOWN_STATE
{
  /* 0x0000 */ unsigned char CrashDumpInitialized;
  /* 0x0001 */ unsigned char ConnectedStandbyActive;
  /* 0x0002 */ unsigned char ZeroPageFileAtShutdown;
  /* 0x0004 */ unsigned long SystemShutdown;
  /* 0x0008 */ long ShutdownFlushInProgress;
  /* 0x000c */ unsigned long MirroringActive;
  /* 0x0010 */ struct _MI_RESUME_WORKITEM ResumeItem;
  /* 0x0030 */ struct _ETHREAD* MirrorHoldsPfn;
  /* 0x0034 */ struct _RTL_BITMAP MirrorBitMaps[2];
  /* 0x0044 */ struct _MMPTE* CrashDumpPte;
} MI_SHUTDOWN_STATE, *PMI_SHUTDOWN_STATE; /* size: 0x0048 */

typedef struct _MI_BAD_MEMORY_EVENT_ENTRY
{
  /* 0x0000 */ unsigned long BugCheckCode;
  /* 0x0004 */ long Active;
  /* 0x0008 */ unsigned long Data;
  /* 0x0010 */ union _LARGE_INTEGER PhysicalAddress;
  /* 0x0018 */ struct _WORK_QUEUE_ITEM WorkItem;
} MI_BAD_MEMORY_EVENT_ENTRY, *PMI_BAD_MEMORY_EVENT_ENTRY; /* size: 0x0028 */

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
  /* 0x0020 */ unsigned long NoPhysicalMapping;
  /* 0x0024 */ unsigned long NoIoReference;
  /* 0x0028 */ unsigned long ProbeFailed;
  /* 0x002c */ unsigned long PteIsZero;
  /* 0x0030 */ unsigned long StrongCodeWrite;
  /* 0x0034 */ unsigned long ReducedCloneCommitChargeFailed;
  /* 0x0038 */ unsigned long CopyOnWriteAtDispatchNoPages;
  /* 0x003c */ unsigned long NoPageTablesAllowed;
  /* 0x0040 */ unsigned long EnclavePageFailed;
} MI_PROBE_RAISE_TRACKER, *PMI_PROBE_RAISE_TRACKER; /* size: 0x0044 */

typedef struct _MI_FORCED_COMMITS
{
  /* 0x0000 */ unsigned long Regular;
  /* 0x0004 */ unsigned long Wrap;
} MI_FORCED_COMMITS, *PMI_FORCED_COMMITS; /* size: 0x0008 */

typedef struct _MI_RESAVAIL_FAILURES
{
  /* 0x0000 */ unsigned long Wrap;
  /* 0x0004 */ unsigned long NoCharge;
} MI_RESAVAIL_FAILURES, *PMI_RESAVAIL_FAILURES; /* size: 0x0008 */

typedef struct _MI_ERROR_STATE
{
  /* 0x0000 */ struct _MI_BAD_MEMORY_EVENT_ENTRY BadMemoryEventEntry;
  /* 0x0028 */ unsigned long PageOfInterest;
  /* 0x002c */ struct _MI_PROBE_RAISE_TRACKER ProbeRaises;
  /* 0x0070 */ struct _MI_FORCED_COMMITS ForcedCommits;
  /* 0x0078 */ unsigned long WsleFailures[1];
  /* 0x007c */ unsigned long PageHashErrors;
  /* 0x0080 */ unsigned long CheckZeroCount;
  /* 0x0084 */ volatile long ZeroedPageSingleBitErrorsDetected;
  /* 0x0088 */ volatile long BadPagesDetected;
  /* 0x008c */ long ScrubPasses;
  /* 0x0090 */ long ScrubBadPagesFound;
  /* 0x0094 */ unsigned long UserViewFailures;
  /* 0x0098 */ unsigned long UserViewCollisionFailures;
  /* 0x009c */ unsigned long UserAllocateFailures;
  /* 0x00a0 */ unsigned long UserAllocateCollisionFailures;
  /* 0x00a4 */ struct _MI_RESAVAIL_FAILURES ResavailFailures;
  /* 0x00ac */ unsigned char PendingBadPages;
  /* 0x00ad */ unsigned char InitFailure;
  /* 0x00ae */ unsigned char StopBadMaps;
  /* 0x00af */ char __PADDING__[1];
} MI_ERROR_STATE, *PMI_ERROR_STATE; /* size: 0x00b0 */

typedef struct _MI_ACCESS_LOG_STATE
{
  /* 0x0000 */ struct _MM_PAGE_ACCESS_INFO_HEADER* volatile CcAccessLog;
  /* 0x0004 */ struct _WORK_QUEUE_ITEM DisableAccessLogging;
  /* 0x0014 */ unsigned long Enabled;
  /* 0x0018 */ unsigned long MinLoggingPriority;
  /* 0x0040 */ unsigned long AccessLoggingLock;
  /* 0x0044 */ long __PADDING__[15];
} MI_ACCESS_LOG_STATE, *PMI_ACCESS_LOG_STATE; /* size: 0x0080 */

typedef struct _MI_DEBUGGER_STATE
{
  /* 0x0000 */ unsigned char TransientWrite;
  /* 0x0001 */ unsigned char CodePageEdited;
  /* 0x0004 */ struct _MMPTE* DebugPte;
  /* 0x0008 */ unsigned long PoisonedTb;
  /* 0x000c */ volatile long InDebugger;
  /* 0x0010 */ void* volatile Pfns[32];
} MI_DEBUGGER_STATE, *PMI_DEBUGGER_STATE; /* size: 0x0090 */

typedef struct _KDPC
{
  union
  {
    /* 0x0000 */ unsigned long TargetInfoAsUlong;
    struct
    {
      /* 0x0000 */ unsigned char Type;
      /* 0x0001 */ unsigned char Importance;
      /* 0x0002 */ volatile unsigned short Number;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
  /* 0x0004 */ struct _SINGLE_LIST_ENTRY DpcListEntry;
  /* 0x0008 */ unsigned long ProcessorHistory;
  /* 0x000c */ void* DeferredRoutine /* function */;
  /* 0x0010 */ void* DeferredContext;
  /* 0x0014 */ void* SystemArgument1;
  /* 0x0018 */ void* SystemArgument2;
  /* 0x001c */ void* DpcData;
} KDPC, *PKDPC; /* size: 0x0020 */

typedef struct _MI_STANDBY_STATE
{
  /* 0x0000 */ unsigned long FirstDecayPage;
  /* 0x0008 */ union _SLIST_HEADER PfnDecayFreeSList;
  /* 0x0010 */ struct _MM_PAGE_ACCESS_INFO_HEADER* PfnRepurposeLog;
  /* 0x0014 */ struct _KDPC AllocatePfnRepurposeDpc;
  /* 0x0038 */ union _SLIST_HEADER PageHeatListSlist;
  /* 0x0040 */ volatile long PageHeatListDisableAllocation;
  /* 0x0044 */ long __PADDING__[1];
} MI_STANDBY_STATE, *PMI_STANDBY_STATE; /* size: 0x0048 */

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
  }; /* size: 0x0008 */
  /* 0x0008 */ unsigned short Depth;
  /* 0x000a */ unsigned short MaximumDepth;
  /* 0x000c */ unsigned long TotalAllocates;
  union
  {
    /* 0x0010 */ unsigned long AllocateMisses;
    /* 0x0010 */ unsigned long AllocateHits;
  }; /* size: 0x0004 */
  /* 0x0014 */ unsigned long TotalFrees;
  union
  {
    /* 0x0018 */ unsigned long FreeMisses;
    /* 0x0018 */ unsigned long FreeHits;
  }; /* size: 0x0004 */
  /* 0x001c */ enum _POOL_TYPE Type;
  /* 0x0020 */ unsigned long Tag;
  /* 0x0024 */ unsigned long Size;
  union
  {
    /* 0x0028 */ void* AllocateEx /* function */;
    /* 0x0028 */ void* Allocate /* function */;
  }; /* size: 0x0004 */
  union
  {
    /* 0x002c */ void* FreeEx /* function */;
    /* 0x002c */ void* Free /* function */;
  }; /* size: 0x0004 */
  /* 0x0030 */ struct _LIST_ENTRY ListEntry;
  /* 0x0038 */ unsigned long LastTotalAllocates;
  union
  {
    /* 0x003c */ unsigned long LastAllocateMisses;
    /* 0x003c */ unsigned long LastAllocateHits;
  }; /* size: 0x0004 */
  /* 0x0040 */ unsigned long Future[2];
  /* 0x0048 */ long __PADDING__[14];
} GENERAL_LOOKASIDE, *PGENERAL_LOOKASIDE; /* size: 0x0080 */

typedef struct _NPAGED_LOOKASIDE_LIST
{
  /* 0x0000 */ struct _GENERAL_LOOKASIDE L;
  /* 0x0080 */ unsigned long Lock__ObsoleteButDoNotDelete;
  /* 0x0084 */ long __PADDING__[15];
} NPAGED_LOOKASIDE_LIST, *PNPAGED_LOOKASIDE_LIST; /* size: 0x00c0 */

typedef enum _MI_SYSTEM_VA_TYPE
{
  MiVaUnused = 0,
  MiVaSessionSpace = 1,
  MiVaProcessSpace = 2,
  MiVaBootLoaded = 3,
  MiVaPfnDatabase = 4,
  MiVaNonPagedPool = 5,
  MiVaPagedPool = 6,
  MiVaSpecialPoolPaged = 7,
  MiVaSystemCache = 8,
  MiVaSystemPtes = 9,
  MiVaHal = 10,
  MiVaSessionGlobalSpace = 11,
  MiVaDriverImages = 12,
  MiVaSystemPtesLarge = 13,
  MiVaKernelStacks = 14,
  MiVaMaximumType = 15,
} MI_SYSTEM_VA_TYPE, *PMI_SYSTEM_VA_TYPE;

typedef struct _MI_SYSTEM_PTE_TYPE
{
  /* 0x0000 */ struct _RTL_BITMAP Bitmap;
  /* 0x0008 */ struct _MMPTE* BasePte;
  /* 0x000c */ unsigned long Flags;
  /* 0x0010 */ enum _MI_SYSTEM_VA_TYPE VaType;
  /* 0x0014 */ unsigned long* FailureCount;
  /* 0x0018 */ unsigned long PteFailures;
  union
  {
    /* 0x001c */ unsigned long SpinLock;
    /* 0x001c */ struct _EX_PUSH_LOCK* GlobalPushLock;
  }; /* size: 0x0004 */
  /* 0x0020 */ volatile unsigned long TotalSystemPtes;
  /* 0x0024 */ unsigned long Hint;
  /* 0x0028 */ unsigned long LowestBitEverAllocated;
  /* 0x002c */ volatile struct _MI_CACHED_PTES* CachedPtes;
  /* 0x0030 */ volatile unsigned long TotalFreeSystemPtes;
} MI_SYSTEM_PTE_TYPE, *PMI_SYSTEM_PTE_TYPE; /* size: 0x0034 */

typedef struct _MI_SYSTEM_PTE_STATE
{
  /* 0x0000 */ struct _NPAGED_LOOKASIDE_LIST MdlTrackerLookaside;
  /* 0x00c0 */ union _SLIST_HEADER DeadPteTrackerSListHead;
  /* 0x00c8 */ unsigned long PteTrackerLock;
  /* 0x00cc */ struct _RTL_BITMAP PteTrackingBitmap;
  /* 0x00d4 */ volatile struct _MI_CACHED_PTES* CachedPteHeads;
  /* 0x00d8 */ volatile struct _MI_CACHED_PTES* CachedKernelStackPteHeads;
  /* 0x00dc */ struct _MI_SYSTEM_PTE_TYPE SystemViewPteInfo;
  /* 0x0110 */ struct _MI_SYSTEM_PTE_TYPE KernelStackPteInfo;
  /* 0x0144 */ unsigned long StackGrowthFailures;
  /* 0x0148 */ unsigned char KernelStackPages;
  /* 0x0149 */ unsigned char TrackPtesAborted;
  /* 0x014a */ unsigned char AdjustCounter;
  /* 0x014c */ volatile long ReservedMappingLock;
  /* 0x0150 */ struct _RTL_AVL_TREE ReservedMappingTree;
  /* 0x0154 */ struct _MMPFN* ReservedMappingPageTablePfns;
  /* 0x0158 */ struct _RTL_AVL_TREE OutswappedKernelStackRoot;
  /* 0x015c */ volatile long OutswappedKernelStackLock;
  /* 0x0160 */ struct _MMPTE* BreakMakePte;
  /* 0x0164 */ long __PADDING__[7];
} MI_SYSTEM_PTE_STATE, *PMI_SYSTEM_PTE_STATE; /* size: 0x0180 */

typedef struct _MI_IO_CACHE_STATS
{
  /* 0x0000 */ unsigned long UnusedBlocks;
  /* 0x0004 */ unsigned long ActiveCacheMatch;
  /* 0x0008 */ unsigned long ActiveCacheOverride;
  /* 0x000c */ unsigned long UnmappedCacheFlush;
  /* 0x0010 */ unsigned long UnmappedCacheMatch;
  /* 0x0014 */ unsigned long UnmappedCacheConflict;
  /* 0x0018 */ unsigned long PermanentIoAttributeConflict;
  /* 0x001c */ unsigned long PermanentIoNodeConflict;
} MI_IO_CACHE_STATS, *PMI_IO_CACHE_STATS; /* size: 0x0020 */

typedef struct _MI_IO_PAGE_STATE
{
  /* 0x0000 */ volatile long IoPfnLock;
  /* 0x0004 */ struct _RTL_AVL_TREE IoPfnRoot[3];
  /* 0x0010 */ struct _LIST_ENTRY UnusedCachedMaps;
  /* 0x0018 */ unsigned long OldestCacheFlushTimeStamp;
  /* 0x001c */ struct _MI_IO_CACHE_STATS IoCacheStats;
  /* 0x003c */ struct _RTL_AVL_TREE InvariantIoSpace;
} MI_IO_PAGE_STATE, *PMI_IO_PAGE_STATE; /* size: 0x0040 */

typedef struct _MI_PAGING_IO_STATE
{
  /* 0x0000 */ struct _RTL_AVL_TREE PageFileHead;
  /* 0x0004 */ volatile long PageFileHeadSpinLock;
  /* 0x0008 */ long PrefetchSeekThreshold;
  /* 0x0010 */ union _SLIST_HEADER InPageSupportSListHead[2];
  /* 0x0020 */ unsigned char InPageSupportSListMinimum[2];
  /* 0x0024 */ unsigned long InPageSinglePages;
  /* 0x0028 */ volatile long DelayPageFaults;
  /* 0x002c */ unsigned long FileCompressionBoundary;
  /* 0x0030 */ unsigned char MdlsAdjusted;
  /* 0x0031 */ char __PADDING__[7];
} MI_PAGING_IO_STATE, *PMI_PAGING_IO_STATE; /* size: 0x0038 */

typedef struct _MI_COMMON_PAGE_STATE
{
  /* 0x0000 */ struct _MMPFN* PageOfOnesPfn;
  /* 0x0004 */ unsigned long PageOfOnes;
  /* 0x0008 */ struct _MMPFN* DummyPagePfn;
  /* 0x000c */ unsigned long DummyPage;
  /* 0x0010 */ unsigned long PageOfZeroes;
  /* 0x0014 */ void* ZeroMapping;
  /* 0x0018 */ void* OnesMapping;
  /* 0x0020 */ unsigned __int64 ZeroCrc;
  /* 0x0028 */ unsigned __int64 OnesCrc;
  /* 0x0030 */ unsigned long BitmapGapFrames[2];
  /* 0x0038 */ unsigned long PfnGapFrames[2];
} MI_COMMON_PAGE_STATE, *PMI_COMMON_PAGE_STATE; /* size: 0x0040 */

typedef struct _MI_SYSTEM_TRIM_STATE
{
  /* 0x0000 */ unsigned long ExpansionLock;
  /* 0x0004 */ volatile long TrimInProgressCount;
  /* 0x0008 */ struct _KEVENT PeriodicWorkingSetEvent;
  /* 0x0018 */ unsigned long TrimAllPageFaultCount[3];
  /* 0x0024 */ long __PADDING__[7];
} MI_SYSTEM_TRIM_STATE, *PMI_SYSTEM_TRIM_STATE; /* size: 0x0040 */

typedef struct _MM_PAGED_POOL_INFO
{
  /* 0x0000 */ struct _EX_PUSH_LOCK Lock;
  /* 0x0004 */ unsigned long MaximumSize;
  /* 0x0008 */ unsigned long AllocatedPagedPool;
} MM_PAGED_POOL_INFO, *PMM_PAGED_POOL_INFO; /* size: 0x000c */

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

typedef struct _MMSUPPORT_SHARED
{
  /* 0x0000 */ volatile long WorkingSetLock;
  /* 0x0004 */ long GoodCitizenWaiting;
  /* 0x0008 */ unsigned long ReleasedCommitDebt;
  /* 0x000c */ unsigned long ResetPagesRepurposedCount;
  /* 0x0010 */ void* WsSwapSupport;
  /* 0x0014 */ void* CommitReleaseContext;
  /* 0x0018 */ void* AccessLog;
  /* 0x001c */ volatile unsigned long ChargedWslePages;
  /* 0x0020 */ unsigned long ActualWslePages;
  /* 0x0040 */ unsigned long WorkingSetCoreLock;
  /* 0x0044 */ void* ShadowMapping;
  /* 0x0048 */ long __PADDING__[14];
} MMSUPPORT_SHARED, *PMMSUPPORT_SHARED; /* size: 0x0080 */

typedef struct _MMSUPPORT_FULL
{
  /* 0x0000 */ struct _MMSUPPORT_INSTANCE Instance;
  /* 0x0080 */ struct _MMSUPPORT_SHARED Shared;
} MMSUPPORT_FULL, *PMMSUPPORT_FULL; /* size: 0x0100 */

typedef struct _SYSPTES_HEADER
{
  /* 0x0000 */ struct _LIST_ENTRY ListHead[16];
  /* 0x0080 */ unsigned long Count;
  /* 0x0084 */ unsigned long NumberOfEntries;
  /* 0x0088 */ unsigned long NumberOfEntriesPeak;
} SYSPTES_HEADER, *PSYSPTES_HEADER; /* size: 0x008c */

typedef struct _MI_VISIBLE_STATE
{
  /* 0x0000 */ struct _LIST_ENTRY SessionWsList;
  /* 0x0008 */ struct _RTL_BITMAP* SessionIdBitmap;
  /* 0x000c */ struct _MM_PAGED_POOL_INFO PagedPoolInfo;
  /* 0x0018 */ unsigned long MaximumNonPagedPoolInPages;
  /* 0x001c */ unsigned long SizeOfPagedPoolInPages;
  /* 0x0020 */ struct _MI_SYSTEM_PTE_TYPE SystemPteInfo;
  /* 0x0054 */ volatile unsigned long NonPagedPoolCommit;
  /* 0x0058 */ volatile unsigned long SmallNonPagedPtesCommit;
  /* 0x005c */ volatile unsigned long BootCommit;
  /* 0x0060 */ volatile unsigned long MdlPagesAllocated;
  /* 0x0064 */ volatile unsigned long SystemPageTableCommit;
  /* 0x0068 */ volatile unsigned long ProcessCommit;
  /* 0x006c */ volatile long DriverCommit;
  /* 0x0070 */ unsigned char PagingLevels;
  /* 0x0074 */ volatile unsigned long PfnDatabaseCommit;
  /* 0x0080 */ struct _MMSUPPORT_FULL SystemWs[6];
  /* 0x0680 */ struct _MMSUPPORT_SHARED SystemCacheShared;
  /* 0x0700 */ unsigned long MapCacheFailures;
  /* 0x0704 */ unsigned long PagefileHashPages;
  /* 0x0708 */ struct _SYSPTES_HEADER PteHeader;
  /* 0x0794 */ unsigned long SystemVaTypeCount[15];
  /* 0x07d0 */ unsigned char SystemVaType[1024];
  /* 0x0bd0 */ unsigned long SystemVaTypeCountFailures[15];
  /* 0x0c0c */ unsigned long SystemVaTypeCountLimit[15];
  /* 0x0c48 */ unsigned long SystemVaTypeCountPeak[15];
  /* 0x0c84 */ unsigned long SystemAvailableVa;
  /* 0x0c88 */ long __PADDING__[14];
} MI_VISIBLE_STATE, *PMI_VISIBLE_STATE; /* size: 0x0cc0 */

typedef struct _MI_SYSTEM_INFORMATION
{
  /* 0x0000 */ struct _MI_POOL_STATE Pools;
  /* 0x0080 */ struct _MI_SECTION_STATE Sections;
  /* 0x0200 */ struct _MI_SYSTEM_IMAGE_STATE SystemImages;
  /* 0x025c */ struct _MI_SESSION_STATE Sessions;
  /* 0x1290 */ struct _MI_PROCESS_STATE Processes;
  /* 0x1300 */ struct _MI_HARDWARE_STATE Hardware;
  /* 0x1480 */ struct _MI_SYSTEM_VA_STATE SystemVa;
  /* 0x3bc0 */ struct _MI_COMBINE_STATE PageCombines;
  /* 0x3be0 */ struct _MI_PAGELIST_STATE PageLists;
  /* 0x3bf8 */ struct _MI_PARTITION_STATE Partitions;
  /* 0x3c30 */ struct _MI_SHUTDOWN_STATE Shutdowns;
  /* 0x3c78 */ struct _MI_ERROR_STATE Errors;
  /* 0x3d40 */ struct _MI_ACCESS_LOG_STATE AccessLog;
  /* 0x3dc0 */ struct _MI_DEBUGGER_STATE Debugger;
  /* 0x3e50 */ struct _MI_STANDBY_STATE Standby;
  /* 0x3ec0 */ struct _MI_SYSTEM_PTE_STATE SystemPtes;
  /* 0x4040 */ struct _MI_IO_PAGE_STATE IoPages;
  /* 0x4080 */ struct _MI_PAGING_IO_STATE PagingIo;
  /* 0x40b8 */ struct _MI_COMMON_PAGE_STATE CommonPages;
  /* 0x4100 */ struct _MI_SYSTEM_TRIM_STATE Trims;
  /* 0x4140 */ unsigned long Cookie;
  /* 0x4144 */ void* volatile* BootRegistryRuns;
  /* 0x4148 */ volatile long ZeroingDisabled;
  /* 0x414c */ unsigned char FullyInitialized;
  /* 0x414d */ unsigned char SafeBooted;
  /* 0x4150 */ struct _RTL_BITMAP PfnBitMap;
  /* 0x4158 */ const struct _TlgProvider_t* TraceLogging;
  /* 0x4180 */ struct _MI_VISIBLE_STATE Vs;
} MI_SYSTEM_INFORMATION, *PMI_SYSTEM_INFORMATION; /* size: 0x4e40 */

