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
    /* 0x0000 */ unsigned int Networked : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned int Rom : 1; /* bit position: 9 */
    /* 0x0000 */ unsigned int PhysicalMemory : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned int CopyOnWrite : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned int Reserve : 1; /* bit position: 12 */
    /* 0x0000 */ unsigned int Commit : 1; /* bit position: 13 */
    /* 0x0000 */ unsigned int Accessed : 1; /* bit position: 14 */
    /* 0x0000 */ unsigned int WasPurged : 1; /* bit position: 15 */
    /* 0x0000 */ unsigned int UserReference : 1; /* bit position: 16 */
    /* 0x0000 */ unsigned int GlobalMemory : 1; /* bit position: 17 */
    /* 0x0000 */ unsigned int DeleteOnClose : 1; /* bit position: 18 */
    /* 0x0000 */ unsigned int FilePointerNull : 1; /* bit position: 19 */
    /* 0x0000 */ unsigned int GlobalOnlyPerSession : 1; /* bit position: 20 */
    /* 0x0000 */ unsigned int SetMappedFileIoComplete : 1; /* bit position: 21 */
    /* 0x0000 */ unsigned int CollidedFlush : 1; /* bit position: 22 */
    /* 0x0000 */ unsigned int NoChange : 1; /* bit position: 23 */
    /* 0x0000 */ unsigned int Spare : 1; /* bit position: 24 */
    /* 0x0000 */ unsigned int UserWritable : 1; /* bit position: 25 */
    /* 0x0000 */ unsigned int PreferredNode : 6; /* bit position: 26 */
  }; /* bitfield */
} MMSECTION_FLAGS, *PMMSECTION_FLAGS; /* size: 0x0004 */

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
  /* 0x0008 */ struct _LIST_ENTRY DereferenceList;
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
  /* 0x003c */ unsigned long FlushInProgressCount;
  /* 0x0040 */ struct _EX_FAST_REF FilePointer;
  /* 0x0048 */ volatile long ControlAreaLock;
  union
  {
    /* 0x004c */ unsigned long ModifiedWriteCount;
    /* 0x004c */ unsigned long StartingFrame;
  }; /* size: 0x0004 */
  /* 0x0050 */ struct _MI_SECTION_CREATION_GATE* WaitingForDeletion;
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
          /* 0x005c */ unsigned long Unused : 14; /* bit position: 16 */
          /* 0x005c */ unsigned long BitMap64 : 1; /* bit position: 30 */
          /* 0x005c */ unsigned long ImageActive : 1; /* bit position: 31 */
        }; /* bitfield */
      }; /* size: 0x0004 */
      union
      {
        /* 0x0060 */ struct _MM_SUBSECTION_AVL_TABLE* SubsectionRoot;
        /* 0x0060 */ struct _MI_IMAGE_SECURITY_REFERENCE* SeImageStub;
      }; /* size: 0x0008 */
    } /* size: 0x0010 */ e2;
  } /* size: 0x0010 */ u2;
  /* 0x0068 */ volatile __int64 LockedPages;
  /* 0x0070 */ struct _LIST_ENTRY ViewList;
} CONTROL_AREA, *PCONTROL_AREA; /* size: 0x0080 */

