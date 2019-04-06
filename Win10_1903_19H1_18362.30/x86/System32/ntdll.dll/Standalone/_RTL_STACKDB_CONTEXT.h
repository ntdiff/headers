typedef struct _RTL_HASH_TABLE
{
  /* 0x0000 */ unsigned long EntryCount;
  struct /* bitfield */
  {
    /* 0x0004 */ unsigned long MaskBitCount : 5; /* bit position: 0 */
    /* 0x0004 */ unsigned long BucketCount : 27; /* bit position: 5 */
  }; /* bitfield */
  /* 0x0008 */ struct _SINGLE_LIST_ENTRY* Buckets;
} RTL_HASH_TABLE, *PRTL_HASH_TABLE; /* size: 0x000c */

typedef struct _RTL_SRWLOCK
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
} RTL_SRWLOCK, *PRTL_SRWLOCK; /* size: 0x0004 */

typedef struct _RTL_STACKDB_CONTEXT
{
  /* 0x0000 */ struct _RTL_HASH_TABLE StackSegmentTable;
  /* 0x000c */ struct _RTL_HASH_TABLE StackEntryTable;
  /* 0x0018 */ struct _RTL_SRWLOCK StackEntryTableLock;
  /* 0x001c */ struct _RTL_SRWLOCK SegmentTableLock;
  /* 0x0020 */ void* Allocate /* function */;
  /* 0x0024 */ void* Free /* function */;
  /* 0x0028 */ void* AllocatorContext;
} RTL_STACKDB_CONTEXT, *PRTL_STACKDB_CONTEXT; /* size: 0x002c */

