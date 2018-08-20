typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef union _PSP_CPU_SHARE_CAPTURED_WEIGHT_DATA
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long CapturedCpuShareWeight;
      /* 0x0004 */ unsigned long CapturedTotalWeight;
    }; /* size: 0x0008 */
    /* 0x0000 */ __int64 CombinedData;
  }; /* size: 0x0008 */
} PSP_CPU_SHARE_CAPTURED_WEIGHT_DATA, *PPSP_CPU_SHARE_CAPTURED_WEIGHT_DATA; /* size: 0x0008 */

typedef struct _PS_PER_CPU_QUOTA_CACHE_AWARE
{
  /* 0x0000 */ struct _LIST_ENTRY SortedListEntry;
  /* 0x0010 */ struct _LIST_ENTRY IdleOnlyListHead;
  /* 0x0020 */ unsigned __int64 CycleBaseAllowance;
  /* 0x0028 */ __int64 CyclesRemaining;
  /* 0x0030 */ unsigned long CurrentGeneration;
  /* 0x0034 */ long __PADDING__[3];
} PS_PER_CPU_QUOTA_CACHE_AWARE, *PPS_PER_CPU_QUOTA_CACHE_AWARE; /* size: 0x0040 */

typedef struct _PS_CPU_QUOTA_BLOCK
{
  union
  {
    struct
    {
      /* 0x0000 */ struct _LIST_ENTRY ListEntry;
      /* 0x0010 */ unsigned long SessionId;
      /* 0x0014 */ unsigned long CpuShareWeight;
      /* 0x0018 */ union _PSP_CPU_SHARE_CAPTURED_WEIGHT_DATA CapturedWeightData;
      union
      {
        struct /* bitfield */
        {
          /* 0x0020 */ unsigned long DuplicateInputMarker : 1; /* bit position: 0 */
          /* 0x0020 */ unsigned long Reserved : 31; /* bit position: 1 */
        }; /* bitfield */
        /* 0x0020 */ long MiscFlags;
      }; /* size: 0x0004 */
    }; /* size: 0x0024 */
    struct
    {
      /* 0x0000 */ unsigned __int64 BlockCurrentGenerationLock;
      /* 0x0008 */ unsigned __int64 CyclesAccumulated;
      /* 0x0040 */ unsigned __int64 CycleCredit;
      /* 0x0048 */ unsigned long BlockCurrentGeneration;
      /* 0x004c */ unsigned long CpuCyclePercent;
      /* 0x0050 */ unsigned char CyclesFinishedForCurrentGeneration;
      /* 0x0080 */ struct _PS_PER_CPU_QUOTA_CACHE_AWARE Cpu[256];
    }; /* size: 0x4021 */
  }; /* size: 0x4021 */
} PS_CPU_QUOTA_BLOCK, *PPS_CPU_QUOTA_BLOCK; /* size: 0x4080 */

