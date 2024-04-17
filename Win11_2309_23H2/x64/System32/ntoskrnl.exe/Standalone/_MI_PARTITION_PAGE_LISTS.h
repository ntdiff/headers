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
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

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

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

typedef struct _MI_ACTIVE_PFN
{
  union
  {
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Tradable : 1; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 NonPagedBuddy : 43; /* bit position: 1 */
      }; /* bitfield */
    } /* size: 0x0008 */ Leaf;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Tradable : 1; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 WsleAge : 3; /* bit position: 1 */
        /* 0x0000 */ unsigned __int64 OldestWsleLeafEntries : 10; /* bit position: 4 */
        /* 0x0000 */ unsigned __int64 OldestWsleLeafAge : 3; /* bit position: 14 */
        /* 0x0000 */ unsigned __int64 NonPagedBuddy : 43; /* bit position: 17 */
      }; /* bitfield */
    } /* size: 0x0008 */ PageTable;
    /* 0x0000 */ unsigned __int64 EntireActiveField;
  }; /* size: 0x0008 */
} MI_ACTIVE_PFN, *PMI_ACTIVE_PFN; /* size: 0x0008 */

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
    /* 0x0000 */ unsigned __int64 PageFrameNumber : 40; /* bit position: 12 */
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
    /* 0x0000 */ unsigned __int64 OnStandbyLookaside : 1; /* bit position: 27 */
    /* 0x0000 */ unsigned __int64 Unused : 4; /* bit position: 28 */
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
    /* 0x0000 */ unsigned __int64 OnStandbyLookaside : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned __int64 IoTracker : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned __int64 SwizzleBit : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Transition : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 PageFrameNumber : 40; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 Unused : 12; /* bit position: 52 */
  }; /* bitfield */
} MMPTE_TRANSITION, *PMMPTE_TRANSITION; /* size: 0x0008 */

typedef struct _MMPTE_SUBSECTION
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Unused0 : 2; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 OnStandbyLookaside : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned __int64 SwizzleBit : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 ColdPage : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 Unused2 : 3; /* bit position: 12 */
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

typedef struct _MIPFNBLINK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Blink : 40; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 NodeBlinkLow : 19; /* bit position: 40 */
      /* 0x0000 */ unsigned __int64 TbFlushStamp : 3; /* bit position: 59 */
      /* 0x0000 */ unsigned __int64 PageBlinkDeleteBit : 1; /* bit position: 62 */
      /* 0x0000 */ unsigned __int64 PageBlinkLockBit : 1; /* bit position: 63 */
    }; /* bitfield */
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 ShareCount : 62; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 PageShareCountDeleteBit : 1; /* bit position: 62 */
      /* 0x0000 */ unsigned __int64 PageShareCountLockBit : 1; /* bit position: 63 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 EntireField;
    /* 0x0000 */ volatile __int64 Lock;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 LockNotUsed : 62; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 DeleteBit : 1; /* bit position: 62 */
      /* 0x0000 */ unsigned __int64 LockBit : 1; /* bit position: 63 */
    }; /* bitfield */
  }; /* size: 0x0008 */
} MIPFNBLINK, *PMIPFNBLINK; /* size: 0x0008 */

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

typedef struct _MI_PFN_ULONG5
{
  union
  {
    /* 0x0000 */ unsigned long EntireField;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long NodeBlinkHigh : 21; /* bit position: 0 */
        /* 0x0000 */ unsigned long NodeFlinkMiddle : 11; /* bit position: 21 */
      }; /* bitfield */
    } /* size: 0x0004 */ StandbyList;
    struct
    {
      /* 0x0000 */ unsigned char ModifiedListBucketIndex : 4; /* bit position: 0 */
    } /* size: 0x0001 */ MappedPageList;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned char AnchorLargePageSize : 2; /* bit position: 0 */
        /* 0x0000 */ unsigned char Spare0 : 6; /* bit position: 2 */
      }; /* bitfield */
      /* 0x0001 */ unsigned char Spare1 : 8; /* bit position: 0 */
      /* 0x0002 */ unsigned short Spare2;
    } /* size: 0x0004 */ Active;
  }; /* size: 0x0004 */
} MI_PFN_ULONG5, *PMI_PFN_ULONG5; /* size: 0x0004 */

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
          struct /* bitfield */
          {
            /* 0x0000 */ unsigned __int64 Flink : 40; /* bit position: 0 */
            /* 0x0000 */ unsigned __int64 NodeFlinkLow : 24; /* bit position: 40 */
          }; /* bitfield */
          /* 0x0000 */ struct _MI_ACTIVE_PFN Active;
        }; /* size: 0x0008 */
      } /* size: 0x0008 */ u1;
      union
      {
        /* 0x0008 */ struct _MMPTE* PteAddress;
        /* 0x0008 */ unsigned __int64 PteLong;
      }; /* size: 0x0008 */
      /* 0x0010 */ struct _MMPTE OriginalPte;
    }; /* size: 0x0018 */
  }; /* size: 0x0018 */
  /* 0x0018 */ struct _MIPFNBLINK u2;
  union
  {
    union
    {
      struct
      {
        /* 0x0020 */ unsigned short ReferenceCount;
        /* 0x0022 */ struct _MMPFNENTRY1 e1;
        /* 0x0023 */ struct _MMPFNENTRY3 e3;
      }; /* size: 0x0004 */
      struct
      {
        /* 0x0020 */ unsigned short ReferenceCount;
      } /* size: 0x0002 */ e2;
      struct
      {
        /* 0x0020 */ unsigned long EntireField;
      } /* size: 0x0004 */ e4;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u3;
  /* 0x0024 */ struct _MI_PFN_ULONG5 u5;
  union
  {
    union
    {
      struct /* bitfield */
      {
        /* 0x0028 */ unsigned __int64 PteFrame : 40; /* bit position: 0 */
        /* 0x0028 */ unsigned __int64 ResidentPage : 1; /* bit position: 40 */
        /* 0x0028 */ unsigned __int64 Unused1 : 1; /* bit position: 41 */
        /* 0x0028 */ unsigned __int64 Unused2 : 1; /* bit position: 42 */
        /* 0x0028 */ unsigned __int64 Partition : 10; /* bit position: 43 */
        /* 0x0028 */ unsigned __int64 FileOnly : 1; /* bit position: 53 */
        /* 0x0028 */ unsigned __int64 PfnExists : 1; /* bit position: 54 */
        /* 0x0028 */ unsigned __int64 NodeFlinkHigh : 5; /* bit position: 55 */
        /* 0x0028 */ unsigned __int64 PageIdentity : 3; /* bit position: 60 */
        /* 0x0028 */ unsigned __int64 PrototypePte : 1; /* bit position: 63 */
      }; /* bitfield */
      /* 0x0028 */ unsigned __int64 EntireField;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u4;
} MMPFN, *PMMPFN; /* size: 0x0030 */

typedef struct _MMPFNLIST
{
  /* 0x0000 */ volatile unsigned __int64 Total;
  /* 0x0008 */ enum _MMLISTS ListName;
  /* 0x0010 */ unsigned __int64 Flink;
  /* 0x0018 */ unsigned __int64 Blink;
  /* 0x0020 */ volatile long Lock;
  /* 0x0028 */ struct _MMPFN EmbeddedPfn;
} MMPFNLIST, *PMMPFNLIST; /* size: 0x0058 */

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
              /* 0x0003 */ unsigned char Emulation : 1; /* bit position: 6 */
              /* 0x0003 */ unsigned char Reserved5 : 1; /* bit position: 7 */
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

typedef struct _KEVENT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT; /* size: 0x0018 */

typedef struct _MI_STANDBY_LOOKASIDE
{
  /* 0x0000 */ unsigned __int64 Array[64];
} MI_STANDBY_LOOKASIDE, *PMI_STANDBY_LOOKASIDE; /* size: 0x0200 */

typedef struct _MI_DECAY_TIMER_LINKAGE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Spare0 : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 PreviousDecayPfn : 31; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 TimerRemoved : 1; /* bit position: 32 */
    /* 0x0000 */ unsigned __int64 NextDecayPfn : 31; /* bit position: 33 */
  }; /* bitfield */
} MI_DECAY_TIMER_LINKAGE, *PMI_DECAY_TIMER_LINKAGE; /* size: 0x0008 */

typedef struct _MI_DECAY_TIMER_LINK
{
  union
  {
    union
    {
      /* 0x0000 */ unsigned __int64 Long;
      /* 0x0000 */ struct _MI_DECAY_TIMER_LINKAGE e1;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u1;
} MI_DECAY_TIMER_LINK, *PMI_DECAY_TIMER_LINK; /* size: 0x0008 */

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0010 */ void* WorkerRoutine /* function */;
  /* 0x0018 */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0020 */

typedef struct _MI_LDW_WORK_CONTEXT
{
  /* 0x0000 */ struct _WORK_QUEUE_ITEM WorkItem;
  /* 0x0020 */ struct _FILE_OBJECT* FileObject;
  /* 0x0028 */ long ErrorStatus;
  /* 0x002c */ volatile long Active;
  /* 0x0030 */ unsigned char FreeWhenDone;
  /* 0x0031 */ char __PADDING__[7];
} MI_LDW_WORK_CONTEXT, *PMI_LDW_WORK_CONTEXT; /* size: 0x0038 */

typedef struct _MI_AVAILABLE_PAGE_WAIT_STATES
{
  /* 0x0000 */ struct _KEVENT Event;
  /* 0x0018 */ unsigned long EventSets;
  /* 0x001c */ long __PADDING__[1];
} MI_AVAILABLE_PAGE_WAIT_STATES, *PMI_AVAILABLE_PAGE_WAIT_STATES; /* size: 0x0020 */

typedef struct _RTL_BITMAP_EX
{
  /* 0x0000 */ unsigned __int64 SizeOfBitMap;
  /* 0x0008 */ unsigned __int64* Buffer;
} RTL_BITMAP_EX, *PRTL_BITMAP_EX; /* size: 0x0010 */

typedef struct _MI_PARTITION_PAGE_LISTS
{
  /* 0x0000 */ struct _MMPFNLIST* FreePagesByColor[2];
  /* 0x0040 */ struct _MMPFNLIST ZeroedPageListHead;
  /* 0x00c0 */ struct _MMPFNLIST FreePageListHead;
  /* 0x0140 */ struct _MMPFNLIST StandbyPageListHead;
  /* 0x01c0 */ struct _MMPFNLIST StandbyPageListByPriority[8];
  /* 0x0480 */ struct _MMPFNLIST ModifiedPageListNoReservation;
  /* 0x0500 */ struct _MMPFNLIST ModifiedPageListNoReservationCompress;
  /* 0x0580 */ struct _MMPFNLIST ModifiedPageListByReservation[16];
  /* 0x0b00 */ struct _MMPFNLIST MappedPageListHead[16];
  /* 0x1080 */ struct _MMPFNLIST BadPageListHead;
  /* 0x10d8 */ union _SLIST_HEADER* FreePageSlist[2];
  /* 0x10e8 */ struct _MMPFNLIST* PageLocationList[8];
  /* 0x1128 */ volatile unsigned long StandbyRepurposedByPriority[8];
  /* 0x1180 */ volatile unsigned __int64 TransitionSharedPages;
  /* 0x1188 */ unsigned __int64 TransitionSharedPagesPeak[6];
  /* 0x11b8 */ struct _KEVENT MappedPageListHeadEvent[16];
  /* 0x1340 */ struct _MI_STANDBY_LOOKASIDE OldestStandbyPageCache[8];
  /* 0x2340 */ struct _MI_STANDBY_LOOKASIDE NewestStandbyPageCache[8];
  /* 0x3340 */ unsigned __int64 NewestStandbyPageCacheInserts[8][2];
  /* 0x33c0 */ struct _MI_DECAY_TIMER_LINK DecayClusterTimerHeads[4];
  /* 0x33e0 */ unsigned long DecayHand;
  /* 0x33e4 */ unsigned char StandbyListDiscard;
  /* 0x33e5 */ unsigned char FreeListDiscard;
  /* 0x33e6 */ unsigned char PfnBitMapsReady;
  /* 0x33e8 */ unsigned __int64 LastDecayHandUpdateTime;
  /* 0x33f0 */ struct _MI_LDW_WORK_CONTEXT LastChanceLdwContext;
  /* 0x3440 */ unsigned __int64 AvailableEventsLock;
  /* 0x3448 */ struct _MI_AVAILABLE_PAGE_WAIT_STATES AvailablePageWaitStates[3];
  /* 0x34c0 */ volatile unsigned __int64 TransitionPrivatePages;
  /* 0x34c8 */ struct _RTL_BITMAP_EX LargePfnBitMap[2];
  /* 0x34e8 */ struct _MI_FREE_LARGE_PAGE_LIST* LargePageListHeads;
  /* 0x34f0 */ volatile char* MediumPagesOnFreeZeroList;
  /* 0x34f8 */ struct _RTL_BITMAP_EX LargePageRebuildCandidates;
  /* 0x3508 */ volatile short* LargePagesOnFreeZeroList;
  /* 0x3510 */ volatile long HugePageRebuildCandidatesExist;
  /* 0x3514 */ volatile long ProcessLargePageCacheLock;
  /* 0x3518 */ struct _LIST_ENTRY ProcessLargePageCacheLinks;
  /* 0x3528 */ unsigned long ProcessLargePageCachePeriodicCount;
  /* 0x3530 */ struct _KEVENT LargePageCandidatesExistEvent;
  /* 0x3548 */ unsigned __int64 LowMemoryConfiguredThreshold;
  /* 0x3550 */ unsigned __int64 HighMemoryConfiguredThreshold;
  /* 0x3558 */ unsigned __int64 LowMemoryThreshold;
  /* 0x3560 */ unsigned __int64 HighMemoryThreshold;
  /* 0x3568 */ struct _RTL_BITMAP_EX SlabPfnBitMap[2];
  /* 0x3588 */ unsigned char SlabPagesNotAvailable[7];
  /* 0x3590 */ void* HugePfnLists;
  /* 0x3598 */ unsigned __int64 AvailableHugeIoRanges;
  /* 0x35a0 */ unsigned __int64 SlabEntriesDemoted;
  /* 0x35a8 */ volatile long SlabDemoteInProgress;
  /* 0x35ac */ unsigned long SlabTypeAcquiresCharges;
  /* 0x35b0 */ unsigned __int64 DriverPageCount;
  /* 0x35b8 */ unsigned __int64 DriverLastPage;
  /* 0x35c0 */ unsigned __int64 DriverNonSlabAttempted;
  /* 0x35c8 */ unsigned __int64 DriverSlabLastFailTime;
  /* 0x35d0 */ unsigned __int64 MdlPagesByListsTotal;
  /* 0x35d8 */ unsigned __int64 MdlPagesByListsFromSlab;
  /* 0x35e0 */ unsigned __int64 MdlPagesByListsSlabNotEligible;
  /* 0x35e8 */ unsigned __int64 MdlPagesPreferContiguousSlabEligible;
  /* 0x35f0 */ unsigned __int64 MdlPagesPreferContiguousFromSlab;
  /* 0x35f8 */ unsigned __int64 MdlSlabPagesFreeZeroedTotal;
  /* 0x3600 */ unsigned long MdlSlabPagesFreeZeroedBuckets[4];
  /* 0x3610 */ unsigned __int64 SystemPageTablePagesNoSlab;
  /* 0x3618 */ long __PADDING__[10];
} MI_PARTITION_PAGE_LISTS, *PMI_PARTITION_PAGE_LISTS; /* size: 0x3640 */

