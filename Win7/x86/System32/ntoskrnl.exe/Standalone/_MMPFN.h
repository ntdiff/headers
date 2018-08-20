typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef struct _MMPFNENTRY
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char PageLocation : 3; /* bit position: 0 */
    /* 0x0000 */ unsigned char WriteInProgress : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned char Modified : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned char ReadInProgress : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned char CacheAttribute : 2; /* bit position: 6 */
  }; /* bitfield */
  struct /* bitfield */
  {
    /* 0x0001 */ unsigned char Priority : 3; /* bit position: 0 */
    /* 0x0001 */ unsigned char Rom : 1; /* bit position: 3 */
    /* 0x0001 */ unsigned char InPageError : 1; /* bit position: 4 */
    /* 0x0001 */ unsigned char KernelStack : 1; /* bit position: 5 */
    /* 0x0001 */ unsigned char RemovalRequested : 1; /* bit position: 6 */
    /* 0x0001 */ unsigned char ParityError : 1; /* bit position: 7 */
  }; /* bitfield */
} MMPFNENTRY, *PMMPFNENTRY; /* size: 0x0002 */

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
    /* 0x0000 */ unsigned long Unused : 1; /* bit position: 10 */
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

typedef struct _MMPTE_TIMESTAMP
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long MustBeZero : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long PageFileLow : 4; /* bit position: 1 */
    /* 0x0000 */ unsigned long Protection : 5; /* bit position: 5 */
    /* 0x0000 */ unsigned long Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned long Transition : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned long GlobalTimeStamp : 20; /* bit position: 12 */
  }; /* bitfield */
} MMPTE_TIMESTAMP, *PMMPTE_TIMESTAMP; /* size: 0x0004 */

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
  union // _TAG_UNNAMED_25
  {
    union
    {
      /* 0x0000 */ unsigned long Long;
      /* 0x0000 */ volatile unsigned long VolatileLong;
      /* 0x0000 */ struct _HARDWARE_PTE Flush;
      /* 0x0000 */ struct _MMPTE_HARDWARE Hard;
      /* 0x0000 */ struct _MMPTE_PROTOTYPE Proto;
      /* 0x0000 */ struct _MMPTE_SOFTWARE Soft;
      /* 0x0000 */ struct _MMPTE_TIMESTAMP TimeStamp;
      /* 0x0000 */ struct _MMPTE_TRANSITION Trans;
      /* 0x0000 */ struct _MMPTE_SUBSECTION Subsect;
      /* 0x0000 */ struct _MMPTE_LIST List;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u;
} MMPTE, *PMMPTE; /* size: 0x0004 */

typedef struct _MMPFN
{
  union // _TAG_UNNAMED_26
  {
    union
    {
      /* 0x0000 */ unsigned long Flink;
      /* 0x0000 */ unsigned long WsIndex;
      /* 0x0000 */ struct _KEVENT* Event;
      /* 0x0000 */ void* Next;
      /* 0x0000 */ void* volatile VolatileNext;
      /* 0x0000 */ struct _KTHREAD* KernelStackOwner;
      /* 0x0000 */ struct _SINGLE_LIST_ENTRY NextStackPfn;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u1;
  union // _TAG_UNNAMED_27
  {
    union
    {
      /* 0x0004 */ unsigned long Blink;
      /* 0x0004 */ struct _MMPTE* ImageProtoPte;
      /* 0x0004 */ unsigned long ShareCount;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u2;
  union
  {
    /* 0x0008 */ struct _MMPTE* PteAddress;
    /* 0x0008 */ void* volatile VolatilePteAddress;
    /* 0x0008 */ volatile long Lock;
    /* 0x0008 */ unsigned long PteLong;
  }; /* size: 0x0004 */
  union // _TAG_UNNAMED_28
  {
    union
    {
      struct
      {
        /* 0x000c */ unsigned short ReferenceCount;
        /* 0x000e */ struct _MMPFNENTRY e1;
      }; /* size: 0x0004 */
      struct // _TAG_UNNAMED_29
      {
        union
        {
          /* 0x000c */ unsigned short ReferenceCount;
          /* 0x000c */ volatile short VolatileReferenceCount;
        }; /* size: 0x0002 */
        /* 0x000e */ unsigned short ShortFlags;
      } /* size: 0x0004 */ e2;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u3;
  union
  {
    /* 0x0010 */ struct _MMPTE OriginalPte;
    /* 0x0010 */ volatile long AweReferenceCount;
  }; /* size: 0x0004 */
  union // _TAG_UNNAMED_30
  {
    struct /* bitfield */
    {
      /* 0x0014 */ unsigned long PteFrame : 25; /* bit position: 0 */
      /* 0x0014 */ unsigned long PfnImageVerified : 1; /* bit position: 25 */
      /* 0x0014 */ unsigned long AweAllocation : 1; /* bit position: 26 */
      /* 0x0014 */ unsigned long PrototypePte : 1; /* bit position: 27 */
      /* 0x0014 */ unsigned long PageColor : 4; /* bit position: 28 */
    }; /* bitfield */
  } /* size: 0x0004 */ u4;
} MMPFN, *PMMPFN; /* size: 0x0018 */

