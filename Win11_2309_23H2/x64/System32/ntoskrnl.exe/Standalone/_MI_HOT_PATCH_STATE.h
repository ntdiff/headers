typedef struct _RTL_AVL_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
} RTL_AVL_TREE, *PRTL_AVL_TREE; /* size: 0x0008 */

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

typedef struct _MI_HOT_PATCH_PROCESS_CONTEXT
{
  /* 0x0000 */ struct _EPROCESS* Process;
  /* 0x0008 */ void* ProcessHandle;
  /* 0x0010 */ unsigned long TbFlushStamp;
  /* 0x0014 */ long __PADDING__[1];
} MI_HOT_PATCH_PROCESS_CONTEXT, *PMI_HOT_PATCH_PROCESS_CONTEXT; /* size: 0x0018 */

typedef struct _MI_HOT_PATCH_STATE
{
  /* 0x0000 */ struct _RTL_AVL_TREE UserSidPatchLists;
  /* 0x0008 */ struct _RTL_AVL_TREE GlobalHotPatchList;
  /* 0x0010 */ struct _RTL_AVL_TREE PreviouslyRegisteredHotPatchList;
  /* 0x0018 */ struct _RTL_AVL_TREE SecureImageActivePatches;
  /* 0x0020 */ struct _EX_PUSH_LOCK HotPatchListLock;
  /* 0x0028 */ struct _MI_HOT_PATCH_PROCESS_CONTEXT HotPatchProcessContext;
  /* 0x0040 */ struct _KLDR_DATA_TABLE_ENTRY* InProgressPatchTableEntry;
  /* 0x0048 */ struct _KLDR_DATA_TABLE_ENTRY* InProgressBaseTableEntry;
  /* 0x0050 */ volatile char ReadyForPatchOperations;
  /* 0x0054 */ unsigned long HotPatchReserveSize;
  struct /* bitfield */
  {
    /* 0x0058 */ unsigned long HotPatchingEnabled : 1; /* bit position: 0 */
    /* 0x0058 */ unsigned long EnforcePatchSequenceNumbers : 1; /* bit position: 1 */
    /* 0x0058 */ unsigned long HotPatchTestExecuted : 1; /* bit position: 2 */
    /* 0x0058 */ unsigned long Spare : 29; /* bit position: 3 */
  }; /* bitfield */
  /* 0x005c */ long __PADDING__[1];
} MI_HOT_PATCH_STATE, *PMI_HOT_PATCH_STATE; /* size: 0x0060 */

