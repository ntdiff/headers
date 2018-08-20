typedef struct _RTL_SRWLOCK
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
} RTL_SRWLOCK, *PRTL_SRWLOCK; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _HEAP_LFH_SUBSEGMENT_OWNER
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char IsBucket : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned char Spare0 : 7; /* bit position: 1 */
  }; /* bitfield */
  /* 0x0001 */ unsigned char BucketIndex;
  union
  {
    /* 0x0002 */ unsigned char SlotCount;
    /* 0x0002 */ unsigned char SlotIndex;
  }; /* size: 0x0001 */
  /* 0x0003 */ unsigned char Spare1;
  /* 0x0008 */ unsigned __int64 AvailableSubsegmentCount;
  /* 0x0010 */ struct _RTL_SRWLOCK Lock;
  /* 0x0018 */ struct _LIST_ENTRY AvailableSubsegmentList;
  /* 0x0028 */ struct _LIST_ENTRY FullSubsegmentList;
} HEAP_LFH_SUBSEGMENT_OWNER, *PHEAP_LFH_SUBSEGMENT_OWNER; /* size: 0x0038 */

typedef struct _HEAP_LFH_AFFINITY_SLOT
{
  /* 0x0000 */ struct _HEAP_LFH_SUBSEGMENT_OWNER State;
} HEAP_LFH_AFFINITY_SLOT, *PHEAP_LFH_AFFINITY_SLOT; /* size: 0x0038 */

