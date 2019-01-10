typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

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

