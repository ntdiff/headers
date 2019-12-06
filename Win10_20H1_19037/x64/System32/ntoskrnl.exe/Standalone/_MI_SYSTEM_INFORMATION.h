typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

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

typedef struct _MI_POOL_STATE
{
  /* 0x0000 */ unsigned __int64 MaximumNonPagedPoolThreshold;
  /* 0x0008 */ volatile unsigned __int64 AllocatedNonPagedPool;
  /* 0x0010 */ volatile unsigned __int64 AllocatedSecureNonPagedPool;
  /* 0x0018 */ struct _SINGLE_LIST_ENTRY BadPoolHead;
  /* 0x0020 */ unsigned long HighEventSets;
  /* 0x0024 */ unsigned char HighEventSetsValid;
  /* 0x0028 */ unsigned __int64 LowPagedPoolThreshold;
  /* 0x0030 */ unsigned __int64 HighPagedPoolThreshold;
  /* 0x0038 */ volatile long PermittedFaultsLock;
  /* 0x0040 */ struct _RTL_AVL_TREE PermittedFaultsTree;
  /* 0x0048 */ struct _MI_ACCESS_VIOLATION_RANGE PermittedFaultsInitialNode[2];
  /* 0x0098 */ unsigned __int64 TotalPagedPoolQuota;
  /* 0x00a0 */ unsigned __int64 TotalNonPagedPoolQuota;
} MI_POOL_STATE, *PMI_POOL_STATE; /* size: 0x00a8 */

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
  /* 0x0008 */ struct _MMPTE* SubsectionBase;
  /* 0x0010 */ struct _SUBSECTION* NextSubsection;
  union
  {
    /* 0x0018 */ struct _RTL_AVL_TREE GlobalPerSessionHead;
    /* 0x0018 */ struct _MI_CONTROL_AREA_WAIT_BLOCK* CreationWaitList;
    /* 0x0018 */ struct _MI_PER_SESSION_PROTOS* SessionDriverProtos;
  }; /* size: 0x0008 */
  union
  {
    union
    {
      /* 0x0020 */ unsigned long LongFlags;
      /* 0x0020 */ struct _MMSUBSECTION_FLAGS SubsectionFlags;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u;
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
    /* 0x0034 */ unsigned long DirtyPages : 1; /* bit position: 31 */
  }; /* bitfield */
} SUBSECTION, *PSUBSECTION; /* size: 0x0038 */

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
  /* 0x0050 */ struct _LIST_ENTRY DereferenceList;
  /* 0x0060 */ unsigned __int64 NumberOfMappedViews;
  /* 0x0068 */ unsigned long NumberOfPfnReferences;
  /* 0x006c */ unsigned long LargeViews;
  /* 0x0070 */ struct _MI_PROTOTYPE_PTES_NODE ProtosNode;
} MSUBSECTION, *PMSUBSECTION; /* size: 0x0090 */

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

typedef struct _MMSECTION_FLAGS2
{
  /* 0x0000 */ unsigned short PartitionId : 10; /* bit position: 0 */
  struct /* bitfield */
  {
    /* 0x0002 */ unsigned char NoCrossPartitionAccess : 1; /* bit position: 0 */
    /* 0x0002 */ unsigned char SubsectionCrossPartitionReferenceOverflow : 1; /* bit position: 1 */
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
        /* 0x0060 */ unsigned long FlushInProgressCount;
        /* 0x0060 */ unsigned long NumberOfSubsections;
        /* 0x0060 */ struct _MI_IMAGE_SECURITY_REFERENCE* SeImageStub;
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
        /* 0x0078 */ unsigned __int64 IoAttributionContext : 61; /* bit position: 0 */
        /* 0x0078 */ unsigned __int64 Spare : 3; /* bit position: 61 */
      }; /* bitfield */
      /* 0x0078 */ unsigned __int64 ImageCrossPartitionCharge;
      /* 0x0078 */ unsigned __int64 CommittedPageCount : 36; /* bit position: 0 */
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u3;
} CONTROL_AREA, *PCONTROL_AREA; /* size: 0x0080 */

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
              /* 0x0003 */ unsigned char UmsScheduled : 1; /* bit position: 6 */
              /* 0x0003 */ unsigned char UmsPrimary : 1; /* bit position: 7 */
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
  /* 0x0020 */ unsigned long DataSectionProtectionMask;
  /* 0x0028 */ void* HighSectionBase;
  /* 0x0030 */ struct _MSUBSECTION PhysicalSubsection;
  /* 0x00c0 */ struct _CONTROL_AREA PhysicalControlArea;
  /* 0x0140 */ struct _MMPFNLIST PurgingExtentPages;
  /* 0x0168 */ struct _MMPFN* DanglingExtentPages;
  /* 0x0170 */ struct _WORK_QUEUE_ITEM DanglingExtentsWorkItem;
  /* 0x0190 */ struct _MI_EXTENT_DELETION_WAIT_BLOCK DanglingExtentsDeletionWaitList;
  /* 0x01b0 */ unsigned char FileOnlyMemoryPfnsCreated;
  /* 0x01b1 */ unsigned char DanglingExtentsWorkerActive;
  /* 0x01b2 */ unsigned char PurgingExtentsNeedWatchdog;
  /* 0x01b8 */ struct _RTL_AVL_TREE PrototypePtesTree;
  /* 0x01c0 */ volatile long PrototypePtesTreeSpinLock;
  /* 0x01c8 */ struct _EX_PUSH_LOCK RelocateBitmapsLock;
  /* 0x01d0 */ struct _RTL_BITMAP_EX ImageBitMapNative;
  /* 0x01e0 */ unsigned __int64 ImageBiasNative;
  /* 0x01e8 */ struct _MI_DLL_OVERFLOW_AREA OverflowArea;
  /* 0x0208 */ struct _MI_SECTION_WOW_STATE Wow[1];
  /* 0x0248 */ unsigned __int64 ImageBiasWow;
  /* 0x0250 */ struct _RTL_BITMAP_EX ImageBitMapWowScratch;
  /* 0x0260 */ struct _RTL_BITMAP_EX ImageBitMap64Low;
  /* 0x0270 */ unsigned __int64 ImageBias64Low;
  /* 0x0278 */ void* ApiSetSection;
  /* 0x0280 */ void* ApiSetSchema;
  /* 0x0288 */ unsigned __int64 ApiSetSchemaSize;
  /* 0x0290 */ unsigned long LostDataFiles;
  /* 0x0294 */ unsigned long LostDataPages;
  /* 0x0298 */ unsigned long ImageFailureReason;
  /* 0x02a0 */ struct _SECTION* CfgBitMapSection;
  /* 0x02a8 */ struct _CONTROL_AREA* CfgBitMapControlArea;
  /* 0x02b0 */ struct _RTL_BITMAP_EX KernelCfgBitMap;
  /* 0x02c0 */ struct _EX_PUSH_LOCK KernelCfgBitMapLock;
  /* 0x02c8 */ unsigned long ImageCfgFailure;
  /* 0x02cc */ unsigned long RetpolineReservePages;
  /* 0x02d0 */ struct _MDL* RetpolineStubMdl;
  /* 0x02d8 */ struct _RTL_BITMAP_EX KernelRetpolineBitMap;
  /* 0x02e8 */ struct _RTL_RETPOLINE_ROUTINES* RetpolineRoutines;
  /* 0x02f0 */ struct _MMPTE* RetpolineRevertPte;
  /* 0x02f8 */ struct _LIST_ENTRY NonRetpolineImageLoadList;
  /* 0x0308 */ unsigned long RetpolineStubPages;
  /* 0x030c */ long RetpolineBootStatus;
  /* 0x0310 */ unsigned long ImageBreakpointEnabled;
  /* 0x0314 */ unsigned long ImageBreakpointChecksum;
  /* 0x0318 */ unsigned long ImageBreakpointSize;
  /* 0x031c */ volatile long ImageValidationFailed;
  /* 0x0320 */ struct _RTL_AVL_TREE ImageExtentTree;
  /* 0x0328 */ struct _EX_PUSH_LOCK ImageExtentTreeLock;
  /* 0x0330 */ unsigned long HotPatchReserveSize;
  /* 0x0334 */ long __PADDING__[3];
} MI_SECTION_STATE, *PMI_SECTION_STATE; /* size: 0x0340 */

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
  /* 0x0010 */ struct _EX_PUSH_LOCK LoadLock;
  /* 0x0018 */ struct _ETHREAD* LoadLockOwner;
  /* 0x0020 */ unsigned long LoadLockCount;
  /* 0x0024 */ volatile long FixupLock;
  /* 0x0028 */ unsigned char FirstLoadEver;
  /* 0x0029 */ unsigned char LargePageAll;
  /* 0x0030 */ unsigned __int64 LastPage;
  /* 0x0038 */ struct _LIST_ENTRY LargePageList;
  /* 0x0048 */ struct _LIST_ENTRY StrongCodeLoadFailureList;
  /* 0x0058 */ struct _KLDR_DATA_TABLE_ENTRY* SystemBase[1];
  /* 0x0060 */ struct _KLDR_DATA_TABLE_ENTRY* BeingDeleted;
  /* 0x0068 */ struct _EX_PUSH_LOCK MappingRangesPushLock;
  /* 0x0070 */ struct _MI_DRIVER_VA* MappingRanges[2];
  /* 0x0080 */ unsigned __int64 PageCount;
  /* 0x0088 */ struct _MM_SYSTEM_PAGE_COUNTS PageCounts;
  /* 0x0098 */ struct _EX_PUSH_LOCK CollidedLock;
  /* 0x00a0 */ struct _RTL_AVL_TREE ImageTree;
} MI_SYSTEM_IMAGE_STATE, *PMI_SYSTEM_IMAGE_STATE; /* size: 0x00a8 */

typedef struct _MMSESSION
{
  /* 0x0000 */ struct _EX_PUSH_LOCK SystemSpaceViewLock;
  /* 0x0008 */ struct _EX_PUSH_LOCK* SystemSpaceViewLockPointer;
  /* 0x0010 */ struct _RTL_AVL_TREE ViewRoot;
  /* 0x0018 */ unsigned long ViewCount;
  /* 0x001c */ unsigned long BitmapFailures;
} MMSESSION, *PMMSESSION; /* size: 0x0020 */

typedef struct _MI_HUGE_SYSTEM_VIEW_HEAD
{
  /* 0x0000 */ struct _RTL_AVL_TREE ViewRoot;
  /* 0x0008 */ unsigned long ViewCount;
  /* 0x000c */ volatile long Lock;
} MI_HUGE_SYSTEM_VIEW_HEAD, *PMI_HUGE_SYSTEM_VIEW_HEAD; /* size: 0x0010 */

typedef struct _KEVENT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT; /* size: 0x0018 */

typedef struct _MI_SESSION_STATE
{
  /* 0x0000 */ struct _MMSESSION SystemSession;
  /* 0x0020 */ unsigned char CodePageEdited;
  /* 0x0028 */ unsigned __int64* DynamicVaBitBuffer;
  /* 0x0030 */ unsigned __int64 DynamicVaBitBufferPages;
  /* 0x0038 */ void* DynamicVaStart;
  /* 0x0040 */ void* ImageVaStart;
  /* 0x0048 */ struct _MI_HUGE_SYSTEM_VIEW_HEAD SystemViewBuckets[256];
  /* 0x1048 */ unsigned long* DynamicPtesBitBuffer;
  /* 0x1050 */ struct _EX_PUSH_LOCK IdLock;
  /* 0x1058 */ struct _EPROCESS* LeaderProcess;
  /* 0x1060 */ struct _EX_PUSH_LOCK InitializeLock;
  /* 0x1068 */ struct _MMWSL_INSTANCE* WorkingSetList;
  /* 0x1070 */ void* SessionBase;
  /* 0x1078 */ void* SessionCore;
  /* 0x1080 */ struct _RTL_AVL_TREE SessionIdNodes;
  /* 0x1088 */ struct _KEVENT DeleteInProgressEvent;
  /* 0x10a0 */ unsigned long DeleteInProgressCount;
  /* 0x10a4 */ long __PADDING__[1];
} MI_SESSION_STATE, *PMI_SESSION_STATE; /* size: 0x10a8 */

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
} MI_PROCESS_STATE, *PMI_PROCESS_STATE; /* size: 0x0048 */

typedef struct _HAL_NODE_RANGE
{
  /* 0x0000 */ unsigned __int64 PageFrameIndex;
  /* 0x0008 */ unsigned long Node;
  /* 0x000c */ long __PADDING__[1];
} HAL_NODE_RANGE, *PHAL_NODE_RANGE; /* size: 0x0010 */

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
  /* 0x000c */ unsigned char NodeShift;
  /* 0x000d */ unsigned char ChannelShift;
  /* 0x0010 */ unsigned long ChannelHintIndex;
  /* 0x0014 */ unsigned long ChannelLastRangeIndexInclusive;
  /* 0x0018 */ struct _MI_NODE_NUMBER_ZERO_BASED* NodeGraph;
  /* 0x0020 */ struct _MI_SYSTEM_NODE_INFORMATION* SystemNodeInformation;
  /* 0x0028 */ struct _HAL_NODE_RANGE TemporaryNumaRanges[2];
  /* 0x0048 */ struct _HAL_NODE_RANGE* NumaMemoryRanges;
  /* 0x0050 */ struct _HAL_CHANNEL_MEMORY_RANGES* ChannelMemoryRanges;
  /* 0x0058 */ unsigned long SecondLevelCacheSize;
  /* 0x005c */ unsigned long FirstLevelCacheSize;
  /* 0x0060 */ unsigned long PhysicalAddressBits;
  /* 0x0064 */ unsigned long LogicalProcessorsPerCore;
  /* 0x0068 */ unsigned char ProcessorCachesFlushedOnPowerLoss;
  /* 0x0070 */ unsigned __int64 TotalPagesAllowed;
  /* 0x0078 */ unsigned long SecondaryColorMask;
  /* 0x007c */ unsigned long SecondaryColors;
  /* 0x0080 */ unsigned long FlushTbForAttributeChange;
  /* 0x0084 */ unsigned long FlushCacheForAttributeChange;
  /* 0x0088 */ unsigned long FlushCacheForPageAttributeChange;
  /* 0x008c */ unsigned long CacheFlushPromoteThreshold;
  /* 0x0090 */ union _LARGE_INTEGER PerformanceCounterFrequency;
  /* 0x00c0 */ unsigned __int64 InvalidPteMask;
  /* 0x0100 */ unsigned long LargePageColors[3];
  /* 0x0110 */ unsigned __int64 FlushTbThreshold;
  /* 0x0118 */ enum _MI_PFN_CACHE_ATTRIBUTE OptimalZeroingAttribute[4][4];
  /* 0x0158 */ unsigned char AttributeChangeRequiresReZero;
  /* 0x0160 */ struct _MI_ZERO_COST_COUNTS ZeroCostCounts[2];
  /* 0x0180 */ unsigned __int64 VsmKernelPageCount;
  /* 0x0188 */ long __PADDING__[14];
} MI_HARDWARE_STATE, *PMI_HARDWARE_STATE; /* size: 0x01c0 */

typedef struct _MI_DYNAMIC_BITMAP
{
  /* 0x0000 */ struct _RTL_BITMAP_EX Bitmap;
  /* 0x0010 */ unsigned __int64 MaximumSize;
  /* 0x0018 */ unsigned __int64 Hint;
  /* 0x0020 */ void* BaseVa;
  /* 0x0028 */ unsigned __int64 SizeTopDown;
  /* 0x0030 */ unsigned __int64 HintTopDown;
  /* 0x0038 */ void* BaseVaTopDown;
  /* 0x0040 */ unsigned __int64 SpinLock;
} MI_DYNAMIC_BITMAP, *PMI_DYNAMIC_BITMAP; /* size: 0x0048 */

typedef struct _MMWSL_INSTANCE
{
  /* 0x0000 */ struct _MMPTE* NextPteToTrim;
  /* 0x0008 */ struct _MMPTE* NextPteToAge;
  /* 0x0010 */ struct _MMPTE* NextPteToAccessClear;
  /* 0x0018 */ unsigned long LastAccessClearingRemainder;
  /* 0x001c */ unsigned long LastAgingRemainder;
  /* 0x0020 */ unsigned __int64 LockedEntries;
} MMWSL_INSTANCE, *PMMWSL_INSTANCE; /* size: 0x0028 */

typedef struct _MI_SYSTEM_VA_STATE
{
  /* 0x0000 */ unsigned __int64 SystemTablesLock;
  /* 0x0008 */ unsigned __int64 AvailableSystemCacheVa;
  /* 0x0010 */ struct _MI_DYNAMIC_BITMAP DynamicBitMapKernelStacks;
  /* 0x0058 */ struct _MI_DYNAMIC_BITMAP DynamicBitMapSystemPtes;
  /* 0x00a0 */ struct _MI_DYNAMIC_BITMAP DynamicBitMapDriverImages[2];
  /* 0x0130 */ struct _MI_DYNAMIC_BITMAP DynamicBitMapPagedPool;
  /* 0x0178 */ struct _MI_DYNAMIC_BITMAP DynamicBitMapSystemCache;
  /* 0x01c0 */ struct _MI_DYNAMIC_BITMAP DynamicBitMapSecureNonPagedPool;
  /* 0x0208 */ void* HalPrivateVaStart;
  /* 0x0210 */ unsigned __int64 HalPrivateVaSize;
  /* 0x0218 */ unsigned long SystemVaAssignment[8];
  /* 0x0238 */ unsigned long SystemVaAssignmentHint;
  /* 0x023c */ unsigned long TopLevelPteLockBits[32];
  /* 0x02bc */ volatile long DeleteKvaLock;
  /* 0x02c0 */ struct _MI_WSLE* WsleArrays[8];
  /* 0x0300 */ void* PagableHyperSpace;
  /* 0x0308 */ void* HyperSpaceEnd;
  /* 0x0310 */ unsigned __int64 PagableHyperSpaceBytes;
  /* 0x0318 */ unsigned __int64 PageTableCommitmentOffset[2];
  /* 0x0328 */ struct _KEVENT FreeSystemCacheVa;
  /* 0x0340 */ unsigned __int64 SystemVaLock;
  /* 0x0348 */ unsigned __int64 SystemCacheViewLock;
  /* 0x0350 */ struct _MMWSL_INSTANCE SystemWorkingSetList[8];
  /* 0x0490 */ unsigned __int64 SelfmapLock[4];
  /* 0x04b0 */ long __PADDING__[4];
} MI_SYSTEM_VA_STATE, *PMI_SYSTEM_VA_STATE; /* size: 0x04c0 */

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
  /* 0x0008 */ struct _RTL_AVL_TREE ActiveThreadTree;
  /* 0x0010 */ volatile long ActiveZeroSpinLock;
  /* 0x0018 */ struct _RTL_AVL_TREE ActiveZeroThreadTree;
  /* 0x0020 */ unsigned long NumberOfLargePageListHeads;
  /* 0x0024 */ long __PADDING__[1];
} MI_PAGELIST_STATE, *PMI_PAGELIST_STATE; /* size: 0x0028 */

typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0008 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0010 */

typedef struct _MI_PARTITION_STATE
{
  /* 0x0000 */ unsigned __int64 PartitionLock;
  /* 0x0008 */ struct _EX_PUSH_LOCK PartitionIdLock;
  /* 0x0010 */ unsigned __int64 InitialPartitionIdBits;
  /* 0x0018 */ struct _LIST_ENTRY PartitionList;
  /* 0x0028 */ struct _RTL_BITMAP* PartitionIdBitmap;
  /* 0x0030 */ struct _RTL_BITMAP InitialPartitionIdBitmap;
  /* 0x0040 */ struct _MI_PARTITION* TempPartitionPointers[1];
  /* 0x0048 */ struct _MI_PARTITION** Partition;
  /* 0x0050 */ unsigned __int64 TotalPagesInChildPartitions;
  /* 0x0058 */ unsigned long CrossPartitionDenials;
  /* 0x005c */ unsigned char MultiplePartitionsExist;
  /* 0x0060 */ struct _RTL_BITMAP_EX HugeIoPfnBitMap;
  /* 0x0070 */ struct _MI_HUGE_PFN* HugePfnDatabase;
  /* 0x0080 */ unsigned __int64 HugeRangesLock;
  /* 0x0088 */ long __PADDING__[14];
} MI_PARTITION_STATE, *PMI_PARTITION_STATE; /* size: 0x00c0 */

typedef struct _MI_RESUME_WORKITEM
{
  /* 0x0000 */ struct _KEVENT ResumeCompleteEvent;
  /* 0x0018 */ struct _WORK_QUEUE_ITEM WorkItem;
} MI_RESUME_WORKITEM, *PMI_RESUME_WORKITEM; /* size: 0x0038 */

typedef struct _MI_SHUTDOWN_STATE
{
  /* 0x0000 */ unsigned char CrashDumpInitialized;
  /* 0x0001 */ unsigned char ConnectedStandbyActive;
  /* 0x0002 */ unsigned char ZeroPageFileAtShutdown;
  /* 0x0004 */ unsigned long SystemShutdown;
  /* 0x0008 */ long ShutdownFlushInProgress;
  /* 0x000c */ unsigned long MirroringActive;
  /* 0x0010 */ struct _MI_RESUME_WORKITEM ResumeItem;
  /* 0x0048 */ struct _ETHREAD* MirrorHoldsPfn;
  /* 0x0050 */ struct _RTL_BITMAP_EX MirrorBitMaps[2];
  /* 0x0070 */ struct _MMPTE* CrashDumpPte;
} MI_SHUTDOWN_STATE, *PMI_SHUTDOWN_STATE; /* size: 0x0078 */

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
  /* 0x0038 */ unsigned __int64 PageOfInterest;
  /* 0x0040 */ struct _MI_PROBE_RAISE_TRACKER ProbeRaises;
  /* 0x0084 */ struct _MI_FORCED_COMMITS ForcedCommits;
  /* 0x008c */ unsigned long WsleFailures[1];
  /* 0x0090 */ unsigned long PageHashErrors;
  /* 0x0094 */ unsigned long CheckZeroCount;
  /* 0x0098 */ volatile long ZeroedPageSingleBitErrorsDetected;
  /* 0x009c */ volatile long BadPagesDetected;
  /* 0x00a0 */ long ScrubPasses;
  /* 0x00a4 */ long ScrubBadPagesFound;
  /* 0x00a8 */ unsigned long UserViewFailures;
  /* 0x00ac */ unsigned long UserViewCollisionFailures;
  /* 0x00b0 */ unsigned long UserAllocateFailures;
  /* 0x00b4 */ unsigned long UserAllocateCollisionFailures;
  /* 0x00b8 */ struct _MI_RESAVAIL_FAILURES ResavailFailures;
  /* 0x00c0 */ unsigned char PendingBadPages;
  /* 0x00c1 */ unsigned char FatalGraphicsFailures;
  /* 0x00c2 */ unsigned char InitFailure;
  /* 0x00c3 */ unsigned char StopBadMaps;
  /* 0x00c4 */ long __PADDING__[1];
} MI_ERROR_STATE, *PMI_ERROR_STATE; /* size: 0x00c8 */

typedef struct _MI_ACCESS_LOG_STATE
{
  /* 0x0000 */ struct _MM_PAGE_ACCESS_INFO_HEADER* volatile CcAccessLog;
  /* 0x0008 */ struct _WORK_QUEUE_ITEM DisableAccessLogging;
  /* 0x0028 */ unsigned long Enabled;
  /* 0x002c */ unsigned long MinLoggingPriority;
  /* 0x0040 */ unsigned __int64 AccessLoggingLock;
  /* 0x0048 */ long __PADDING__[14];
} MI_ACCESS_LOG_STATE, *PMI_ACCESS_LOG_STATE; /* size: 0x0080 */

typedef struct _MI_DEBUGGER_STATE
{
  /* 0x0000 */ unsigned char TransientWrite;
  /* 0x0001 */ unsigned char CodePageEdited;
  /* 0x0008 */ struct _MMPTE* DebugPte;
  /* 0x0010 */ unsigned long PoisonedTb;
  /* 0x0014 */ volatile long InDebugger;
  /* 0x0018 */ void* volatile Pfns[32];
} MI_DEBUGGER_STATE, *PMI_DEBUGGER_STATE; /* size: 0x0118 */

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
  /* 0x0008 */ struct _SINGLE_LIST_ENTRY DpcListEntry;
  /* 0x0010 */ unsigned __int64 ProcessorHistory;
  /* 0x0018 */ void* DeferredRoutine /* function */;
  /* 0x0020 */ void* DeferredContext;
  /* 0x0028 */ void* SystemArgument1;
  /* 0x0030 */ void* SystemArgument2;
  /* 0x0038 */ void* DpcData;
} KDPC, *PKDPC; /* size: 0x0040 */

typedef struct _MI_STANDBY_STATE
{
  /* 0x0000 */ unsigned __int64 FirstDecayPage;
  /* 0x0010 */ union _SLIST_HEADER PfnDecayFreeSList;
  /* 0x0020 */ struct _MM_PAGE_ACCESS_INFO_HEADER* PfnRepurposeLog;
  /* 0x0028 */ struct _KDPC AllocatePfnRepurposeDpc;
  /* 0x0070 */ union _SLIST_HEADER PageHeatListSlist;
  /* 0x0080 */ volatile long PageHeatListDisableAllocation;
  /* 0x0084 */ long __PADDING__[3];
} MI_STANDBY_STATE, *PMI_STANDBY_STATE; /* size: 0x0090 */

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
  MiVaSecureNonPagedPool = 15,
  MiVaMaximumType = 16,
} MI_SYSTEM_VA_TYPE, *PMI_SYSTEM_VA_TYPE;

typedef struct _MI_SYSTEM_PTE_TYPE
{
  /* 0x0000 */ struct _RTL_BITMAP_EX Bitmap;
  /* 0x0010 */ struct _MMPTE* BasePte;
  /* 0x0018 */ unsigned long Flags;
  /* 0x001c */ enum _MI_SYSTEM_VA_TYPE VaType;
  /* 0x0020 */ unsigned long* FailureCount;
  /* 0x0028 */ unsigned long PteFailures;
  union
  {
    /* 0x0030 */ unsigned __int64 SpinLock;
    /* 0x0030 */ struct _EX_PUSH_LOCK* GlobalPushLock;
  }; /* size: 0x0008 */
  /* 0x0038 */ volatile unsigned __int64 TotalSystemPtes;
  /* 0x0040 */ unsigned __int64 Hint;
  /* 0x0048 */ unsigned __int64 LowestBitEverAllocated;
  /* 0x0050 */ volatile struct _MI_CACHED_PTES* CachedPtes;
  /* 0x0058 */ volatile unsigned __int64 TotalFreeSystemPtes;
} MI_SYSTEM_PTE_TYPE, *PMI_SYSTEM_PTE_TYPE; /* size: 0x0060 */

typedef struct _MI_ULTRA_VA_CONTEXT
{
  /* 0x0000 */ unsigned __int64 Lock;
  /* 0x0008 */ void* ZeroMapping;
  /* 0x0010 */ unsigned __int64 AllocationHintBit;
  /* 0x0018 */ struct _RTL_BITMAP_EX Bitmap[2];
  /* 0x0038 */ volatile long ConcurrencyMaximum;
  /* 0x003c */ volatile long ConcurrencyCount;
} MI_ULTRA_VA_CONTEXT, *PMI_ULTRA_VA_CONTEXT; /* size: 0x0040 */

typedef struct _MI_SYSTEM_PTE_STATE
{
  /* 0x0000 */ struct _NPAGED_LOOKASIDE_LIST MdlTrackerLookaside;
  /* 0x0080 */ union _SLIST_HEADER DeadPteTrackerSListHead;
  /* 0x0090 */ unsigned __int64 PteTrackerLock;
  /* 0x0098 */ struct _RTL_BITMAP_EX PteTrackingBitmap;
  /* 0x00a8 */ volatile struct _MI_CACHED_PTES* CachedPteHeads;
  /* 0x00b0 */ volatile struct _MI_CACHED_PTES* CachedKernelStackPteHeads;
  /* 0x00b8 */ struct _MI_SYSTEM_PTE_TYPE SystemViewPteInfo;
  /* 0x0118 */ struct _MI_SYSTEM_PTE_TYPE KernelStackPteInfo;
  /* 0x0178 */ unsigned long StackGrowthFailures;
  /* 0x017c */ unsigned char KernelStackPages;
  /* 0x017d */ unsigned char TrackPtesAborted;
  /* 0x017e */ unsigned char AdjustCounter;
  /* 0x0180 */ volatile long ReservedMappingLock;
  /* 0x0188 */ struct _RTL_AVL_TREE ReservedMappingTree;
  /* 0x0190 */ struct _MMPFN* ReservedMappingPageTablePfns;
  /* 0x0198 */ struct _RTL_AVL_TREE OutswappedKernelStackRoot;
  /* 0x01a0 */ volatile long OutswappedKernelStackLock;
  /* 0x01a8 */ struct _MMPTE* BreakMakePte;
  /* 0x01b0 */ struct _MI_ULTRA_VA_CONTEXT UltraSpaceContext;
  /* 0x01f0 */ unsigned long NumberOfUltraMdlMaps;
  /* 0x01f8 */ struct _MI_ULTRA_MDL_NODE* UltraMdlNodeMappings;
} MI_SYSTEM_PTE_STATE, *PMI_SYSTEM_PTE_STATE; /* size: 0x0200 */

typedef struct _MI_IO_CACHE_STATS
{
  /* 0x0000 */ unsigned __int64 UnusedBlocks;
  /* 0x0008 */ unsigned long ActiveCacheMatch;
  /* 0x000c */ unsigned long ActiveCacheOverride;
  /* 0x0010 */ unsigned long UnmappedCacheFlush;
  /* 0x0014 */ unsigned long UnmappedCacheMatch;
  /* 0x0018 */ unsigned long UnmappedCacheConflict;
  /* 0x001c */ unsigned long PermanentIoAttributeConflict;
  /* 0x0020 */ unsigned long PermanentIoNodeConflict;
  /* 0x0024 */ long __PADDING__[1];
} MI_IO_CACHE_STATS, *PMI_IO_CACHE_STATS; /* size: 0x0028 */

typedef struct _MI_IO_PAGE_STATE
{
  /* 0x0000 */ volatile long IoPfnLock;
  /* 0x0008 */ struct _RTL_AVL_TREE IoPfnRoot[3];
  /* 0x0020 */ struct _LIST_ENTRY UnusedCachedMaps;
  /* 0x0030 */ unsigned long OldestCacheFlushTimeStamp;
  /* 0x0038 */ struct _MI_IO_CACHE_STATS IoCacheStats;
  /* 0x0060 */ struct _RTL_AVL_TREE InvariantIoSpace;
} MI_IO_PAGE_STATE, *PMI_IO_PAGE_STATE; /* size: 0x0068 */

typedef struct _MI_PAGING_IO_STATE
{
  /* 0x0000 */ struct _RTL_AVL_TREE PageFileHead;
  /* 0x0008 */ volatile long PageFileHeadSpinLock;
  /* 0x000c */ long PrefetchSeekThreshold;
  /* 0x0010 */ unsigned long InPageSinglePages;
  /* 0x0020 */ union _SLIST_HEADER InPageSupportSListHead[2];
  /* 0x0040 */ union _SLIST_HEADER ReservedInPageSupportSListHead[2];
  /* 0x0060 */ unsigned char InPageSupportSListMinimum[2];
  /* 0x0068 */ struct _MMINPAGE_SUPPORT* FirstReservedInPageBlock[2];
  /* 0x0078 */ struct _MMINPAGE_SUPPORT* LastReservedInPageBlock[2];
  /* 0x0088 */ struct _MMPTE* ReservedPtes;
  /* 0x0090 */ unsigned __int64 ReservedPtesLock;
  /* 0x0098 */ unsigned long ReservedPtesBitBuffer;
  /* 0x009c */ volatile long DelayPageFaults;
  /* 0x00a0 */ unsigned long FileCompressionBoundary;
  /* 0x00a4 */ unsigned char MdlsAdjusted;
  /* 0x00a5 */ char __PADDING__[11];
} MI_PAGING_IO_STATE, *PMI_PAGING_IO_STATE; /* size: 0x00b0 */

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
    /* 0x0000 */ unsigned __int64 PageFrameNumber : 36; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 ReservedForHardware : 4; /* bit position: 48 */
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
    /* 0x0000 */ unsigned __int64 Unused : 5; /* bit position: 27 */
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
    /* 0x0000 */ unsigned __int64 Spare : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned __int64 IoTracker : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned __int64 SwizzleBit : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Transition : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 PageFrameNumber : 36; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 Unused : 16; /* bit position: 48 */
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
    /* 0x0000 */ unsigned __int64 ColdPage : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 Unused1 : 3; /* bit position: 12 */
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
    /* 0x0000 */ unsigned __int64 filler1 : 16; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 NextEntry : 36; /* bit position: 28 */
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

typedef struct _MI_COMMON_PAGE_STATE
{
  /* 0x0000 */ struct _MMPFN* PageOfOnesPfn;
  /* 0x0008 */ unsigned __int64 PageOfOnes;
  /* 0x0010 */ struct _MMPFN* DummyPagePfn;
  /* 0x0018 */ unsigned __int64 DummyPage;
  /* 0x0020 */ unsigned __int64 PageOfZeroes;
  /* 0x0028 */ void* ZeroMapping;
  /* 0x0030 */ void* OnesMapping;
  /* 0x0038 */ unsigned __int64 ZeroCrc;
  /* 0x0040 */ unsigned __int64 OnesCrc;
  /* 0x0048 */ unsigned __int64 BitmapGapFrames[4];
  /* 0x0068 */ unsigned __int64 PfnGapFrames[4];
  /* 0x0088 */ unsigned __int64 PageTableOfZeroes;
  /* 0x0090 */ struct _MMPTE PdeOfZeroes;
  /* 0x0098 */ unsigned __int64 PageTableOfOnes;
  /* 0x00a0 */ struct _MMPTE PdeOfOnes;
} MI_COMMON_PAGE_STATE, *PMI_COMMON_PAGE_STATE; /* size: 0x00a8 */

typedef struct _MI_SYSTEM_TRIM_STATE
{
  /* 0x0000 */ unsigned __int64 ExpansionLock;
  /* 0x0008 */ volatile long TrimInProgressCount;
  /* 0x0010 */ struct _KEVENT PeriodicWorkingSetEvent;
  /* 0x0028 */ unsigned long TrimAllPageFaultCount[3];
  /* 0x0034 */ long __PADDING__[3];
} MI_SYSTEM_TRIM_STATE, *PMI_SYSTEM_TRIM_STATE; /* size: 0x0040 */

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
  /* 0x0010 */ unsigned __int64 AllocatedPagedPool;
} MM_PAGED_POOL_INFO, *PMM_PAGED_POOL_INFO; /* size: 0x0018 */

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

typedef struct _MMSUPPORT_SHARED
{
  /* 0x0000 */ volatile long WorkingSetLock;
  /* 0x0004 */ long GoodCitizenWaiting;
  /* 0x0008 */ unsigned __int64 ReleasedCommitDebt;
  /* 0x0010 */ unsigned __int64 ResetPagesRepurposedCount;
  /* 0x0018 */ void* WsSwapSupport;
  /* 0x0020 */ void* CommitReleaseContext;
  /* 0x0028 */ void* AccessLog;
  /* 0x0030 */ volatile unsigned __int64 ChargedWslePages;
  /* 0x0038 */ unsigned __int64 ActualWslePages;
  /* 0x0040 */ unsigned __int64 WorkingSetCoreLock;
  /* 0x0048 */ void* ShadowMapping;
  /* 0x0050 */ long __PADDING__[12];
} MMSUPPORT_SHARED, *PMMSUPPORT_SHARED; /* size: 0x0080 */

typedef struct _MMSUPPORT_FULL
{
  /* 0x0000 */ struct _MMSUPPORT_INSTANCE Instance;
  /* 0x00c0 */ struct _MMSUPPORT_SHARED Shared;
} MMSUPPORT_FULL, *PMMSUPPORT_FULL; /* size: 0x0140 */

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
  /* 0x0000 */ struct _LIST_ENTRY SessionWsList;
  /* 0x0010 */ struct _RTL_BITMAP* SessionIdBitmap;
  /* 0x0018 */ struct _MM_PAGED_POOL_INFO PagedPoolInfo;
  /* 0x0030 */ unsigned __int64 MaximumNonPagedPoolInPages;
  /* 0x0038 */ unsigned __int64 SizeOfPagedPoolInPages;
  /* 0x0040 */ struct _MI_SYSTEM_PTE_TYPE SystemPteInfo;
  /* 0x00a0 */ volatile unsigned __int64 NonPagedPoolCommit;
  /* 0x00a8 */ volatile unsigned __int64 SmallNonPagedPtesCommit;
  /* 0x00b0 */ volatile unsigned __int64 BootCommit;
  /* 0x00b8 */ volatile unsigned __int64 MdlPagesAllocated;
  /* 0x00c0 */ volatile unsigned __int64 SystemPageTableCommit;
  /* 0x00c8 */ volatile unsigned __int64 ProcessCommit;
  /* 0x00d0 */ volatile long DriverCommit;
  /* 0x00d4 */ unsigned char PagingLevels;
  /* 0x00d8 */ volatile unsigned __int64 PfnDatabaseCommit;
  /* 0x0100 */ struct _MMSUPPORT_FULL SystemWs[6];
  /* 0x0880 */ struct _MMSUPPORT_SHARED SystemCacheShared;
  /* 0x0900 */ struct _MMSUPPORT_AGGREGATION AggregateSystemWs[1];
  /* 0x0920 */ unsigned long MapCacheFailures;
  /* 0x0928 */ unsigned __int64 PagefileHashPages;
  /* 0x0930 */ struct _SYSPTES_HEADER PteHeader;
  /* 0x0a48 */ unsigned __int64 SystemVaTypeCount[16];
  /* 0x0ac8 */ unsigned char SystemVaType[256];
  /* 0x0bc8 */ struct _MI_SYSTEM_VA_ASSIGNMENT SystemVaRegions[13];
  /* 0x0c98 */ long __PADDING__[10];
} MI_VISIBLE_STATE, *PMI_VISIBLE_STATE; /* size: 0x0cc0 */

typedef struct _MI_SYSTEM_INFORMATION
{
  /* 0x0000 */ struct _MI_POOL_STATE Pools;
  /* 0x00c0 */ struct _MI_SECTION_STATE Sections;
  /* 0x0400 */ struct _MI_SYSTEM_IMAGE_STATE SystemImages;
  /* 0x04a8 */ struct _MI_SESSION_STATE Sessions;
  /* 0x1550 */ struct _MI_PROCESS_STATE Processes;
  /* 0x15c0 */ struct _MI_HARDWARE_STATE Hardware;
  /* 0x1780 */ struct _MI_SYSTEM_VA_STATE SystemVa;
  /* 0x1c40 */ struct _MI_COMBINE_STATE PageCombines;
  /* 0x1c60 */ struct _MI_PAGELIST_STATE PageLists;
  /* 0x1cc0 */ struct _MI_PARTITION_STATE Partitions;
  /* 0x1d80 */ struct _MI_SHUTDOWN_STATE Shutdowns;
  /* 0x1df8 */ struct _MI_ERROR_STATE Errors;
  /* 0x1ec0 */ struct _MI_ACCESS_LOG_STATE AccessLog;
  /* 0x1f40 */ struct _MI_DEBUGGER_STATE Debugger;
  /* 0x2060 */ struct _MI_STANDBY_STATE Standby;
  /* 0x2100 */ struct _MI_SYSTEM_PTE_STATE SystemPtes;
  /* 0x2300 */ struct _MI_IO_PAGE_STATE IoPages;
  /* 0x2370 */ struct _MI_PAGING_IO_STATE PagingIo;
  /* 0x2420 */ struct _MI_COMMON_PAGE_STATE CommonPages;
  /* 0x2500 */ struct _MI_SYSTEM_TRIM_STATE Trims;
  /* 0x2540 */ struct _MI_ENCLAVE_STATE Enclaves;
  /* 0x2588 */ unsigned __int64 Cookie;
  /* 0x2590 */ void* volatile* BootRegistryRuns;
  /* 0x2598 */ volatile long ZeroingDisabled;
  /* 0x259c */ unsigned char FullyInitialized;
  /* 0x259d */ unsigned char SafeBooted;
  /* 0x25a0 */ const struct _tlgProvider_t* TraceLogging;
  /* 0x25c0 */ struct _MI_VISIBLE_STATE Vs;
} MI_SYSTEM_INFORMATION, *PMI_SYSTEM_INFORMATION; /* size: 0x3280 */

