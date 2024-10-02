typedef union _KLOCK_ENTRY_LOCK_STATE
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 CrossThreadReleasable : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Busy : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Reserved : 61; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 InTree : 1; /* bit position: 63 */
    }; /* bitfield */
    /* 0x0000 */ void* LockState;
  }; /* size: 0x0008 */
} KLOCK_ENTRY_LOCK_STATE, *PKLOCK_ENTRY_LOCK_STATE; /* size: 0x0008 */

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

typedef struct _RTL_RB_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
  union
  {
    /* 0x0008 */ unsigned char Encoded : 1; /* bit position: 0 */
    /* 0x0008 */ struct _RTL_BALANCED_NODE* Min;
  }; /* size: 0x0008 */
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0010 */

typedef union _KLOCK_ENTRY_BOOST_BITMAP
{
  union
  {
    /* 0x0000 */ unsigned __int64 AllFields;
    struct
    {
      /* 0x0000 */ unsigned long AllBoosts;
      /* 0x0004 */ unsigned long WaiterCounts;
    }; /* size: 0x0008 */
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long CpuBoostsBitmap : 30; /* bit position: 0 */
        /* 0x0000 */ unsigned long IoBoost : 1; /* bit position: 30 */
        /* 0x0000 */ unsigned long IoQoSBoost : 1; /* bit position: 31 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0004 */ unsigned long IoNormalPriorityWaiterCount : 8; /* bit position: 0 */
        /* 0x0004 */ unsigned long IoQoSWaiterCount : 7; /* bit position: 8 */
      }; /* bitfield */
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} KLOCK_ENTRY_BOOST_BITMAP, *PKLOCK_ENTRY_BOOST_BITMAP; /* size: 0x0008 */

typedef struct _KLOCK_ENTRY
{
  union
  {
    /* 0x0000 */ union _KLOCK_ENTRY_LOCK_STATE LockState;
    /* 0x0000 */ void* volatile LockUnsafe;
    struct
    {
      /* 0x0000 */ volatile unsigned char CrossThreadReleasableAndBusyByte;
      /* 0x0001 */ unsigned char Reserved[6];
      /* 0x0007 */ volatile unsigned char InTreeByte;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
  union
  {
    /* 0x0008 */ unsigned long EntryFlags;
    /* 0x0008 */ unsigned char StaticByte;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned char EntryIndex : 6; /* bit position: 0 */
        /* 0x0008 */ unsigned char PreWaiting : 1; /* bit position: 6 */
        /* 0x0008 */ unsigned char UserModeBit : 1; /* bit position: 7 */
      }; /* bitfield */
      /* 0x0009 */ unsigned char WaitingByte;
      /* 0x000a */ unsigned char AcquiredByte;
      union
      {
        /* 0x000b */ unsigned char CrossThreadFlags;
        struct /* bitfield */
        {
          /* 0x000b */ unsigned char HeadNodeBit : 1; /* bit position: 0 */
          /* 0x000b */ unsigned char IoPriorityBit : 1; /* bit position: 1 */
          /* 0x000b */ unsigned char IoQoSWaiter : 1; /* bit position: 2 */
          /* 0x000b */ unsigned char Spare1 : 5; /* bit position: 3 */
        }; /* bitfield */
      }; /* size: 0x0001 */
    }; /* size: 0x0004 */
    struct /* bitfield */
    {
      /* 0x0008 */ unsigned long StaticState : 8; /* bit position: 0 */
      /* 0x0008 */ unsigned long AllFlags : 24; /* bit position: 8 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x000c */ unsigned long SpareFlags;
  /* 0x0010 */ struct _RTL_BALANCED_NODE TreeNode;
  union
  {
    struct
    {
      /* 0x0028 */ struct _RTL_RB_TREE OwnerTree;
      /* 0x0038 */ struct _RTL_RB_TREE WaiterTree;
    }; /* size: 0x0020 */
    /* 0x0028 */ char CpuPriorityKey;
  }; /* size: 0x0020 */
  /* 0x0048 */ unsigned __int64 EntryLock;
  /* 0x0050 */ union _KLOCK_ENTRY_BOOST_BITMAP BoostBitmap;
} KLOCK_ENTRY, *PKLOCK_ENTRY; /* size: 0x0058 */

typedef struct _KLOCK_ENTRIES
{
  /* 0x0000 */ struct _KTHREAD* Thread;
  /* 0x0008 */ unsigned short AvailableEntryBitmap;
  /* 0x000a */ unsigned short OrphanedEntryBitmap;
  /* 0x000c */ unsigned char EntryCount;
  /* 0x000d */ unsigned char Padding0[3];
  /* 0x0010 */ struct _KLOCK_ENTRY Entries[1];
} KLOCK_ENTRIES, *PKLOCK_ENTRIES; /* size: 0x0068 */

