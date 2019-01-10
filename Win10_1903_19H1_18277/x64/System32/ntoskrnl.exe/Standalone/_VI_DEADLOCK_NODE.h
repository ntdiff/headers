typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _VI_DEADLOCK_NODE
{
  /* 0x0000 */ struct _VI_DEADLOCK_NODE* Parent;
  /* 0x0008 */ struct _LIST_ENTRY ChildrenList;
  /* 0x0018 */ struct _LIST_ENTRY SiblingsList;
  union
  {
    /* 0x0028 */ struct _LIST_ENTRY ResourceList;
    /* 0x0028 */ struct _LIST_ENTRY FreeListEntry;
  }; /* size: 0x0010 */
  /* 0x0038 */ struct _VI_DEADLOCK_RESOURCE* Root;
  /* 0x0040 */ struct _VI_DEADLOCK_THREAD* ThreadEntry;
  union
  {
    union
    {
      struct /* bitfield */
      {
        /* 0x0048 */ unsigned long Active : 1; /* bit position: 0 */
        /* 0x0048 */ unsigned long OnlyTryAcquireUsed : 1; /* bit position: 1 */
        /* 0x0048 */ unsigned long ReleasedOutOfOrder : 1; /* bit position: 2 */
        /* 0x0048 */ unsigned long SequenceNumber : 29; /* bit position: 3 */
      }; /* bitfield */
      /* 0x0048 */ unsigned long Whole;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u1;
  /* 0x004c */ long ChildrenCount;
  /* 0x0050 */ void* StackTrace[8];
  /* 0x0090 */ void* ParentStackTrace[8];
} VI_DEADLOCK_NODE, *PVI_DEADLOCK_NODE; /* size: 0x00d0 */

