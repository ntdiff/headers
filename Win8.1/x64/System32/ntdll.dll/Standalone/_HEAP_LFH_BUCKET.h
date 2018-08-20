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
  /* 0x0000 */ unsigned char BucketIndex;
  /* 0x0001 */ unsigned char IsBucket;
  union
  {
    /* 0x0002 */ unsigned short SlotIndex;
    struct
    {
      /* 0x0002 */ unsigned char AffinitySlotMask;
      /* 0x0003 */ unsigned char Spare;
    }; /* size: 0x0002 */
  }; /* size: 0x0002 */
  /* 0x0008 */ unsigned __int64 AvailableSubsegmentCount;
  /* 0x0010 */ struct _RTL_SRWLOCK Lock;
  /* 0x0018 */ struct _LIST_ENTRY AvailableSubsegmentList;
  /* 0x0028 */ struct _LIST_ENTRY FullSubsegmentList;
} HEAP_LFH_SUBSEGMENT_OWNER, *PHEAP_LFH_SUBSEGMENT_OWNER; /* size: 0x0038 */

typedef struct _HEAP_LFH_BUCKET
{
  /* 0x0000 */ struct _HEAP_LFH_SUBSEGMENT_OWNER State;
  /* 0x0038 */ struct _HEAP_LFH_AFFINITY_SLOT* AffinitySlots;
  /* 0x0040 */ unsigned __int64 TotalBlockCount;
  /* 0x0048 */ unsigned __int64 TotalSubsegmentCount;
} HEAP_LFH_BUCKET, *PHEAP_LFH_BUCKET; /* size: 0x0050 */

