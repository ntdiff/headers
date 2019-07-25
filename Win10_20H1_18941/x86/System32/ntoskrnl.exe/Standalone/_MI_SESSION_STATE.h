typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long Shared : 28; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0004 */

typedef struct _RTL_AVL_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
} RTL_AVL_TREE, *PRTL_AVL_TREE; /* size: 0x0004 */

typedef struct _MMSESSION
{
  /* 0x0000 */ struct _EX_PUSH_LOCK SystemSpaceViewLock;
  /* 0x0004 */ struct _EX_PUSH_LOCK* SystemSpaceViewLockPointer;
  /* 0x0008 */ struct _RTL_AVL_TREE ViewRoot;
  /* 0x000c */ unsigned long ViewCount;
  /* 0x0010 */ unsigned long BitmapFailures;
} MMSESSION, *PMMSESSION; /* size: 0x0014 */

typedef struct _MI_SESSION_STATE
{
  /* 0x0000 */ struct _MMSESSION SystemSession;
  /* 0x0014 */ unsigned char CodePageEdited;
  /* 0x0018 */ long VaReferenceCount[1024];
  /* 0x1018 */ unsigned long* DynamicPtesBitBuffer;
  /* 0x101c */ struct _EX_PUSH_LOCK IdLock;
  /* 0x1020 */ struct _EPROCESS* LeaderProcess;
  /* 0x1024 */ struct _EX_PUSH_LOCK InitializeLock;
  /* 0x1028 */ struct _MMWSL_INSTANCE* WorkingSetList;
  /* 0x102c */ void* SessionBase;
  /* 0x1030 */ void* SessionCore;
} MI_SESSION_STATE, *PMI_SESSION_STATE; /* size: 0x1034 */

