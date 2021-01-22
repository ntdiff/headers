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

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

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

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef struct _MI_ACTIVE_PFN
{
  union
  {
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long Tradable : 1; /* bit position: 0 */
        /* 0x0000 */ unsigned long NonPagedBuddy : 28; /* bit position: 1 */
      }; /* bitfield */
    } /* size: 0x0004 */ Leaf;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long Tradable : 1; /* bit position: 0 */
        /* 0x0000 */ unsigned long WsleAge : 3; /* bit position: 1 */
        /* 0x0000 */ unsigned long NonPagedBuddy : 28; /* bit position: 4 */
      }; /* bitfield */
    } /* size: 0x0004 */ PageTable;
    /* 0x0000 */ unsigned long EntireActiveField;
  }; /* size: 0x0004 */
} MI_ACTIVE_PFN, *PMI_ACTIVE_PFN; /* size: 0x0004 */

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
    /* 0x0000 */ unsigned __int64 PageFrameNumber : 25; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 reserved1 : 26; /* bit position: 37 */
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

typedef struct _MIPFNBLINK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Blink : 23; /* bit position: 0 */
      /* 0x0000 */ unsigned long TbFlushStamp : 3; /* bit position: 23 */
      /* 0x0000 */ unsigned long PageBlinkDeleteBit : 1; /* bit position: 26 */
      /* 0x0000 */ unsigned long PageBlinkLockBit : 1; /* bit position: 27 */
    }; /* bitfield */
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long ShareCount : 30; /* bit position: 0 */
      /* 0x0000 */ unsigned long PageShareCountDeleteBit : 1; /* bit position: 30 */
      /* 0x0000 */ unsigned long PageShareCountLockBit : 1; /* bit position: 31 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long EntireField;
    /* 0x0000 */ volatile long Lock;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long LockNotUsed : 30; /* bit position: 0 */
      /* 0x0000 */ unsigned long DeleteBit : 1; /* bit position: 30 */
      /* 0x0000 */ unsigned long LockBit : 1; /* bit position: 31 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} MIPFNBLINK, *PMIPFNBLINK; /* size: 0x0004 */

typedef struct _MMPFNENTRY1
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char PageLocation : 3; /* bit position: 0 */
    /* 0x0000 */ unsigned char WriteInProgress : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned char Modified : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned char ReadInProgress : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned char CacheAttribute : 2; /* bit position: 6 */
  }; /* bitfield */
} MMPFNENTRY1, *PMMPFNENTRY1; /* size: 0x0001 */

typedef struct _MMPFNENTRY3
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char Priority : 3; /* bit position: 0 */
    /* 0x0000 */ unsigned char OnProtectedStandby : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned char InPageError : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned char SystemChargedPage : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned char RemovalRequested : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned char ParityError : 1; /* bit position: 7 */
  }; /* bitfield */
} MMPFNENTRY3, *PMMPFNENTRY3; /* size: 0x0001 */

typedef struct _MMPFN
{
  union
  {
    /* 0x0000 */ struct _LIST_ENTRY ListEntry;
    /* 0x0000 */ struct _RTL_BALANCED_NODE TreeNode;
    struct
    {
      union
      {
        union
        {
          /* 0x0000 */ struct _SINGLE_LIST_ENTRY NextSlistPfn;
          /* 0x0000 */ void* Next;
          /* 0x0000 */ unsigned long Flink;
          /* 0x0000 */ struct _MI_ACTIVE_PFN Active;
        }; /* size: 0x0004 */
      } /* size: 0x0004 */ u1;
      union
      {
        /* 0x0004 */ struct _MMPTE* PteAddress;
        /* 0x0004 */ unsigned long PteLong;
      }; /* size: 0x0004 */
      /* 0x0008 */ struct _MMPTE OriginalPte;
      /* 0x0010 */ struct _MIPFNBLINK u2;
      union
      {
        union
        {
          struct
          {
            /* 0x0014 */ unsigned short ReferenceCount;
            /* 0x0016 */ struct _MMPFNENTRY1 e1;
            /* 0x0017 */ struct _MMPFNENTRY3 e3;
          }; /* size: 0x0004 */
          struct
          {
            /* 0x0014 */ unsigned short ReferenceCount;
          } /* size: 0x0002 */ e2;
          struct
          {
            /* 0x0014 */ unsigned long EntireField;
          } /* size: 0x0004 */ e4;
        }; /* size: 0x0004 */
      } /* size: 0x0004 */ u3;
      union
      {
        union
        {
          struct /* bitfield */
          {
            /* 0x0018 */ unsigned long PteFrame : 23; /* bit position: 0 */
            /* 0x0018 */ unsigned long ResidentPage : 1; /* bit position: 23 */
            /* 0x0018 */ unsigned long AnchorLargePageSize : 2; /* bit position: 24 */
            /* 0x0018 */ unsigned long ModifiedListBucketIndex : 2; /* bit position: 26 */
            /* 0x0018 */ unsigned long PageIdentity : 3; /* bit position: 28 */
            /* 0x0018 */ unsigned long PrototypePte : 1; /* bit position: 31 */
          }; /* bitfield */
          /* 0x0018 */ unsigned long EntireField;
        }; /* size: 0x0004 */
      } /* size: 0x0004 */ u4;
    }; /* size: 0x001c */
  }; /* size: 0x001c */
} MMPFN, *PMMPFN; /* size: 0x001c */

typedef struct _MMPFNLIST
{
  /* 0x0000 */ volatile unsigned long Total;
  /* 0x0004 */ enum _MMLISTS ListName;
  /* 0x0008 */ unsigned long Flink;
  /* 0x000c */ unsigned long Blink;
  /* 0x0010 */ volatile long Lock;
  /* 0x0014 */ struct _MMPFN EmbeddedPfn;
} MMPFNLIST, *PMMPFNLIST; /* size: 0x0030 */

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

typedef struct _KEVENT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT; /* size: 0x0010 */

typedef struct _MI_STANDBY_LOOKASIDE
{
  /* 0x0000 */ unsigned long Array[64];
} MI_STANDBY_LOOKASIDE, *PMI_STANDBY_LOOKASIDE; /* size: 0x0100 */

typedef struct _MI_DECAY_TIMER_LINKAGE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Spare0 : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long PreviousDecayPfn : 15; /* bit position: 1 */
    /* 0x0000 */ unsigned long TimerRemoved : 1; /* bit position: 16 */
    /* 0x0000 */ unsigned long NextDecayPfn : 15; /* bit position: 17 */
  }; /* bitfield */
} MI_DECAY_TIMER_LINKAGE, *PMI_DECAY_TIMER_LINKAGE; /* size: 0x0004 */

typedef struct _MI_DECAY_TIMER_LINK
{
  union
  {
    union
    {
      /* 0x0000 */ unsigned long Long;
      /* 0x0000 */ struct _MI_DECAY_TIMER_LINKAGE e1;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u1;
} MI_DECAY_TIMER_LINK, *PMI_DECAY_TIMER_LINK; /* size: 0x0004 */

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0008 */ void* WorkerRoutine /* function */;
  /* 0x000c */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0010 */

typedef struct _MI_LDW_WORK_CONTEXT
{
  /* 0x0000 */ struct _WORK_QUEUE_ITEM WorkItem;
  /* 0x0010 */ struct _FILE_OBJECT* FileObject;
  /* 0x0014 */ long ErrorStatus;
  /* 0x0018 */ volatile long Active;
  /* 0x001c */ unsigned char FreeWhenDone;
  /* 0x001d */ char __PADDING__[3];
} MI_LDW_WORK_CONTEXT, *PMI_LDW_WORK_CONTEXT; /* size: 0x0020 */

typedef struct _MI_AVAILABLE_PAGE_WAIT_STATES
{
  /* 0x0000 */ struct _KEVENT Event;
  /* 0x0010 */ unsigned long EventSets;
} MI_AVAILABLE_PAGE_WAIT_STATES, *PMI_AVAILABLE_PAGE_WAIT_STATES; /* size: 0x0014 */

typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0004 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0008 */

typedef struct _MI_PARTITION_PAGE_LISTS
{
  /* 0x0000 */ struct _MMPFNLIST* FreePagesByColor[2];
  /* 0x0040 */ struct _MMPFNLIST ZeroedPageListHead;
  /* 0x0080 */ struct _MMPFNLIST FreePageListHead;
  /* 0x00c0 */ struct _MMPFNLIST StandbyPageListHead;
  /* 0x0100 */ struct _MMPFNLIST StandbyPageListByPriority[8];
  /* 0x0280 */ struct _MMPFNLIST ModifiedPageListNoReservation;
  /* 0x02c0 */ struct _MMPFNLIST ModifiedPageListByReservation[16];
  /* 0x05c0 */ struct _MMPFNLIST MappedPageListHead[4];
  /* 0x0680 */ struct _MMPFNLIST BadPageListHead;
  /* 0x06b0 */ union _SLIST_HEADER* FreePageSlist[2];
  /* 0x06b8 */ struct _MMPFNLIST* PageLocationList[8];
  /* 0x06d8 */ volatile unsigned long StandbyRepurposedByPriority[8];
  /* 0x0700 */ volatile unsigned long TransitionSharedPages;
  /* 0x0704 */ unsigned long TransitionSharedPagesPeak[6];
  /* 0x071c */ struct _KEVENT MappedPageListHeadEvent[4];
  /* 0x0780 */ struct _MI_STANDBY_LOOKASIDE OldestStandbyPageCache[8];
  /* 0x0f80 */ struct _MI_STANDBY_LOOKASIDE NewestStandbyPageCache[8];
  /* 0x1780 */ unsigned long NewestStandbyPageCacheInserts[8][1];
  /* 0x17a0 */ struct _MI_DECAY_TIMER_LINK DecayClusterTimerHeads[4];
  /* 0x17b0 */ unsigned long DecayHand;
  /* 0x17b4 */ unsigned char StandbyListDiscard;
  /* 0x17b5 */ unsigned char FreeListDiscard;
  /* 0x17b6 */ unsigned char PfnBitMapsReady;
  /* 0x17b8 */ unsigned __int64 LastDecayHandUpdateTime;
  /* 0x17c0 */ struct _MI_LDW_WORK_CONTEXT LastChanceLdwContext;
  /* 0x1800 */ unsigned long AvailableEventsLock;
  /* 0x1804 */ struct _MI_AVAILABLE_PAGE_WAIT_STATES AvailablePageWaitStates[3];
  /* 0x1840 */ volatile unsigned long TransitionPrivatePages;
  /* 0x1844 */ struct _RTL_BITMAP LargePfnBitMap[1];
  /* 0x184c */ struct _MI_FREE_LARGE_PAGE_LIST* LargePageListHeads;
  /* 0x1850 */ volatile char* MediumPagesOnFreeZeroList;
  /* 0x1854 */ struct _RTL_BITMAP LargePageRebuildCandidates;
  /* 0x185c */ struct _KEVENT LargePageCandidatesExistEvent;
  /* 0x186c */ unsigned long LowMemoryThreshold;
  /* 0x1870 */ unsigned long HighMemoryThreshold;
  /* 0x1874 */ struct _RTL_BITMAP SlabPfnBitMap;
  /* 0x187c */ unsigned char SlabPagesNotAvailable[7];
  /* 0x1883 */ char __PADDING__[61];
} MI_PARTITION_PAGE_LISTS, *PMI_PARTITION_PAGE_LISTS; /* size: 0x18c0 */

