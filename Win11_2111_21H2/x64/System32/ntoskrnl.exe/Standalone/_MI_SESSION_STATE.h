typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 Shared : 60; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0008 */

typedef struct _RTL_AVL_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
} RTL_AVL_TREE, *PRTL_AVL_TREE; /* size: 0x0008 */

typedef struct _MI_SYSTEM_VIEWS
{
  /* 0x0000 */ struct _EX_PUSH_LOCK SystemSpaceViewLock;
  /* 0x0008 */ struct _RTL_AVL_TREE ViewRoot;
  /* 0x0010 */ unsigned long ViewCount;
  /* 0x0014 */ long __PADDING__[1];
} MI_SYSTEM_VIEWS, *PMI_SYSTEM_VIEWS; /* size: 0x0018 */

typedef struct _MI_HUGE_SYSTEM_VIEW_HEAD
{
  /* 0x0000 */ struct _RTL_AVL_TREE ViewRoot;
  /* 0x0008 */ unsigned long ViewCount;
  /* 0x000c */ volatile long Lock;
} MI_HUGE_SYSTEM_VIEW_HEAD, *PMI_HUGE_SYSTEM_VIEW_HEAD; /* size: 0x0010 */

typedef struct _MI_SESSION_STATE
{
  /* 0x0000 */ struct _MI_SYSTEM_VIEWS SystemSession;
  /* 0x0018 */ unsigned char CodePageEdited;
  /* 0x0020 */ void* DynamicVaStart;
  /* 0x0028 */ void* ImageVaStart;
  /* 0x0030 */ struct _MI_HUGE_SYSTEM_VIEW_HEAD SystemViewBuckets[256];
  /* 0x1030 */ struct _EX_PUSH_LOCK IdLock;
  /* 0x1038 */ struct _EPROCESS* LeaderProcess;
  /* 0x1040 */ struct _EX_PUSH_LOCK InitializeLock;
  /* 0x1048 */ void* SessionBase;
  /* 0x1050 */ struct _RTL_AVL_TREE SessionIdNodes;
} MI_SESSION_STATE, *PMI_SESSION_STATE; /* size: 0x1058 */

