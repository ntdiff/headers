typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

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

typedef struct _MI_SPECIAL_PURPOSE_MEMORY_STATE
{
  union
  {
    struct
    {
      /* 0x0000 */ struct _LIST_ENTRY TypesList;
      /* 0x0010 */ struct _MI_SPECIAL_PURPOSE_MEMORY_TYPE_STATE* TypeStateForCaching;
    }; /* size: 0x0018 */
    struct
    {
      /* 0x0000 */ struct _EPARTITION* RegularMemoryParentPartitionObject;
      /* 0x0008 */ void* SpecialPurposeMemoryParentHandle;
      /* 0x0010 */ unsigned __int64 Attributes[4];
      /* 0x0030 */ struct _EX_PUSH_LOCK Lock;
    }; /* size: 0x0038 */
  }; /* size: 0x0038 */
} MI_SPECIAL_PURPOSE_MEMORY_STATE, *PMI_SPECIAL_PURPOSE_MEMORY_STATE; /* size: 0x0038 */

