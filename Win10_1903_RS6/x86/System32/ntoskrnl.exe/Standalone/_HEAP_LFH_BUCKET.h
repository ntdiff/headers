typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

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
  /* 0x0004 */ unsigned long AvailableSubsegmentCount;
  /* 0x0008 */ unsigned long Lock;
  /* 0x000c */ struct _LIST_ENTRY AvailableSubsegmentList;
  /* 0x0014 */ struct _LIST_ENTRY FullSubsegmentList;
} HEAP_LFH_SUBSEGMENT_OWNER, *PHEAP_LFH_SUBSEGMENT_OWNER; /* size: 0x001c */

typedef struct _HEAP_LFH_BUCKET
{
  /* 0x0000 */ struct _HEAP_LFH_SUBSEGMENT_OWNER State;
  /* 0x001c */ unsigned long TotalBlockCount;
  /* 0x0020 */ unsigned long TotalSubsegmentCount;
  /* 0x0024 */ unsigned long ReciprocalBlockSize;
  /* 0x0028 */ unsigned char Shift;
  /* 0x0029 */ unsigned char ContentionCount;
  /* 0x002c */ unsigned long AffinityMappingLock;
  /* 0x0030 */ unsigned char* ProcAffinityMapping;
  /* 0x0034 */ struct _HEAP_LFH_AFFINITY_SLOT** AffinitySlots;
} HEAP_LFH_BUCKET, *PHEAP_LFH_BUCKET; /* size: 0x0038 */

