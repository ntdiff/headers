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
  /* 0x0010 */ unsigned __int64 Lock;
  /* 0x0018 */ struct _LIST_ENTRY AvailableSubsegmentList;
  /* 0x0028 */ struct _LIST_ENTRY FullSubsegmentList;
} HEAP_LFH_SUBSEGMENT_OWNER, *PHEAP_LFH_SUBSEGMENT_OWNER; /* size: 0x0038 */

typedef struct _HEAP_LFH_FAST_REF
{
  union
  {
    /* 0x0000 */ void* Target;
    /* 0x0000 */ unsigned __int64 Value;
    /* 0x0000 */ unsigned __int64 RefCount : 12; /* bit position: 0 */
  }; /* size: 0x0008 */
} HEAP_LFH_FAST_REF, *PHEAP_LFH_FAST_REF; /* size: 0x0008 */

typedef struct _HEAP_LFH_AFFINITY_SLOT
{
  /* 0x0000 */ struct _HEAP_LFH_SUBSEGMENT_OWNER State;
  /* 0x0038 */ struct _HEAP_LFH_FAST_REF ActiveSubsegment;
} HEAP_LFH_AFFINITY_SLOT, *PHEAP_LFH_AFFINITY_SLOT; /* size: 0x0040 */

