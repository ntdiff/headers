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

typedef struct _MMSESSION
{
  /* 0x0000 */ struct _EX_PUSH_LOCK SystemSpaceViewLock;
  /* 0x0008 */ struct _EX_PUSH_LOCK* SystemSpaceViewLockPointer;
  /* 0x0010 */ struct _RTL_AVL_TREE ViewRoot;
  /* 0x0018 */ unsigned long ViewCount;
  /* 0x001c */ unsigned long BitmapFailures;
} MMSESSION, *PMMSESSION; /* size: 0x0020 */

typedef struct _MI_SESSION_STATE
{
  /* 0x0000 */ struct _MMSESSION SystemSession;
  /* 0x0020 */ unsigned long DetachTimeStamp;
  /* 0x0024 */ unsigned char CodePageEdited;
  /* 0x0028 */ unsigned long* DynamicPoolBitBuffer;
  /* 0x0030 */ unsigned __int64* DynamicVaBitBuffer;
  /* 0x0038 */ unsigned __int64 DynamicVaBitBufferPages;
  /* 0x0040 */ void* DynamicVaStart;
  /* 0x0048 */ void* ImageVaStart;
  /* 0x0050 */ unsigned long* DynamicPtesBitBuffer;
  /* 0x0058 */ struct _EX_PUSH_LOCK IdLock;
  /* 0x0060 */ struct _EPROCESS* LeaderProcess;
  /* 0x0068 */ struct _EX_PUSH_LOCK InitializeLock;
  /* 0x0070 */ struct _MMWSL_INSTANCE* WorkingSetList;
  /* 0x0078 */ void* SessionBase;
  /* 0x0080 */ void* SessionCore;
} MI_SESSION_STATE, *PMI_SESSION_STATE; /* size: 0x0088 */

