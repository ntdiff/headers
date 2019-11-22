typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

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

typedef struct _MM_SYSTEM_PAGE_COUNTS
{
  /* 0x0000 */ unsigned long SystemCodePage;
  /* 0x0004 */ unsigned long SystemDriverPage;
  /* 0x0008 */ long TotalSystemCodePages;
  /* 0x000c */ long TotalSystemDriverPages;
} MM_SYSTEM_PAGE_COUNTS, *PMM_SYSTEM_PAGE_COUNTS; /* size: 0x0010 */

typedef struct _RTL_AVL_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
} RTL_AVL_TREE, *PRTL_AVL_TREE; /* size: 0x0004 */

typedef struct _MI_SYSTEM_IMAGE_STATE
{
  /* 0x0000 */ struct _LIST_ENTRY FixupList;
  /* 0x0008 */ struct _EX_PUSH_LOCK LoadLock;
  /* 0x000c */ struct _ETHREAD* LoadLockOwner;
  /* 0x0010 */ unsigned long LoadLockCount;
  /* 0x0014 */ volatile long FixupLock;
  /* 0x0018 */ unsigned char FirstLoadEver;
  /* 0x0019 */ unsigned char LargePageAll;
  /* 0x001c */ unsigned long LastPage;
  /* 0x0020 */ struct _LIST_ENTRY LargePageList;
  /* 0x0028 */ struct _LIST_ENTRY StrongCodeLoadFailureList;
  /* 0x0030 */ struct _KLDR_DATA_TABLE_ENTRY* SystemBase[2];
  /* 0x0038 */ struct _KLDR_DATA_TABLE_ENTRY* BeingDeleted;
  /* 0x003c */ struct _EX_PUSH_LOCK MappingRangesPushLock;
  /* 0x0040 */ struct _MI_DRIVER_VA* MappingRanges[2];
  /* 0x0048 */ unsigned long PageCount;
  /* 0x004c */ struct _MM_SYSTEM_PAGE_COUNTS PageCounts;
  /* 0x005c */ struct _EX_PUSH_LOCK CollidedLock;
  /* 0x0060 */ struct _RTL_AVL_TREE ImageTree;
} MI_SYSTEM_IMAGE_STATE, *PMI_SYSTEM_IMAGE_STATE; /* size: 0x0064 */

