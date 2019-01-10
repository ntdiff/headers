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

typedef struct _MIPFNBLINK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Blink : 36; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 NodeBlinkHigh : 20; /* bit position: 36 */
      /* 0x0000 */ unsigned __int64 TbFlushStamp : 4; /* bit position: 56 */
      /* 0x0000 */ unsigned __int64 Unused : 2; /* bit position: 60 */
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
            /* 0x0000 */ unsigned __int64 Flink : 36; /* bit position: 0 */
            /* 0x0000 */ unsigned __int64 NodeFlinkHigh : 28; /* bit position: 36 */
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
  /* 0x0024 */ unsigned short NodeBlinkLow;
  struct /* bitfield */
  {
    /* 0x0026 */ unsigned char Unused : 4; /* bit position: 0 */
    /* 0x0026 */ unsigned char Unused2 : 4; /* bit position: 4 */
  }; /* bitfield */
  union
  {
    /* 0x0027 */ unsigned char ViewCount;
    /* 0x0027 */ unsigned char NodeFlinkLow;
  }; /* size: 0x0001 */
  union
  {
    union
    {
      struct /* bitfield */
      {
        /* 0x0028 */ unsigned __int64 PteFrame : 36; /* bit position: 0 */
        /* 0x0028 */ unsigned __int64 Channel : 2; /* bit position: 36 */
        /* 0x0028 */ unsigned __int64 Unused1 : 1; /* bit position: 38 */
        /* 0x0028 */ unsigned __int64 Unused2 : 1; /* bit position: 39 */
        /* 0x0028 */ unsigned __int64 Partition : 10; /* bit position: 40 */
        /* 0x0028 */ unsigned __int64 Spare : 2; /* bit position: 50 */
        /* 0x0028 */ unsigned __int64 FileOnly : 1; /* bit position: 52 */
        /* 0x0028 */ unsigned __int64 PfnExists : 1; /* bit position: 53 */
        /* 0x0028 */ unsigned __int64 PageIdentity : 3; /* bit position: 54 */
        /* 0x0028 */ unsigned __int64 PrototypePte : 1; /* bit position: 57 */
        /* 0x0028 */ unsigned __int64 PageColor : 6; /* bit position: 58 */
      }; /* bitfield */
      /* 0x0028 */ unsigned __int64 EntireField;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u4;
} MMPFN, *PMMPFN; /* size: 0x0030 */

