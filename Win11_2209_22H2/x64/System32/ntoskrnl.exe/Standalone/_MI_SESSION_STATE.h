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

typedef struct _MI_SESSION_STATE
{
  /* 0x0000 */ struct _EX_PUSH_LOCK IdLock;
  /* 0x0008 */ struct _EPROCESS* LeaderProcess;
  /* 0x0010 */ struct _EX_PUSH_LOCK InitializeLock;
  /* 0x0018 */ void* SessionBase;
  /* 0x0020 */ struct _RTL_AVL_TREE SessionIdNodes;
  /* 0x0028 */ void* ImageVaStart;
} MI_SESSION_STATE, *PMI_SESSION_STATE; /* size: 0x0030 */

