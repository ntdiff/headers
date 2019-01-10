typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

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

