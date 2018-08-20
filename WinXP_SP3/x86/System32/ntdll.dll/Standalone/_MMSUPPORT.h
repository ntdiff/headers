typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct // _TAG_UNNAMED_4
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _MMSUPPORT_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned int SessionSpace : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned int BeingTrimmed : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned int SessionLeader : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned int TrimHard : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned int WorkingSetHard : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned int AddressSpaceBeingDeleted : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned int Available : 10; /* bit position: 6 */
    /* 0x0000 */ unsigned int AllowWorkingSetAdjustment : 8; /* bit position: 16 */
    /* 0x0000 */ unsigned int MemoryPriority : 8; /* bit position: 24 */
  }; /* bitfield */
} MMSUPPORT_FLAGS, *PMMSUPPORT_FLAGS; /* size: 0x0004 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _MMSUPPORT
{
  /* 0x0000 */ union _LARGE_INTEGER LastTrimTime;
  /* 0x0008 */ struct _MMSUPPORT_FLAGS Flags;
  /* 0x000c */ unsigned long PageFaultCount;
  /* 0x0010 */ unsigned long PeakWorkingSetSize;
  /* 0x0014 */ unsigned long WorkingSetSize;
  /* 0x0018 */ unsigned long MinimumWorkingSetSize;
  /* 0x001c */ unsigned long MaximumWorkingSetSize;
  /* 0x0020 */ struct _MMWSL* VmWorkingSetList;
  /* 0x0024 */ struct _LIST_ENTRY WorkingSetExpansionLinks;
  /* 0x002c */ unsigned long Claim;
  /* 0x0030 */ unsigned long NextEstimationSlot;
  /* 0x0034 */ unsigned long NextAgingSlot;
  /* 0x0038 */ unsigned long EstimatedAvailable;
  /* 0x003c */ unsigned long GrowthSinceLastEstimate;
} MMSUPPORT, *PMMSUPPORT; /* size: 0x0040 */

