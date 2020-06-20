typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef union _SLIST_HEADER
{
  union
  {
    /* 0x0000 */ unsigned __int64 Alignment;
    struct
    {
      /* 0x0000 */ struct _SINGLE_LIST_ENTRY Next;
      /* 0x0004 */ unsigned short Depth;
      /* 0x0006 */ unsigned short CpuId;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0008 */

typedef struct _CACHED_KSTACK_LIST
{
  /* 0x0000 */ union _SLIST_HEADER SListHead;
  /* 0x0008 */ long MinimumFree;
  /* 0x000c */ unsigned long Misses;
  /* 0x0010 */ unsigned long MissesLast;
  /* 0x0014 */ unsigned long AllStacksInUse;
} CACHED_KSTACK_LIST, *PCACHED_KSTACK_LIST; /* size: 0x0018 */

typedef struct _GROUP_AFFINITY
{
  /* 0x0000 */ unsigned long Mask;
  /* 0x0004 */ unsigned short Group;
  /* 0x0006 */ unsigned short Reserved[3];
} GROUP_AFFINITY, *PGROUP_AFFINITY; /* size: 0x000c */

typedef enum _MI_WRITE_TYPES
{
  WriteTypeCached = 0,
  WriteTypeNonTemporal = 1,
  WriteTypeMaximum = 2,
} MI_WRITE_TYPES, *PMI_WRITE_TYPES;

typedef struct _MI_WRITE_CALIBRATION
{
  /* 0x0000 */ unsigned long MaximumNumberProcessors;
  /* 0x0004 */ enum _MI_WRITE_TYPES OptimalWriteType;
  /* 0x0008 */ unsigned long PerProcessorNumberOfBytes;
  /* 0x000c */ unsigned long OptimalWriteProcessors[2];
  /* 0x0014 */ struct _MI_WRITE_MODES* RawTimeStamps;
} MI_WRITE_CALIBRATION, *PMI_WRITE_CALIBRATION; /* size: 0x0018 */

typedef struct _MI_SYSTEM_NODE_INFORMATION
{
  /* 0x0000 */ struct _CACHED_KSTACK_LIST CachedKernelStacks[2];
  /* 0x0030 */ struct _GROUP_AFFINITY GroupAffinity;
  /* 0x003c */ unsigned short ProcessorCount;
  /* 0x0040 */ void* BootZeroPageTimesPerProcessor;
  /* 0x0048 */ unsigned __int64 CyclesToZeroOneLargePage;
  /* 0x0050 */ unsigned __int64* ScaledCyclesToZeroOneLargePage;
  /* 0x0054 */ struct _MI_WRITE_CALIBRATION WriteCalibration;
  /* 0x0080 */ volatile long IoPfnLock;
  /* 0x0084 */ long __PADDING__[15];
} MI_SYSTEM_NODE_INFORMATION, *PMI_SYSTEM_NODE_INFORMATION; /* size: 0x00c0 */

