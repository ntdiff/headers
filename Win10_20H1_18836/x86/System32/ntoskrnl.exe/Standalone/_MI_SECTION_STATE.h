typedef struct _RTL_AVL_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
} RTL_AVL_TREE, *PRTL_AVL_TREE; /* size: 0x0004 */

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

