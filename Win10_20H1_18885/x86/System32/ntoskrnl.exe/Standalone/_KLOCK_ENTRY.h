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

typedef struct _KLOCK_ENTRY_LOCK_STATE
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long CrossThreadReleasable : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Busy : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Reserved : 29; /* bit position: 2 */
      /* 0x0000 */ unsigned long InTree : 1; /* bit position: 31 */
    }; /* bitfield */
    /* 0x0000 */ void* LockState;
  }; /* size: 0x0004 */
  union
  {
    /* 0x0004 */ void* SessionState;
    /* 0x0004 */ unsigned long SessionId;
  }; /* size: 0x0004 */
} KLOCK_ENTRY_LOCK_STATE, *PKLOCK_ENTRY_LOCK_STATE; /* size: 0x0008 */

typedef struct _RTL_RB_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
  union
  {
    /* 0x0004 */ unsigned char Encoded : 1; /* bit position: 0 */
    /* 0x0004 */ struct _RTL_BALANCED_NODE* Min;
  }; /* size: 0x0004 */
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0008 */

typedef union _KLOCK_ENTRY_BOOST_BITMAP
{
  union
  {
    /* 0x0000 */ unsigned long AllFields;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long AllBoosts : 17; /* bit position: 0 */
      /* 0x0000 */ unsigned long Reserved : 15; /* bit position: 17 */
    }; /* bitfield */
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned short CpuBoostsBitmap : 15; /* bit position: 0 */
        /* 0x0000 */ unsigned short IoBoost : 1; /* bit position: 15 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0002 */ unsigned short IoQoSBoost : 1; /* bit position: 0 */
        /* 0x0002 */ unsigned short IoNormalPriorityWaiterCount : 8; /* bit position: 1 */
        /* 0x0002 */ unsigned short IoQoSWaiterCount : 7; /* bit position: 9 */
      }; /* bitfield */
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
} KLOCK_ENTRY_BOOST_BITMAP, *PKLOCK_ENTRY_BOOST_BITMAP; /* size: 0x0004 */

typedef struct _KLOCK_ENTRY
{
  union
  {
    /* 0x0000 */ struct _RTL_BALANCED_NODE TreeNode;
    /* 0x0000 */ struct _SINGLE_LIST_ENTRY FreeListEntry;
  }; /* size: 0x000c */
  union
  {
    /* 0x000c */ unsigned long EntryFlags;
    struct
    {
      /* 0x000c */ unsigned char EntryOffset;
      union
      {
        /* 0x000d */ unsigned char ThreadLocalFlags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x000d */ unsigned char WaitingBit : 1; /* bit position: 0 */
            /* 0x000d */ unsigned char Spare0 : 7; /* bit position: 1 */
          }; /* bitfield */
          union
          {
            /* 0x000e */ unsigned char AcquiredByte;
            struct
            {
              /* 0x000e */ unsigned char AcquiredBit : 1; /* bit position: 0 */
              union
              {
                /* 0x000f */ unsigned char CrossThreadFlags;
                struct /* bitfield */
                {
                  /* 0x000f */ unsigned char HeadNodeBit : 1; /* bit position: 0 */
                  /* 0x000f */ unsigned char IoPriorityBit : 1; /* bit position: 1 */
                  /* 0x000f */ unsigned char IoQoSWaiter : 1; /* bit position: 2 */
                  /* 0x000f */ unsigned char Spare1 : 5; /* bit position: 3 */
                }; /* bitfield */
              }; /* size: 0x0001 */
            }; /* size: 0x0002 */
          }; /* size: 0x0002 */
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    struct /* bitfield */
    {
      /* 0x000c */ unsigned long StaticState : 8; /* bit position: 0 */
      /* 0x000c */ unsigned long AllFlags : 24; /* bit position: 8 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  union
  {
    /* 0x0010 */ struct _KLOCK_ENTRY_LOCK_STATE LockState;
    /* 0x0010 */ void* volatile LockUnsafe;
    struct
    {
      /* 0x0010 */ volatile unsigned char CrossThreadReleasableAndBusyByte;
      /* 0x0011 */ unsigned char Reserved[2];
      /* 0x0013 */ volatile unsigned char InTreeByte;
      union
      {
        /* 0x0014 */ void* SessionState;
        /* 0x0014 */ unsigned long SessionId;
      }; /* size: 0x0004 */
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
  union
  {
    struct
    {
      /* 0x0018 */ struct _RTL_RB_TREE OwnerTree;
      /* 0x0020 */ struct _RTL_RB_TREE WaiterTree;
    }; /* size: 0x0010 */
    /* 0x0018 */ char CpuPriorityKey;
  }; /* size: 0x0010 */
  /* 0x0028 */ unsigned long EntryLock;
  /* 0x002c */ union _KLOCK_ENTRY_BOOST_BITMAP BoostBitmap;
} KLOCK_ENTRY, *PKLOCK_ENTRY; /* size: 0x0030 */

