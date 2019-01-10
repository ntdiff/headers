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

typedef struct _SEGMENT_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long TotalNumberOfPtes4132 : 10; /* bit position: 0 */
    /* 0x0000 */ unsigned long ExtraSharedWowSubsections : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned long LargePages : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned long WatchProto : 1; /* bit position: 12 */
    /* 0x0000 */ unsigned long DebugSymbolsLoaded : 1; /* bit position: 13 */
    /* 0x0000 */ unsigned long WriteCombined : 1; /* bit position: 14 */
    /* 0x0000 */ unsigned long NoCache : 1; /* bit position: 15 */
    /* 0x0000 */ unsigned long FloppyMedia : 1; /* bit position: 16 */
    /* 0x0000 */ unsigned long DefaultProtectionMask : 5; /* bit position: 17 */
    /* 0x0000 */ unsigned long ContainsPxeSubsection : 1; /* bit position: 22 */
    /* 0x0000 */ unsigned long Spare : 9; /* bit position: 23 */
  }; /* bitfield */
} SEGMENT_FLAGS, *PSEGMENT_FLAGS; /* size: 0x0004 */

typedef struct _HARDWARE_PTE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long Write : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long Owner : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned long WriteThrough : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned long CacheDisable : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned long Accessed : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned long Dirty : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned long LargePage : 1; /* bit position: 7 */
    /* 0x0000 */ unsigned long Global : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned long CopyOnWrite : 1; /* bit position: 9 */
    /* 0x0000 */ unsigned long Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned long reserved : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned long PageFrameNumber : 20; /* bit position: 12 */
  }; /* bitfield */
} HARDWARE_PTE, *PHARDWARE_PTE; /* size: 0x0004 */

typedef struct _MMPTE_HARDWARE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long Dirty1 : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long Owner : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned long WriteThrough : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned long CacheDisable : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned long Accessed : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned long Dirty : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned long LargePage : 1; /* bit position: 7 */
    /* 0x0000 */ unsigned long Global : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned long CopyOnWrite : 1; /* bit position: 9 */
    /* 0x0000 */ unsigned long Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned long Write : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned long PageFrameNumber : 20; /* bit position: 12 */
  }; /* bitfield */
} MMPTE_HARDWARE, *PMMPTE_HARDWARE; /* size: 0x0004 */

typedef struct _MMPTE_PROTOTYPE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long ProtoAddressLow : 8; /* bit position: 1 */
    /* 0x0000 */ unsigned long ReadOnly : 1; /* bit position: 9 */
    /* 0x0000 */ unsigned long Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned long ProtoAddressHigh : 21; /* bit position: 11 */
  }; /* bitfield */
} MMPTE_PROTOTYPE, *PMMPTE_PROTOTYPE; /* size: 0x0004 */

typedef struct _MMPTE_SOFTWARE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long PageFileLow : 4; /* bit position: 1 */
    /* 0x0000 */ unsigned long Protection : 5; /* bit position: 5 */
    /* 0x0000 */ unsigned long Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned long Transition : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned long PageFileHigh : 20; /* bit position: 12 */
  }; /* bitfield */
} MMPTE_SOFTWARE, *PMMPTE_SOFTWARE; /* size: 0x0004 */

typedef struct _MMPTE_TRANSITION
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long Write : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long Owner : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned long WriteThrough : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned long CacheDisable : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned long Protection : 5; /* bit position: 5 */
    /* 0x0000 */ unsigned long Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned long Transition : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned long PageFrameNumber : 20; /* bit position: 12 */
  }; /* bitfield */
} MMPTE_TRANSITION, *PMMPTE_TRANSITION; /* size: 0x0004 */

typedef struct _MMPTE_SUBSECTION
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long SubsectionAddressLow : 9; /* bit position: 1 */
    /* 0x0000 */ unsigned long Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned long SubsectionAddressHigh : 21; /* bit position: 11 */
  }; /* bitfield */
} MMPTE_SUBSECTION, *PMMPTE_SUBSECTION; /* size: 0x0004 */

typedef struct _MMPTE_LIST
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long OneEntry : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long filler0 : 8; /* bit position: 2 */
    /* 0x0000 */ unsigned long Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned long filler1 : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned long NextEntry : 20; /* bit position: 12 */
  }; /* bitfield */
} MMPTE_LIST, *PMMPTE_LIST; /* size: 0x0004 */

typedef struct _MMPTE
{
  union
  {
    union
    {
      /* 0x0000 */ unsigned long Long;
      /* 0x0000 */ volatile unsigned long VolatileLong;
      /* 0x0000 */ struct _HARDWARE_PTE Flush;
      /* 0x0000 */ struct _MMPTE_HARDWARE Hard;
      /* 0x0000 */ struct _MMPTE_PROTOTYPE Proto;
      /* 0x0000 */ struct _MMPTE_SOFTWARE Soft;
      /* 0x0000 */ struct _MMPTE_TRANSITION Trans;
      /* 0x0000 */ struct _MMPTE_SUBSECTION Subsect;
      /* 0x0000 */ struct _MMPTE_LIST List;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u;
} MMPTE, *PMMPTE; /* size: 0x0004 */

typedef struct _SEGMENT
{
  /* 0x0000 */ struct _CONTROL_AREA* ControlArea;
  /* 0x0004 */ unsigned long TotalNumberOfPtes;
  /* 0x0008 */ unsigned long NonExtendedPtes;
  /* 0x000c */ unsigned long NumberOfCommittedPages;
  /* 0x0010 */ unsigned __int64 SizeOfSegment;
  union
  {
    /* 0x0018 */ struct _MMEXTEND_INFO* ExtendInfo;
    /* 0x0018 */ void* BasedAddress;
  }; /* size: 0x0004 */
  /* 0x001c */ struct _EX_PUSH_LOCK SegmentLock;
  /* 0x0020 */ struct _SEGMENT_FLAGS SegmentFlags;
  union
  {
    union
    {
      /* 0x0024 */ unsigned long ImageCommitment;
      /* 0x0024 */ struct _EPROCESS* CreatingProcess;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u1;
  union
  {
    union
    {
      /* 0x0028 */ struct _MI_SECTION_IMAGE_INFORMATION* ImageInformation;
      /* 0x0028 */ void* FirstMappedVa;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u2;
  /* 0x002c */ struct _MMPTE* PrototypePte;
  /* 0x0030 */ struct _MMPTE ThePtes[1];
  /* 0x0034 */ long __PADDING__[1];
} SEGMENT, *PSEGMENT; /* size: 0x0038 */

