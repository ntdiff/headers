typedef struct _RTL_AVL_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
} RTL_AVL_TREE, *PRTL_AVL_TREE; /* size: 0x0004 */

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

typedef struct _MI_PAGELIST_STATE
{
  /* 0x0000 */ volatile long ActiveSpinLock;
  /* 0x0004 */ struct _RTL_AVL_TREE ActiveThreadTree;
  /* 0x0008 */ volatile long ActiveZeroSpinLock;
  /* 0x000c */ struct _RTL_AVL_TREE ActiveZeroThreadTree;
  /* 0x0010 */ struct _MMPFN LargePfnTemplate;
  /* 0x002c */ struct _MMPFN LargePfnBasePageTemplate;
  /* 0x0048 */ unsigned long NumberOfLargePageListHeads;
} MI_PAGELIST_STATE, *PMI_PAGELIST_STATE; /* size: 0x004c */

