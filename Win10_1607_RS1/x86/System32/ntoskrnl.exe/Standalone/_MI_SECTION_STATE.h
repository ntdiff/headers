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

typedef struct _RTL_AVL_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
} RTL_AVL_TREE, *PRTL_AVL_TREE; /* size: 0x0004 */

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
  /* 0x0004 */ struct _MMPTE* SubsectionBase;
  /* 0x0008 */ struct _SUBSECTION* NextSubsection;
  union
  {
    /* 0x000c */ struct _RTL_AVL_TREE GlobalPerSessionHead;
    /* 0x000c */ struct _MI_CONTROL_AREA_WAIT_BLOCK* CreationWaitList;
    /* 0x000c */ struct _MI_PER_SESSION_PROTOS* SessionDriverProtos;
  }; /* size: 0x0004 */
  union // _TAG_UNNAMED_4
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
  union // _TAG_UNNAMED_5
  {
    /* 0x0020 */ unsigned long NumberOfChildViews;
  } /* size: 0x0004 */ u1;
  union
  {
    struct /* bitfield */
    {
      /* 0x0024 */ unsigned long UnusedPtes : 31; /* bit position: 0 */
      /* 0x0024 */ unsigned long DirtyPages : 1; /* bit position: 31 */
    }; /* bitfield */
    struct // _TAG_UNNAMED_6
    {
      struct /* bitfield */
      {
        /* 0x0024 */ unsigned long AlignmentNoAccessPtes : 31; /* bit position: 0 */
        /* 0x0024 */ unsigned long DirtyPages : 1; /* bit position: 31 */
      }; /* bitfield */
    } /* size: 0x0004 */ u2;
  }; /* size: 0x0004 */
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

typedef struct _MSUBSECTION
{
  /* 0x0000 */ struct _SUBSECTION Core;
  /* 0x0028 */ struct _RTL_BALANCED_NODE SubsectionNode;
  /* 0x0034 */ struct _LIST_ENTRY DereferenceList;
  /* 0x003c */ unsigned long NumberOfMappedViews;
  /* 0x0040 */ unsigned long NumberOfPfnReferences;
} MSUBSECTION, *PMSUBSECTION; /* size: 0x0044 */

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
    /* 0x0000 */ unsigned int PreferredNode : 6; /* bit position: 20 */
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
  /* 0x0004 */ struct _LIST_ENTRY ListHead;
  /* 0x000c */ unsigned long NumberOfSectionReferences;
  /* 0x0010 */ unsigned long NumberOfPfnReferences;
  /* 0x0014 */ unsigned long NumberOfMappedViews;
  /* 0x0018 */ unsigned long NumberOfUserReferences;
  union // _TAG_UNNAMED_7
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
  union // _TAG_UNNAMED_8
  {
    struct // _TAG_UNNAMED_9
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
          /* 0x0034 */ unsigned long Unused : 9; /* bit position: 16 */
          /* 0x0034 */ unsigned long SystemImage : 1; /* bit position: 25 */
          /* 0x0034 */ unsigned long StrongCode : 2; /* bit position: 26 */
          /* 0x0034 */ unsigned long CantMove : 1; /* bit position: 28 */
          /* 0x0034 */ unsigned long BitMap : 2; /* bit position: 29 */
          /* 0x0034 */ unsigned long ImageActive : 1; /* bit position: 31 */
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
  union // _TAG_UNNAMED_10
  {
    union
    {
      struct /* bitfield */
      {
        /* 0x0048 */ unsigned long IoAttributionContext : 29; /* bit position: 0 */
        /* 0x0048 */ unsigned long Spare : 3; /* bit position: 29 */
      }; /* bitfield */
      /* 0x0048 */ unsigned long SpareImage;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u3;
  /* 0x004c */ long __PADDING__[1];
} CONTROL_AREA, *PCONTROL_AREA; /* size: 0x0050 */

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0008 */ void* WorkerRoutine /* function */;
  /* 0x000c */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0010 */

typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0004 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0008 */

typedef struct _MI_SECTION_STATE
{
  /* 0x0000 */ volatile long SectionObjectPointersLock;
  /* 0x0004 */ struct _EX_PUSH_LOCK SectionExtendLock;
  /* 0x0008 */ struct _EX_PUSH_LOCK SectionExtendSetLock;
  /* 0x000c */ struct _RTL_AVL_TREE SectionBasedRoot;
  /* 0x0010 */ struct _EX_PUSH_LOCK SectionBasedLock;
  /* 0x0014 */ unsigned long UnusedSubsectionPagedPool;
  /* 0x0018 */ unsigned long UnusedSegmentForceFree;
  /* 0x001c */ unsigned long DataSectionProtectionMask;
  /* 0x0020 */ void* HighSectionBase;
  /* 0x0024 */ struct _MSUBSECTION PhysicalSubsection;
  /* 0x0068 */ struct _CONTROL_AREA PhysicalControlArea;
  /* 0x00b8 */ struct _MMPFN* DanglingExtentsPages;
  /* 0x00bc */ volatile long DanglingExtentsLock;
  /* 0x00c0 */ struct _WORK_QUEUE_ITEM DanglingExtentsWorkItem;
  /* 0x00d0 */ unsigned char DanglingExtentsWorkerActive;
  /* 0x00d4 */ struct _RTL_AVL_TREE PageFileSectionHead;
  /* 0x00d8 */ volatile long PageFileSectionListSpinLock;
  /* 0x00dc */ unsigned long ImageBias;
  /* 0x00e0 */ struct _EX_PUSH_LOCK RelocateBitmapsLock;
  /* 0x00e4 */ struct _RTL_BITMAP ImageBitMap;
  /* 0x00ec */ void* ApiSetSection;
  /* 0x00f0 */ void* ApiSetSchema;
  /* 0x00f4 */ unsigned long ApiSetSchemaSize;
  /* 0x00f8 */ unsigned long LostDataFiles;
  /* 0x00fc */ unsigned long LostDataPages;
  /* 0x0100 */ unsigned long ImageFailureReason;
  /* 0x0104 */ struct _SECTION* CfgBitMapSection32;
  /* 0x0108 */ struct _CONTROL_AREA* CfgBitMapControlArea32;
  /* 0x010c */ unsigned long ImageCfgFailure;
  /* 0x0110 */ volatile long ImageValidationFailed;
  /* 0x0114 */ long __PADDING__[11];
} MI_SECTION_STATE, *PMI_SECTION_STATE; /* size: 0x0140 */

