typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

typedef struct _MI_POOL_FAILURE_REASONS
{
  /* 0x0000 */ unsigned long NonPagedNoPtes;
  /* 0x0004 */ unsigned long PriorityTooLow;
  /* 0x0008 */ unsigned long NonPagedNoPagesAvailable;
  /* 0x000c */ unsigned long PagedNoPtes;
  /* 0x0010 */ unsigned long SessionPagedNoPtes;
  /* 0x0014 */ unsigned long PagedNoPagesAvailable;
  /* 0x0018 */ unsigned long SessionPagedNoPagesAvailable;
  /* 0x001c */ unsigned long PagedNoCommit;
  /* 0x0020 */ unsigned long SessionPagedNoCommit;
  /* 0x0024 */ unsigned long NonPagedNoResidentAvailable;
  /* 0x0028 */ unsigned long NonPagedNoCommit;
} MI_POOL_FAILURE_REASONS, *PMI_POOL_FAILURE_REASONS; /* size: 0x002c */

typedef struct _MI_POOL_STATE
{
  /* 0x0000 */ unsigned __int64 MaximumNonPagedPoolThreshold;
  /* 0x0008 */ unsigned long NonPagedPoolSListMaximum[3];
  /* 0x0018 */ volatile unsigned __int64 AllocatedNonPagedPool;
  /* 0x0020 */ struct _SINGLE_LIST_ENTRY BadPoolHead;
  /* 0x0028 */ unsigned long HighEventSets;
  /* 0x002c */ unsigned char HighEventSetsValid;
  /* 0x0030 */ unsigned long PoolFailures[3][3];
  /* 0x0054 */ struct _MI_POOL_FAILURE_REASONS PoolFailureReasons;
  /* 0x0080 */ unsigned __int64 LowPagedPoolThreshold;
  /* 0x0088 */ unsigned __int64 HighPagedPoolThreshold;
  /* 0x0090 */ unsigned long PagedPoolSListMaximum;
  /* 0x0094 */ unsigned long PreemptiveTrims[4];
  /* 0x00a8 */ unsigned __int64 SpecialPagesInUsePeak;
  /* 0x00b0 */ unsigned long SpecialPoolRejected[9];
  /* 0x00d8 */ volatile unsigned __int64 SpecialPagesNonPaged;
  /* 0x00e0 */ volatile long SpecialPoolPdes;
  /* 0x00e4 */ unsigned long SessionSpecialPoolPdesMax;
  /* 0x00e8 */ unsigned __int64 TotalPagedPoolQuota;
  /* 0x00f0 */ unsigned __int64 TotalNonPagedPoolQuota;
} MI_POOL_STATE, *PMI_POOL_STATE; /* size: 0x00f8 */

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

typedef struct _RTL_AVL_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
} RTL_AVL_TREE, *PRTL_AVL_TREE; /* size: 0x0008 */

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
    /* 0x0002 */ unsigned short SubsectionMappedDirect : 1; /* bit position: 2 */
    /* 0x0002 */ unsigned short OnDereferenceList : 1; /* bit position: 3 */
    /* 0x0002 */ unsigned short SectorEndOffset : 12; /* bit position: 4 */
  }; /* bitfield */
} MMSUBSECTION_FLAGS, *PMMSUBSECTION_FLAGS; /* size: 0x0004 */

typedef struct _SUBSECTION
{
  /* 0x0000 */ struct _CONTROL_AREA* ControlArea;
  /* 0x0008 */ struct _MMPTE* SubsectionBase;
  /* 0x0010 */ struct _SUBSECTION* NextSubsection;
  union
  {
    /* 0x0018 */ struct _RTL_AVL_TREE GlobalPerSessionHead;
    /* 0x0018 */ struct _MI_SUBSECTION_WAIT_BLOCK* CreationWaitList;
    /* 0x0018 */ struct _MI_PER_SESSION_PROTOS* SessionDriverProtos;
  }; /* size: 0x0008 */
  union // _TAG_UNNAMED_88
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
  union // _TAG_UNNAMED_89
  {
    /* 0x0030 */ unsigned long NumberOfChildViews;
  } /* size: 0x0004 */ u1;
  union
  {
    struct /* bitfield */
    {
      /* 0x0034 */ unsigned long UnusedPtes : 31; /* bit position: 0 */
      /* 0x0034 */ unsigned long DirtyPages : 1; /* bit position: 31 */
    }; /* bitfield */
    struct // _TAG_UNNAMED_90
    {
      struct /* bitfield */
      {
        /* 0x0034 */ unsigned long AlignmentNoAccessPtes : 31; /* bit position: 0 */
        /* 0x0034 */ unsigned long DirtyPages : 1; /* bit position: 31 */
      }; /* bitfield */
    } /* size: 0x0004 */ u2;
  }; /* size: 0x0004 */
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

typedef struct _MSUBSECTION
{
  /* 0x0000 */ struct _SUBSECTION Core;
  /* 0x0038 */ struct _RTL_BALANCED_NODE SubsectionNode;
  /* 0x0050 */ struct _LIST_ENTRY DereferenceList;
  /* 0x0060 */ unsigned __int64 NumberOfMappedViews;
  /* 0x0068 */ unsigned long NumberOfPfnReferences;
  /* 0x006c */ long __PADDING__[1];
} MSUBSECTION, *PMSUBSECTION; /* size: 0x0070 */

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
    /* 0x0000 */ unsigned int CopyOnWrite : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned int Reserve : 1; /* bit position: 12 */
    /* 0x0000 */ unsigned int Commit : 1; /* bit position: 13 */
    /* 0x0000 */ unsigned int NoChange : 1; /* bit position: 14 */
    /* 0x0000 */ unsigned int WasPurged : 1; /* bit position: 15 */
    /* 0x0000 */ unsigned int UserReference : 1; /* bit position: 16 */
    /* 0x0000 */ unsigned int GlobalMemory : 1; /* bit position: 17 */
    /* 0x0000 */ unsigned int DeleteOnClose : 1; /* bit position: 18 */
    /* 0x0000 */ unsigned int FilePointerNull : 1; /* bit position: 19 */
    /* 0x0000 */ unsigned int PreferredNode : 6; /* bit position: 20 */
    /* 0x0000 */ unsigned int GlobalOnlyPerSession : 1; /* bit position: 26 */
    /* 0x0000 */ unsigned int UserWritable : 1; /* bit position: 27 */
    /* 0x0000 */ unsigned int SystemVaAllocated : 1; /* bit position: 28 */
    /* 0x0000 */ unsigned int PreferredFsCompressionBoundary : 1; /* bit position: 29 */
    /* 0x0000 */ unsigned int UsingFileExtents : 1; /* bit position: 30 */
    /* 0x0000 */ unsigned int Spare : 1; /* bit position: 31 */
  }; /* bitfield */
} MMSECTION_FLAGS, *PMMSECTION_FLAGS; /* size: 0x0004 */

typedef struct _MMSECTION_FLAGS2
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long PartitionId : 10; /* bit position: 0 */
    /* 0x0000 */ unsigned long NumberOfChildViews : 22; /* bit position: 10 */
  }; /* bitfield */
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
  /* 0x0008 */ struct _LIST_ENTRY ListHead;
  /* 0x0018 */ unsigned __int64 NumberOfSectionReferences;
  /* 0x0020 */ unsigned __int64 NumberOfPfnReferences;
  /* 0x0028 */ unsigned __int64 NumberOfMappedViews;
  /* 0x0030 */ unsigned __int64 NumberOfUserReferences;
  union // _TAG_UNNAMED_81
  {
    union
    {
      /* 0x0038 */ unsigned long LongFlags;
      /* 0x0038 */ struct _MMSECTION_FLAGS Flags;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u;
  union // _TAG_UNNAMED_82
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
  union // _TAG_UNNAMED_83
  {
    struct // _TAG_UNNAMED_84
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
          /* 0x005c */ unsigned long Unused : 9; /* bit position: 16 */
          /* 0x005c */ unsigned long SystemImage : 1; /* bit position: 25 */
          /* 0x005c */ unsigned long StrongCode : 2; /* bit position: 26 */
          /* 0x005c */ unsigned long CantMove : 1; /* bit position: 28 */
          /* 0x005c */ unsigned long BitMap : 2; /* bit position: 29 */
          /* 0x005c */ unsigned long ImageActive : 1; /* bit position: 31 */
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
  /* 0x0068 */ volatile unsigned __int64 LockedPages;
  /* 0x0070 */ struct _EX_PUSH_LOCK FileObjectLock;
} CONTROL_AREA, *PCONTROL_AREA; /* size: 0x0078 */

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0010 */ void* WorkerRoutine /* function */;
  /* 0x0018 */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0020 */

typedef struct _MI_CROSS_PARTITION_CHARGES
{
  /* 0x0000 */ unsigned __int64 CurrentCharges;
  /* 0x0008 */ unsigned __int64 ChargeFailures;
  /* 0x0010 */ unsigned __int64 ChargePeak;
  /* 0x0018 */ unsigned __int64 ChargeMinimum;
  /* 0x0020 */ unsigned __int64 ChargeMaximum;
} MI_CROSS_PARTITION_CHARGES, *PMI_CROSS_PARTITION_CHARGES; /* size: 0x0028 */

typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0008 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0010 */

typedef struct _MI_SECTION_STATE
{
  /* 0x0000 */ volatile long SectionObjectPointersLock;
  /* 0x0008 */ struct _EX_PUSH_LOCK SectionExtendLock;
  /* 0x0010 */ struct _EX_PUSH_LOCK SectionExtendSetLock;
  /* 0x0018 */ struct _RTL_AVL_TREE SectionBasedRoot;
  /* 0x0020 */ struct _EX_PUSH_LOCK SectionBasedLock;
  /* 0x0028 */ unsigned __int64 UnusedSubsectionPagedPool;
  /* 0x0030 */ unsigned long UnusedSegmentForceFree;
  /* 0x0034 */ unsigned long DataSectionProtectionMask;
  /* 0x0038 */ void* HighSectionBase;
  /* 0x0040 */ struct _MSUBSECTION PhysicalSubsection;
  /* 0x00b0 */ struct _CONTROL_AREA PhysicalControlArea;
  /* 0x0128 */ struct _MMPFN* DanglingExtentsPages;
  /* 0x0130 */ volatile long DanglingExtentsLock;
  /* 0x0138 */ struct _WORK_QUEUE_ITEM DanglingExtentsWorkItem;
  /* 0x0158 */ unsigned char DanglingExtentsWorkerActive;
  /* 0x0160 */ struct _RTL_AVL_TREE PageFileSectionHead;
  /* 0x0168 */ volatile long PageFileSectionListSpinLock;
  /* 0x0170 */ struct _MI_CROSS_PARTITION_CHARGES SharedSegmentCharges;
  /* 0x0198 */ struct _MI_CROSS_PARTITION_CHARGES SharedPageCombineCharges;
  /* 0x01c0 */ unsigned long ImageBias;
  /* 0x01c8 */ struct _EX_PUSH_LOCK RelocateBitmapsLock;
  /* 0x01d0 */ struct _RTL_BITMAP ImageBitMap;
  /* 0x01e0 */ unsigned long ImageBias64Low;
  /* 0x01e4 */ unsigned long ImageBias64High;
  /* 0x01e8 */ struct _RTL_BITMAP ImageBitMap64Low;
  /* 0x01f8 */ struct _RTL_BITMAP ImageBitMap64High;
  /* 0x0208 */ struct _RTL_BITMAP ImageBitMapWow64Dll;
  /* 0x0218 */ void* ApiSetSection;
  /* 0x0220 */ void* ApiSetSchema;
  /* 0x0228 */ unsigned __int64 ApiSetSchemaSize;
  /* 0x0230 */ unsigned long LostDataFiles;
  /* 0x0234 */ unsigned long LostDataPages;
  /* 0x0238 */ unsigned long ImageFailureReason;
  /* 0x0240 */ struct _SECTION* CfgBitMapSection32;
  /* 0x0248 */ struct _CONTROL_AREA* CfgBitMapControlArea32;
  /* 0x0250 */ struct _SECTION* CfgBitMapSection64;
  /* 0x0258 */ struct _CONTROL_AREA* CfgBitMapControlArea64;
  /* 0x0260 */ unsigned long ImageCfgFailure;
  /* 0x0264 */ volatile long ImageValidationFailed;
  /* 0x0268 */ long __PADDING__[6];
} MI_SECTION_STATE, *PMI_SECTION_STATE; /* size: 0x0280 */

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
          /* 0x0002 */ unsigned char Timer2Reserved1;
          /* 0x0003 */ unsigned char Timer2Reserved2;
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
            /* 0x0002 */ unsigned char ThreadReservedControlFlags : 2; /* bit position: 6 */
          }; /* bitfield */
          union
          {
            /* 0x0003 */ unsigned char DebugActive;
            struct /* bitfield */
            {
              /* 0x0003 */ unsigned char ActiveDR7 : 1; /* bit position: 0 */
              /* 0x0003 */ unsigned char Instrumented : 1; /* bit position: 1 */
              /* 0x0003 */ unsigned char Minimal : 1; /* bit position: 2 */
              /* 0x0003 */ unsigned char Reserved4 : 3; /* bit position: 3 */
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

typedef struct _KMUTANT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0018 */ struct _LIST_ENTRY MutantListEntry;
  /* 0x0028 */ struct _KTHREAD* OwnerThread;
  /* 0x0030 */ unsigned char Abandoned;
  /* 0x0031 */ unsigned char ApcDisable;
  /* 0x0032 */ char __PADDING__[6];
} KMUTANT, *PKMUTANT; /* size: 0x0038 */

typedef struct _MM_SYSTEM_PAGE_COUNTS
{
  /* 0x0000 */ unsigned long SystemCodePage;
  /* 0x0004 */ unsigned long SystemDriverPage;
  /* 0x0008 */ long TotalSystemCodePages;
  /* 0x000c */ long TotalSystemDriverPages;
} MM_SYSTEM_PAGE_COUNTS, *PMM_SYSTEM_PAGE_COUNTS; /* size: 0x0010 */

typedef struct _MI_SYSTEM_IMAGE_STATE
{
  /* 0x0000 */ volatile long FixupLock;
  /* 0x0008 */ struct _LIST_ENTRY FixupList;
  /* 0x0018 */ struct _KMUTANT LoadLock;
  /* 0x0050 */ unsigned char FirstLoadEver;
  /* 0x0051 */ unsigned char LargePageAll;
  /* 0x0058 */ unsigned __int64 LastPage;
  /* 0x0060 */ struct _LIST_ENTRY LargePageList;
  /* 0x0070 */ struct _KLDR_DATA_TABLE_ENTRY* BeingDeleted;
  /* 0x0078 */ struct _EX_PUSH_LOCK MappingRangesPushLock;
  /* 0x0080 */ struct _MI_DRIVER_VA* MappingRanges[2];
  /* 0x0090 */ unsigned __int64 PageCount;
  /* 0x0098 */ struct _MM_SYSTEM_PAGE_COUNTS PageCounts;
  /* 0x00a8 */ struct _EX_PUSH_LOCK CollidedLock;
  /* 0x00b0 */ struct _MMPTE* ErrataPte;
  /* 0x00b8 */ unsigned long ErrataPteMapped;
  /* 0x00bc */ long __PADDING__[1];
} MI_SYSTEM_IMAGE_STATE, *PMI_SYSTEM_IMAGE_STATE; /* size: 0x00c0 */

typedef struct _MMSESSION
{
  /* 0x0000 */ struct _EX_PUSH_LOCK SystemSpaceViewLock;
  /* 0x0008 */ struct _EX_PUSH_LOCK* SystemSpaceViewLockPointer;
  /* 0x0010 */ struct _RTL_AVL_TREE ViewRoot;
  /* 0x0018 */ unsigned long ViewCount;
  /* 0x001c */ unsigned long BitmapFailures;
} MMSESSION, *PMMSESSION; /* size: 0x0020 */

typedef struct _MI_SESSION_STATE
{
  /* 0x0000 */ struct _MMSESSION SystemSession;
  /* 0x0020 */ unsigned char CodePageEdited;
  /* 0x0028 */ unsigned long* DynamicVaBitBuffer;
  /* 0x0030 */ unsigned __int64 DynamicVaBitBufferPages;
  /* 0x0038 */ unsigned long* DynamicPoolBitBuffer;
  /* 0x0040 */ void* DynamicVaStart;
  /* 0x0048 */ unsigned long* DynamicPtesBitBuffer;
  /* 0x0050 */ struct _EX_PUSH_LOCK IdLock;
  /* 0x0058 */ unsigned long DetachTimeStamp;
  /* 0x0060 */ struct _EPROCESS* LeaderProcess;
  /* 0x0068 */ struct _EX_PUSH_LOCK InitializeLock;
  /* 0x0070 */ struct _MMWSL* WorkingSetList;
  /* 0x0078 */ struct _MMWSLE_HASH* WsHashStart;
  /* 0x0080 */ struct _MMWSLE_HASH* WsHashEnd;
} MI_SESSION_STATE, *PMI_SESSION_STATE; /* size: 0x0088 */

typedef struct _KEVENT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT; /* size: 0x0018 */

typedef union _SLIST_HEADER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned __int64 Alignment;
      /* 0x0008 */ unsigned __int64 Region;
    }; /* size: 0x0010 */
    struct // _TAG_UNNAMED_6
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

typedef struct _MI_PROCESS_STATE
{
  /* 0x0000 */ unsigned long ColorSeed;
  /* 0x0008 */ struct _KEVENT CloneDereferenceEvent;
  /* 0x0020 */ union _SLIST_HEADER CloneProtosSListHead;
  /* 0x0030 */ void* SystemDllBase;
  /* 0x0038 */ long RotatingUniprocessorNumber;
  /* 0x0040 */ union _LARGE_INTEGER CriticalSectionTimeout;
  /* 0x0048 */ struct _LIST_ENTRY ProcessList;
  /* 0x0058 */ struct _MMPTE* SharedUserDataPte;
} MI_PROCESS_STATE, *PMI_PROCESS_STATE; /* size: 0x0060 */

typedef struct _MI_ZERO_COST_COUNTS
{
  /* 0x0000 */ unsigned __int64 NativeSum;
  /* 0x0008 */ unsigned __int64 CachedSum;
} MI_ZERO_COST_COUNTS, *PMI_ZERO_COST_COUNTS; /* size: 0x0010 */

typedef struct _MI_HARDWARE_STATE
{
  /* 0x0000 */ unsigned long NodeMask;
  /* 0x0008 */ unsigned short* NodeGraph;
  /* 0x0010 */ struct _MI_SYSTEM_NODE_INFORMATION* SystemNodeInformation;
  /* 0x0018 */ unsigned long NumaLastRangeIndex;
  /* 0x0020 */ struct _HAL_NODE_RANGE* NumaMemoryRanges;
  /* 0x0028 */ unsigned char NumaTableCaptured;
  /* 0x0029 */ unsigned char NodeShift;
  /* 0x0030 */ struct _HAL_CHANNEL_MEMORY_RANGES* ChannelMemoryRanges;
  /* 0x0038 */ unsigned char ChannelShift;
  /* 0x003c */ unsigned long SecondLevelCacheSize;
  /* 0x0040 */ unsigned long FirstLevelCacheSize;
  /* 0x0044 */ unsigned long PhysicalAddressBits;
  /* 0x0048 */ unsigned char AllMainMemoryMustBeCached;
  /* 0x0050 */ unsigned __int64 TotalPagesAllowed;
  /* 0x0058 */ unsigned long SecondaryColorMask;
  /* 0x005c */ unsigned long SecondaryColors;
  /* 0x0060 */ unsigned long FlushTbForAttributeChange;
  /* 0x0064 */ unsigned long FlushCacheForAttributeChange;
  /* 0x0068 */ unsigned long FlushCacheForPageAttributeChange;
  /* 0x006c */ unsigned long CacheFlushPromoteThreshold;
  /* 0x0070 */ unsigned __int64 FlushTbThreshold;
  /* 0x0078 */ struct _MI_ZERO_COST_COUNTS ZeroCostCounts[2];
  /* 0x0098 */ unsigned __int64 PrimaryPfns;
  /* 0x00a0 */ unsigned __int64 HighestPossiblePhysicalPage;
} MI_HARDWARE_STATE, *PMI_HARDWARE_STATE; /* size: 0x00a8 */

typedef struct _RTL_BITMAP_EX
{
  /* 0x0000 */ unsigned __int64 SizeOfBitMap;
  /* 0x0008 */ unsigned __int64* Buffer;
} RTL_BITMAP_EX, *PRTL_BITMAP_EX; /* size: 0x0010 */

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
  /* 0x0048 */ struct _MMSUPPORT* Vm;
} MI_DYNAMIC_BITMAP, *PMI_DYNAMIC_BITMAP; /* size: 0x0050 */

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
    /* 0x0000 */ unsigned __int64 reserved1 : 4; /* bit position: 48 */
    /* 0x0000 */ unsigned __int64 SoftwareWsIndex : 11; /* bit position: 52 */
    /* 0x0000 */ unsigned __int64 NoExecute : 1; /* bit position: 63 */
  }; /* bitfield */
} MMPTE_HARDWARE, *PMMPTE_HARDWARE; /* size: 0x0008 */

typedef struct _HARDWARE_PTE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Write : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 Owner : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned __int64 WriteThrough : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned __int64 CacheDisable : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned __int64 Accessed : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 Dirty : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned __int64 LargePage : 1; /* bit position: 7 */
    /* 0x0000 */ unsigned __int64 Global : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned __int64 CopyOnWrite : 1; /* bit position: 9 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 reserved0 : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 PageFrameNumber : 36; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 reserved1 : 4; /* bit position: 48 */
    /* 0x0000 */ unsigned __int64 SoftwareWsIndex : 11; /* bit position: 52 */
    /* 0x0000 */ unsigned __int64 NoExecute : 1; /* bit position: 63 */
  }; /* bitfield */
} HARDWARE_PTE, *PHARDWARE_PTE; /* size: 0x0008 */

typedef struct _MMPTE_PROTOTYPE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 DemandFillProto : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 HiberVerifyConverted : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned __int64 Unused1 : 5; /* bit position: 3 */
    /* 0x0000 */ unsigned __int64 ReadOnly : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned __int64 Combined : 1; /* bit position: 9 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 11 */
    /* 0x0000 */ __int64 ProtoAddress : 48; /* bit position: 16 */
  }; /* bitfield */
} MMPTE_PROTOTYPE, *PMMPTE_PROTOTYPE; /* size: 0x0008 */

typedef struct _MMPTE_SOFTWARE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 PageFileLow : 4; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Transition : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 PageFileReserved : 1; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 PageFileAllocated : 1; /* bit position: 13 */
    /* 0x0000 */ unsigned __int64 UsedPageTableEntries : 10; /* bit position: 14 */
    /* 0x0000 */ unsigned __int64 LocalPartition : 1; /* bit position: 24 */
    /* 0x0000 */ unsigned __int64 Unused : 7; /* bit position: 25 */
    /* 0x0000 */ unsigned __int64 PageFileHigh : 32; /* bit position: 32 */
  }; /* bitfield */
} MMPTE_SOFTWARE, *PMMPTE_SOFTWARE; /* size: 0x0008 */

typedef struct _MMPTE_TIMESTAMP
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 MustBeZero : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 PageFileLow : 4; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 5 */
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
    /* 0x0000 */ unsigned __int64 Write : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 Spare : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned __int64 WriteThrough : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned __int64 CacheDisable : 1; /* bit position: 4 */
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
    /* 0x0000 */ unsigned __int64 Unused0 : 4; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Unused1 : 4; /* bit position: 11 */
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
    /* 0x0000 */ unsigned __int64 filler0 : 3; /* bit position: 2 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Transition : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 filler1 : 16; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 NextEntry : 36; /* bit position: 28 */
  }; /* bitfield */
} MMPTE_LIST, *PMMPTE_LIST; /* size: 0x0008 */

typedef struct _MMPTE
{
  union // _TAG_UNNAMED_12
  {
    union
    {
      /* 0x0000 */ unsigned __int64 Long;
      /* 0x0000 */ volatile unsigned __int64 VolatileLong;
      /* 0x0000 */ struct _MMPTE_HARDWARE Hard;
      /* 0x0000 */ struct _HARDWARE_PTE Flush;
      /* 0x0000 */ struct _MMPTE_PROTOTYPE Proto;
      /* 0x0000 */ struct _MMPTE_SOFTWARE Soft;
      /* 0x0000 */ struct _MMPTE_TIMESTAMP TimeStamp;
      /* 0x0000 */ struct _MMPTE_TRANSITION Trans;
      /* 0x0000 */ struct _MMPTE_SUBSECTION Subsect;
      /* 0x0000 */ struct _MMPTE_LIST List;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u;
} MMPTE, *PMMPTE; /* size: 0x0008 */

typedef struct _MI_PTE_CHAIN_HEAD
{
  /* 0x0000 */ struct _MMPTE Flink;
  /* 0x0008 */ struct _MMPTE Blink;
  /* 0x0010 */ struct _MMPTE* PteBase;
} MI_PTE_CHAIN_HEAD, *PMI_PTE_CHAIN_HEAD; /* size: 0x0018 */

typedef struct _MI_SYSTEM_VA_STATE
{
  /* 0x0000 */ unsigned __int64 SystemTablesLock;
  /* 0x0008 */ unsigned __int64 AvailableSystemCacheVa;
  /* 0x0010 */ struct _MI_DYNAMIC_BITMAP DynamicBitMapSystemPtes;
  /* 0x0060 */ struct _MI_DYNAMIC_BITMAP DynamicBitMapDriverImages[2];
  /* 0x0100 */ struct _MI_DYNAMIC_BITMAP DynamicBitMapPagedPool;
  /* 0x0150 */ struct _MI_DYNAMIC_BITMAP DynamicBitMapSpecialPool;
  /* 0x01a0 */ struct _MI_DYNAMIC_BITMAP DynamicBitMapSystemCache;
  /* 0x01f0 */ struct _MMWSLE_HASH* WorkingSetListHashStart;
  /* 0x01f8 */ struct _MMWSLE_HASH* WorkingSetListHashEnd;
  /* 0x0200 */ struct _MMWSLE_NONDIRECT_HASH* WorkingSetListIndirectHashStart;
  /* 0x0208 */ struct _KEVENT FreeSystemCacheVa;
  /* 0x0220 */ unsigned __int64 SystemVaLock;
  /* 0x0228 */ volatile long DeleteKvaLock;
  /* 0x0230 */ struct _MI_PTE_CHAIN_HEAD FreeSystemCache;
  /* 0x0248 */ unsigned __int64 SystemCacheViewLock;
  /* 0x0250 */ unsigned __int64 UnusableWsles[5];
  /* 0x0278 */ unsigned __int64 PossibleWsles[5];
  /* 0x02a0 */ long __PADDING__[8];
} MI_SYSTEM_VA_STATE, *PMI_SYSTEM_VA_STATE; /* size: 0x02c0 */

typedef struct _MI_COMBINE_WORKITEM
{
  /* 0x0000 */ void* NextEntry;
  /* 0x0008 */ struct _WORK_QUEUE_ITEM WorkItem;
} MI_COMBINE_WORKITEM, *PMI_COMBINE_WORKITEM; /* size: 0x0028 */

typedef struct _MI_COMBINE_PAGE_LISTHEAD
{
  /* 0x0000 */ struct _RTL_AVL_TREE Table;
  /* 0x0008 */ volatile long Lock;
  /* 0x000c */ long __PADDING__[1];
} MI_COMBINE_PAGE_LISTHEAD, *PMI_COMBINE_PAGE_LISTHEAD; /* size: 0x0010 */

typedef struct _MI_PAGE_COMBINE_STATISTICS
{
  /* 0x0000 */ unsigned __int64 PagesScannedActive;
  /* 0x0008 */ unsigned __int64 PagesScannedStandby;
  /* 0x0010 */ unsigned __int64 PagesCombined;
  /* 0x0018 */ unsigned long CombineScanCount;
  /* 0x001c */ long CombinedBlocksInUse;
  /* 0x0020 */ long SumCombinedBlocksReferenceCount;
  /* 0x0024 */ long __PADDING__[1];
} MI_PAGE_COMBINE_STATISTICS, *PMI_PAGE_COMBINE_STATISTICS; /* size: 0x0028 */

typedef struct _MI_PAGE_COMBINING_SUPPORT
{
  /* 0x0000 */ struct _MI_PARTITION* Partition;
  /* 0x0008 */ struct _LIST_ENTRY ArbitraryPfnMapList;
  /* 0x0018 */ struct _MI_COMBINE_WORKITEM FreeCombinePoolItem;
  /* 0x0040 */ unsigned long CombiningThreadCount;
  /* 0x0048 */ struct _LIST_ENTRY CombinePageFreeList;
  /* 0x0058 */ unsigned __int64 CombineFreeListLock;
  /* 0x0060 */ struct _MI_COMBINE_PAGE_LISTHEAD CombinePageListHeads[16];
  /* 0x0160 */ struct _MI_PAGE_COMBINE_STATISTICS PageCombineStats;
} MI_PAGE_COMBINING_SUPPORT, *PMI_PAGE_COMBINING_SUPPORT; /* size: 0x0188 */

typedef struct _MI_COMBINE_STATE
{
  /* 0x0000 */ volatile long ActiveSpinLock;
  /* 0x0004 */ unsigned long CombiningThreadCount;
  /* 0x0008 */ struct _RTL_AVL_TREE ActiveThreadTree;
  /* 0x0010 */ unsigned __int64 ZeroPageHashValue;
  /* 0x0018 */ struct _MI_PAGE_COMBINING_SUPPORT CrossPartition;
} MI_COMBINE_STATE, *PMI_COMBINE_STATE; /* size: 0x01a0 */

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
  /* 0x005c */ long __PADDING__[1];
} MI_PARTITION_STATE, *PMI_PARTITION_STATE; /* size: 0x0060 */

typedef struct _MI_RESUME_WORKITEM
{
  /* 0x0000 */ struct _KEVENT ResumeCompleteEvent;
  /* 0x0018 */ struct _WORK_QUEUE_ITEM WorkItem;
} MI_RESUME_WORKITEM, *PMI_RESUME_WORKITEM; /* size: 0x0038 */

typedef struct _MI_SHUTDOWN_STATE
{
  /* 0x0000 */ unsigned char CrashDumpInitialized;
  /* 0x0001 */ unsigned char ConnectedStandbyActive;
  /* 0x0004 */ unsigned long SystemShutdown;
  /* 0x0008 */ long ShutdownFlushInProgress;
  /* 0x0010 */ struct _MI_RESUME_WORKITEM ResumeItem;
  /* 0x0048 */ struct _ETHREAD* MirrorHoldsPfn;
  /* 0x0050 */ unsigned long MirroringActive;
  /* 0x0058 */ struct _RTL_BITMAP_EX MirrorBitMaps[2];
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
  /* 0x0020 */ unsigned long NoPhysicalMapping;
  /* 0x0024 */ unsigned long NoIoReference;
  /* 0x0028 */ unsigned long ProbeFailed;
  /* 0x002c */ unsigned long PteIsZero;
  /* 0x0030 */ unsigned long StrongCodeWrite;
  /* 0x0034 */ unsigned long ReducedCloneCommitChargeFailed;
  /* 0x0038 */ unsigned long CopyOnWriteAtDispatchNoPages;
  /* 0x003c */ unsigned long EnclavePageFailed;
} MI_PROBE_RAISE_TRACKER, *PMI_PROBE_RAISE_TRACKER; /* size: 0x0040 */

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
  /* 0x0038 */ struct _MI_PROBE_RAISE_TRACKER ProbeRaises;
  /* 0x0078 */ struct _MI_FORCED_COMMITS ForcedCommits;
  /* 0x0080 */ unsigned long WsleFailures[2];
  /* 0x0088 */ unsigned long WsLinear;
  /* 0x008c */ unsigned long PageHashErrors;
  /* 0x0090 */ unsigned long CheckZeroCount;
  /* 0x0094 */ volatile long ZeroedPageSingleBitErrorsDetected;
  /* 0x0098 */ volatile long BadPagesDetected;
  /* 0x009c */ long ScrubPasses;
  /* 0x00a0 */ long ScrubBadPagesFound;
  /* 0x00a4 */ unsigned long UserViewFailures;
  /* 0x00a8 */ unsigned long UserViewCollisionFailures;
  /* 0x00ac */ struct _MI_RESAVAIL_FAILURES ResavailFailures;
  /* 0x00b4 */ unsigned char PendingBadPages;
  /* 0x00b5 */ unsigned char InitFailure;
  /* 0x00b6 */ unsigned char StopBadMaps;
  /* 0x00b7 */ char __PADDING__[1];
} MI_ERROR_STATE, *PMI_ERROR_STATE; /* size: 0x00b8 */

typedef struct _MI_ACCESS_LOG_STATE
{
  /* 0x0000 */ struct _MM_PAGE_ACCESS_INFO_HEADER* volatile CcAccessLog;
  /* 0x0008 */ unsigned long Enabled;
  /* 0x0010 */ struct _WORK_QUEUE_ITEM DisableAccessLogging;
  /* 0x0030 */ unsigned long MinLoggingPriority;
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
  /* 0x0000 */ volatile unsigned __int64 TransitionSharedPages;
  /* 0x0008 */ unsigned __int64 TransitionSharedPagesPeak[3];
  /* 0x0020 */ unsigned __int64 FirstDecayPage;
  /* 0x0030 */ union _SLIST_HEADER PfnDecayFreeSList;
  /* 0x0040 */ struct _MM_PAGE_ACCESS_INFO_HEADER* PfnRepurposeLog;
  /* 0x0048 */ struct _KDPC AllocatePfnRepurposeDpc;
  /* 0x0088 */ long __PADDING__[14];
} MI_STANDBY_STATE, *PMI_STANDBY_STATE; /* size: 0x00c0 */

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
  MiVaSpecialPoolNonPaged = 13,
  MiVaMaximumType = 14,
  MiVaSystemPtesLarge = 15,
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
  /* 0x0038 */ struct _MMSUPPORT* Vm;
  /* 0x0040 */ volatile unsigned __int64 TotalSystemPtes;
  /* 0x0048 */ unsigned __int64 Hint;
  /* 0x0050 */ volatile struct _MI_CACHED_PTES* CachedPtes;
  /* 0x0058 */ volatile unsigned __int64 TotalFreeSystemPtes;
} MI_SYSTEM_PTE_TYPE, *PMI_SYSTEM_PTE_TYPE; /* size: 0x0060 */

typedef struct _MI_QUEUED_DEADSTACK_WORKITEM
{
  /* 0x0000 */ struct _WORK_QUEUE_ITEM WorkItem;
  /* 0x0020 */ volatile long Active;
  /* 0x0024 */ long __PADDING__[1];
} MI_QUEUED_DEADSTACK_WORKITEM, *PMI_QUEUED_DEADSTACK_WORKITEM; /* size: 0x0028 */

typedef struct _MI_SYSTEM_PTE_STATE
{
  /* 0x0000 */ union _SLIST_HEADER DeadPteTrackerSListHead;
  /* 0x0010 */ unsigned __int64 PteTrackerLock;
  /* 0x0040 */ struct _NPAGED_LOOKASIDE_LIST MdlTrackerLookaside;
  /* 0x00c0 */ struct _RTL_BITMAP_EX PteTrackingBitmap;
  /* 0x00d0 */ volatile struct _MI_CACHED_PTES* CachedPteHeads;
  /* 0x00d8 */ struct _MI_SYSTEM_PTE_TYPE SystemViewPteInfo;
  /* 0x0138 */ unsigned char KernelStackPages;
  /* 0x0140 */ union _SLIST_HEADER QueuedStacks;
  /* 0x0150 */ unsigned long StackGrowthFailures;
  /* 0x0154 */ unsigned char TrackPtesAborted;
  /* 0x0155 */ unsigned char AdjustCounter;
  /* 0x0158 */ struct _MI_QUEUED_DEADSTACK_WORKITEM QueuedStacksWorkItem;
} MI_SYSTEM_PTE_STATE, *PMI_SYSTEM_PTE_STATE; /* size: 0x0180 */

typedef struct _MI_IO_CACHE_STATS
{
  /* 0x0000 */ unsigned __int64 UnusedBlocks;
  /* 0x0008 */ unsigned long ActiveCacheMatch;
  /* 0x000c */ unsigned long ActiveCacheOverride;
  /* 0x0010 */ unsigned long UnmappedCacheFlush;
  /* 0x0014 */ unsigned long UnmappedCacheMatch;
  /* 0x0018 */ unsigned long UnmappedCacheConflict;
  /* 0x001c */ long __PADDING__[1];
} MI_IO_CACHE_STATS, *PMI_IO_CACHE_STATS; /* size: 0x0020 */

typedef struct _MI_IO_PAGE_STATE
{
  /* 0x0000 */ unsigned __int64 IoPfnLock;
  /* 0x0008 */ struct _RTL_AVL_TREE IoPfnRoot[3];
  /* 0x0020 */ struct _LIST_ENTRY UnusedCachedMaps;
  /* 0x0030 */ unsigned long OldestCacheFlushTimeStamp;
  /* 0x0038 */ struct _MI_IO_CACHE_STATS IoCacheStats;
} MI_IO_PAGE_STATE, *PMI_IO_PAGE_STATE; /* size: 0x0058 */

typedef struct _MI_PAGING_IO_STATE
{
  /* 0x0000 */ struct _RTL_AVL_TREE PageFileHead;
  /* 0x0008 */ volatile long PageFileHeadSpinLock;
  /* 0x000c */ long PrefetchSeekThreshold;
  /* 0x0010 */ union _SLIST_HEADER InPageSupportSListHead[2];
  /* 0x0030 */ unsigned char InPageSupportSListMinimum[2];
  /* 0x0034 */ unsigned long InPageSinglePages;
  /* 0x0038 */ volatile long DelayPageFaults;
  /* 0x003c */ unsigned long FileCompressionBoundary;
  /* 0x0040 */ unsigned char MdlsAdjusted;
  /* 0x0041 */ char __PADDING__[15];
} MI_PAGING_IO_STATE, *PMI_PAGING_IO_STATE; /* size: 0x0050 */

typedef struct _MI_COMMON_PAGE_STATE
{
  /* 0x0000 */ struct _MMPFN* PageOfOnesPfn;
  /* 0x0008 */ unsigned __int64 PageOfOnes;
  /* 0x0010 */ struct _MMPFN* DummyPagePfn;
  /* 0x0018 */ unsigned __int64 DummyPage;
  /* 0x0020 */ unsigned __int64 PageOfZeroes;
  /* 0x0028 */ void* ZeroMapping;
  /* 0x0030 */ void* OnesMapping;
  /* 0x0038 */ unsigned __int64 BitmapGapFrames[4];
  /* 0x0058 */ unsigned __int64 PfnGapFrames[4];
  /* 0x0078 */ unsigned __int64 PageTableOfZeroes;
  /* 0x0080 */ struct _MMPTE PdeOfZeroes;
  /* 0x0088 */ unsigned __int64 PageTableOfOnes;
  /* 0x0090 */ struct _MMPTE PdeOfOnes;
} MI_COMMON_PAGE_STATE, *PMI_COMMON_PAGE_STATE; /* size: 0x0098 */

typedef struct _MI_SYSTEM_TRIM_STATE
{
  /* 0x0000 */ unsigned __int64 ExpansionLock;
  /* 0x0008 */ volatile long TrimInProgressCount;
  /* 0x0010 */ struct _KEVENT PeriodicWorkingSetEvent;
  /* 0x0028 */ unsigned long TrimAllPageFaultCount[3];
  /* 0x0034 */ long __PADDING__[3];
} MI_SYSTEM_TRIM_STATE, *PMI_SYSTEM_TRIM_STATE; /* size: 0x0040 */

typedef struct _MI_RESAVAIL_TRACKER
{
  /* 0x0000 */ unsigned __int64 AllocateKernelStack;
  /* 0x0008 */ unsigned __int64 AllocateGrowKernelStack;
  /* 0x0010 */ unsigned __int64 FreeKernelStack;
  /* 0x0018 */ unsigned __int64 FreeKernelStackError;
  /* 0x0020 */ unsigned __int64 FreeGrowKernelStackError;
  /* 0x0028 */ unsigned __int64 AllocateCreateProcess;
  /* 0x0030 */ unsigned __int64 FreeCreateProcessError;
  /* 0x0038 */ unsigned __int64 FreeDeleteProcess;
  /* 0x0040 */ unsigned __int64 FreeCleanProcess;
  /* 0x0048 */ unsigned __int64 FreeCleanProcessError;
  /* 0x0050 */ unsigned __int64 AllocateAddProcessWsMetaPage;
  /* 0x0058 */ unsigned __int64 AllocateWsIncrease;
  /* 0x0060 */ unsigned __int64 FreeWsIncreaseError;
  /* 0x0068 */ unsigned __int64 FreeWsIncreaseErrorMax;
  /* 0x0070 */ unsigned __int64 FreeWsDecrease;
  /* 0x0078 */ unsigned __int64 AllocateWorkingSetPage;
  /* 0x0080 */ unsigned __int64 FreeWorkingSetPageError;
  /* 0x0088 */ unsigned __int64 FreeDeletePteRange;
  /* 0x0090 */ unsigned __int64 AllocatePageTablesForProcessMetadata;
  /* 0x0098 */ unsigned __int64 FreePageTablesForProcessMetadataError2;
  /* 0x00a0 */ unsigned __int64 AllocatePageTablesForSystem;
  /* 0x00a8 */ unsigned __int64 FreePageTablesExcess;
  /* 0x00b0 */ unsigned __int64 FreeSystemVaPageTables;
  /* 0x00b8 */ unsigned __int64 FreeSessionVaPageTables;
  /* 0x00c0 */ unsigned __int64 AllocateCreateSession;
  /* 0x00c8 */ unsigned __int64 FreeSessionWsDereference;
  /* 0x00d0 */ unsigned __int64 FreeSessionDereference;
  /* 0x00d8 */ unsigned __int64 AllocateLockedSessionImage;
  /* 0x00e0 */ unsigned __int64 FreeLockedSessionImage;
  /* 0x00e8 */ unsigned __int64 FreeSessionImageConversion;
  /* 0x00f0 */ unsigned __int64 AllocateWsAdjustPageTable;
  /* 0x00f8 */ unsigned __int64 FreeWsAdjustPageTable;
  /* 0x0100 */ unsigned __int64 FreeWsAdjustPageTableError;
  /* 0x0108 */ unsigned __int64 AllocateNoLowMemory;
  /* 0x0110 */ unsigned __int64 AllocatePagedPoolLockedDown;
  /* 0x0118 */ unsigned __int64 FreePagedPoolLockedDown;
  /* 0x0120 */ unsigned __int64 AllocateSystemBitmaps;
  /* 0x0128 */ unsigned __int64 FreeSystemBitmapsError;
  /* 0x0130 */ unsigned __int64 AllocateForMdl;
  /* 0x0138 */ unsigned __int64 FreeFromMdl;
  /* 0x0140 */ unsigned __int64 AllocateForMdlPartition;
  /* 0x0148 */ unsigned __int64 FreeFromMdlPartition;
  /* 0x0150 */ unsigned __int64 FreeMdlExcess;
  /* 0x0158 */ unsigned __int64 AllocateExpansionNonPagedPool;
  /* 0x0160 */ unsigned __int64 FreeExpansionNonPagedPool;
  /* 0x0168 */ unsigned __int64 AllocateVad;
  /* 0x0170 */ unsigned __int64 RemoveVad;
  /* 0x0178 */ unsigned __int64 FreeVad;
  /* 0x0180 */ unsigned __int64 AllocateContiguous;
  /* 0x0188 */ unsigned __int64 FreeContiguousPages;
  /* 0x0190 */ unsigned __int64 FreeContiguousError;
  /* 0x0198 */ unsigned __int64 FreeLargePageMemory;
  /* 0x01a0 */ unsigned __int64 AllocateSystemWsles;
  /* 0x01a8 */ unsigned __int64 FreeSystemWsles;
  /* 0x01b0 */ unsigned __int64 AllocateSystemInitWs;
  /* 0x01b8 */ unsigned __int64 AllocateSessionInitWs;
  /* 0x01c0 */ unsigned __int64 FreeSessionInitWsError;
  /* 0x01c8 */ unsigned __int64 AllocateSystemImage;
  /* 0x01d0 */ unsigned __int64 AllocateSystemImageLoad;
  /* 0x01d8 */ unsigned __int64 AllocateSessionSharedImage;
  /* 0x01e0 */ unsigned __int64 FreeSystemImageInitCode;
  /* 0x01e8 */ unsigned __int64 FreeSystemImageLargePageConversion;
  /* 0x01f0 */ unsigned __int64 FreeSystemImageError;
  /* 0x01f8 */ unsigned __int64 FreeSystemImageLoadExcess;
  /* 0x0200 */ unsigned __int64 FreeUnloadSystemImage;
  /* 0x0208 */ unsigned __int64 FreeReloadBootImageLarge;
  /* 0x0210 */ unsigned __int64 FreeIndependent;
  /* 0x0218 */ unsigned __int64 AllocateHotRemove;
  /* 0x0220 */ unsigned __int64 FreeHotAdd;
  /* 0x0228 */ unsigned __int64 AllocateBoot;
  /* 0x0230 */ unsigned __int64 FreeLoaderBlock;
  /* 0x0238 */ unsigned __int64 AllocateNonPagedSpecialPool;
  /* 0x0240 */ unsigned __int64 FreeNonPagedSpecialPoolError;
  /* 0x0248 */ unsigned __int64 FreeNonPagedSpecialPool;
  /* 0x0250 */ unsigned __int64 AllocateSharedSegmentPage;
  /* 0x0258 */ unsigned __int64 FreeSharedSegmentPage;
  /* 0x0260 */ unsigned __int64 AllocateZeroPage;
  /* 0x0268 */ unsigned __int64 FreeZeroPage;
  /* 0x0270 */ unsigned __int64 AllocateForPo;
  /* 0x0278 */ unsigned __int64 AllocateForPoForce;
  /* 0x0280 */ unsigned __int64 FreeForPo;
  /* 0x0288 */ unsigned __int64 AllocateThreadHardFaultBehavior;
  /* 0x0290 */ unsigned __int64 FreeThreadHardFaultBehavior;
  /* 0x0298 */ unsigned __int64 ObtainFaultCharges;
  /* 0x02a0 */ unsigned __int64 FreeFaultCharges;
  /* 0x02a8 */ unsigned __int64 AllocateStoreCharges;
  /* 0x02b0 */ unsigned __int64 FreeStoreCharges;
  /* 0x02c0 */ unsigned __int64 ObtainLockedPageCharge;
  /* 0x0300 */ unsigned __int64 FreeLockedPageCharge;
  /* 0x0308 */ unsigned __int64 AllocateStore;
  /* 0x0310 */ unsigned __int64 FreeStore;
  /* 0x0318 */ unsigned __int64 AllocateSystemImageProtos;
  /* 0x0320 */ unsigned __int64 FreeSystemImageProtos;
  /* 0x0328 */ unsigned __int64 AllocateModWriterCharge;
  /* 0x0330 */ unsigned __int64 FreeModWriterCharge;
  /* 0x0338 */ unsigned __int64 AllocateMappedWriterCharge;
  /* 0x0340 */ unsigned __int64 FreeMappedWriterCharge;
  /* 0x0348 */ unsigned __int64 AllocateRegistryCharges;
  /* 0x0350 */ unsigned __int64 FreeRegistryCharges;
  /* 0x0358 */ long __PADDING__[10];
} MI_RESAVAIL_TRACKER, *PMI_RESAVAIL_TRACKER; /* size: 0x0380 */

typedef struct _MI_SPECIAL_POOL
{
  /* 0x0000 */ unsigned __int64 Lock;
  /* 0x0008 */ struct _MI_PTE_CHAIN_HEAD Paged;
  /* 0x0020 */ struct _MI_PTE_CHAIN_HEAD NonPaged;
  /* 0x0038 */ volatile unsigned __int64 PagesInUse;
  /* 0x0040 */ struct _RTL_BITMAP SpecialPoolPdes;
} MI_SPECIAL_POOL, *PMI_SPECIAL_POOL; /* size: 0x0050 */

typedef struct _MM_PAGED_POOL_INFO
{
  /* 0x0000 */ struct _EX_PUSH_LOCK Lock;
  /* 0x0008 */ struct _RTL_BITMAP_EX PagedPoolAllocationMap;
  /* 0x0018 */ struct _MMPTE* FirstPteForPagedPool;
  /* 0x0020 */ unsigned __int64 MaximumSize;
  /* 0x0028 */ unsigned __int64 PagedPoolHint;
  /* 0x0030 */ unsigned __int64 AllocatedPagedPool;
} MM_PAGED_POOL_INFO, *PMM_PAGED_POOL_INFO; /* size: 0x0038 */

typedef struct _MMSUPPORT_FLAGS
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
  /* 0x0002 */ unsigned char MemoryPriority;
  struct /* bitfield */
  {
    /* 0x0003 */ unsigned char WsleDeleted : 1; /* bit position: 0 */
    /* 0x0003 */ unsigned char VmExiting : 1; /* bit position: 1 */
    /* 0x0003 */ unsigned char ExpansionFailed : 1; /* bit position: 2 */
    /* 0x0003 */ unsigned char SvmEnabled : 1; /* bit position: 3 */
    /* 0x0003 */ unsigned char ForceAge : 1; /* bit position: 4 */
    /* 0x0003 */ unsigned char NewMaximum : 1; /* bit position: 5 */
    /* 0x0003 */ unsigned char CommitReleaseState : 2; /* bit position: 6 */
  }; /* bitfield */
} MMSUPPORT_FLAGS, *PMMSUPPORT_FLAGS; /* size: 0x0004 */

typedef struct _MMSUPPORT
{
  /* 0x0000 */ volatile long WorkingSetLock;
  /* 0x0008 */ struct _KGATE* ExitOutswapGate;
  /* 0x0010 */ void* AccessLog;
  /* 0x0018 */ struct _LIST_ENTRY WorkingSetExpansionLinks;
  /* 0x0028 */ unsigned __int64 AgeDistribution[7];
  /* 0x0060 */ unsigned __int64 MinimumWorkingSetSize;
  /* 0x0068 */ unsigned __int64 WorkingSetLeafSize;
  /* 0x0070 */ unsigned __int64 WorkingSetLeafPrivateSize;
  /* 0x0078 */ unsigned __int64 WorkingSetSize;
  /* 0x0080 */ unsigned __int64 WorkingSetPrivateSize;
  /* 0x0088 */ unsigned __int64 MaximumWorkingSetSize;
  /* 0x0090 */ unsigned __int64 ChargedWslePages;
  /* 0x0098 */ unsigned __int64 ActualWslePages;
  /* 0x00a0 */ unsigned __int64 WorkingSetSizeOverhead;
  /* 0x00a8 */ unsigned __int64 PeakWorkingSetSize;
  /* 0x00b0 */ unsigned long HardFaultCount;
  /* 0x00b4 */ unsigned short PartitionId;
  /* 0x00b6 */ unsigned short Pad0;
  /* 0x00b8 */ struct _MMWSL* VmWorkingSetList;
  /* 0x00c0 */ unsigned short NextPageColor;
  /* 0x00c2 */ unsigned short LastTrimStamp;
  /* 0x00c4 */ unsigned long PageFaultCount;
  /* 0x00c8 */ unsigned __int64 TrimmedPageCount;
  /* 0x00d0 */ unsigned __int64 Reserved0;
  /* 0x00d8 */ struct _MMSUPPORT_FLAGS Flags;
  /* 0x00e0 */ unsigned __int64 ReleasedCommitDebt;
  /* 0x00e8 */ void* WsSwapSupport;
  /* 0x00f0 */ void* CommitReAcquireFailSupport;
} MMSUPPORT, *PMMSUPPORT; /* size: 0x00f8 */

typedef struct _SYSPTES_HEADER
{
  /* 0x0000 */ struct _LIST_ENTRY ListHead[16];
  /* 0x0100 */ unsigned __int64 Count;
  /* 0x0108 */ unsigned __int64 NumberOfEntries;
  /* 0x0110 */ unsigned __int64 NumberOfEntriesPeak;
} SYSPTES_HEADER, *PSYSPTES_HEADER; /* size: 0x0118 */

typedef struct _MI_VISIBLE_STATE
{
  /* 0x0000 */ struct _MI_SPECIAL_POOL SpecialPool;
  /* 0x0050 */ struct _LIST_ENTRY SessionWsList;
  /* 0x0060 */ struct _RTL_BITMAP* SessionIdBitmap;
  /* 0x0068 */ struct _MM_PAGED_POOL_INFO PagedPoolInfo;
  /* 0x00a0 */ unsigned __int64 MaximumNonPagedPoolInPages;
  /* 0x00a8 */ unsigned __int64 SizeOfPagedPoolInPages;
  /* 0x00b0 */ struct _MI_SYSTEM_PTE_TYPE SystemPteInfo;
  /* 0x0110 */ volatile unsigned __int64 NonPagedPoolCommit;
  /* 0x0118 */ volatile unsigned __int64 BootCommit;
  /* 0x0120 */ volatile unsigned __int64 MdlPagesAllocated;
  /* 0x0128 */ volatile unsigned __int64 SystemPageTableCommit;
  /* 0x0130 */ volatile unsigned __int64 SpecialPagesInUse;
  /* 0x0138 */ volatile unsigned __int64 WsOverheadPages;
  /* 0x0140 */ volatile unsigned __int64 VadBitmapPages;
  /* 0x0148 */ volatile unsigned __int64 ProcessCommit;
  /* 0x0150 */ volatile unsigned __int64 SharedCommit;
  /* 0x0158 */ volatile long DriverCommit;
  /* 0x0180 */ struct _MMSUPPORT SystemWs[3];
  /* 0x0468 */ unsigned long MapCacheFailures;
  /* 0x0470 */ unsigned __int64 PagefileHashPages;
  /* 0x0478 */ struct _SYSPTES_HEADER PteHeader;
  /* 0x0590 */ struct _MI_SPECIAL_POOL* SessionSpecialPool;
  /* 0x0598 */ unsigned __int64 SystemVaTypeCount[14];
  /* 0x0608 */ long __PADDING__[14];
} MI_VISIBLE_STATE, *PMI_VISIBLE_STATE; /* size: 0x0640 */

typedef struct _MI_SYSTEM_INFORMATION
{
  /* 0x0000 */ struct _MI_POOL_STATE Pools;
  /* 0x0100 */ struct _MI_SECTION_STATE Sections;
  /* 0x0380 */ struct _MI_SYSTEM_IMAGE_STATE SystemImages;
  /* 0x0440 */ struct _MI_SESSION_STATE Sessions;
  /* 0x04d0 */ struct _MI_PROCESS_STATE Processes;
  /* 0x0530 */ struct _MI_HARDWARE_STATE Hardware;
  /* 0x0600 */ struct _MI_SYSTEM_VA_STATE SystemVa;
  /* 0x08c0 */ struct _MI_COMBINE_STATE PageCombines;
  /* 0x0a60 */ struct _MI_PARTITION_STATE Partitions;
  /* 0x0ac0 */ struct _MI_SHUTDOWN_STATE Shutdowns;
  /* 0x0b40 */ struct _MI_ERROR_STATE Errors;
  /* 0x0c00 */ struct _MI_ACCESS_LOG_STATE AccessLog;
  /* 0x0c80 */ struct _MI_DEBUGGER_STATE Debugger;
  /* 0x0dc0 */ struct _MI_STANDBY_STATE Standby;
  /* 0x0e80 */ struct _MI_SYSTEM_PTE_STATE SystemPtes;
  /* 0x1000 */ struct _MI_IO_PAGE_STATE IoPages;
  /* 0x1060 */ struct _MI_PAGING_IO_STATE PagingIo;
  /* 0x10b0 */ struct _MI_COMMON_PAGE_STATE CommonPages;
  /* 0x1180 */ struct _MI_SYSTEM_TRIM_STATE Trims;
  /* 0x11c0 */ struct _MI_RESAVAIL_TRACKER ResTrack;
  /* 0x1540 */ unsigned __int64 Cookie;
  /* 0x1548 */ volatile long ZeroingDisabled;
  /* 0x1550 */ void* volatile* BootRegistryRuns;
  /* 0x1558 */ unsigned char FullyInitialized;
  /* 0x1559 */ unsigned char SafeBooted;
  /* 0x1560 */ struct _RTL_BITMAP_EX LargePfnBitMap;
  /* 0x1570 */ const struct _TlgProvider_t* TraceLogging;
  /* 0x1580 */ struct _MI_VISIBLE_STATE Vs;
} MI_SYSTEM_INFORMATION, *PMI_SYSTEM_INFORMATION; /* size: 0x1bc0 */

