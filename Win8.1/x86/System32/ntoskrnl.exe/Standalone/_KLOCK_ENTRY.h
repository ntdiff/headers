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
      /* 0x0000 */ unsigned long Waiting : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Busy : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Spare : 29; /* bit position: 2 */
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
  /* 0x0004 */ struct _RTL_BALANCED_NODE* Min;
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0008 */

typedef struct _KLOCK_ENTRY
{
  union
  {
    /* 0x0000 */ struct _RTL_BALANCED_NODE TreeNode;
    /* 0x0000 */ struct _SINGLE_LIST_ENTRY FreeListEntry;
  }; /* size: 0x000c */
  union
  {
    /* 0x000c */ void* ThreadUnsafe;
    struct
    {
      /* 0x000c */ volatile unsigned char HeadNodeByte;
      /* 0x000d */ unsigned char Reserved1[2];
      /* 0x000f */ volatile unsigned char AcquiredByte;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
  union
  {
    /* 0x0010 */ struct _KLOCK_ENTRY_LOCK_STATE LockState;
    /* 0x0010 */ void* volatile LockUnsafe;
    struct
    {
      /* 0x0010 */ volatile unsigned char WaitingAndBusyByte;
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
  union
  {
    /* 0x002c */ unsigned short AllBoosts;
    struct /* bitfield */
    {
      /* 0x002c */ unsigned short IoBoost : 1; /* bit position: 0 */
      /* 0x002c */ unsigned short CpuBoostsBitmap : 15; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0002 */
  struct /* bitfield */
  {
    /* 0x002e */ unsigned short IoNormalPriorityWaiterCount : 15; /* bit position: 0 */
    /* 0x002e */ unsigned short IoPriorityBit : 1; /* bit position: 15 */
  }; /* bitfield */
} KLOCK_ENTRY, *PKLOCK_ENTRY; /* size: 0x0030 */

