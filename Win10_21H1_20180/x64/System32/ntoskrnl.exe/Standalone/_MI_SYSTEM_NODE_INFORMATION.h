typedef union _SLIST_HEADER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned __int64 Alignment;
      /* 0x0008 */ unsigned __int64 Region;
    }; /* size: 0x0010 */
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Depth : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 Sequence : 48; /* bit position: 16 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 Reserved : 4; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 NextEntry : 60; /* bit position: 4 */
      }; /* bitfield */
    } /* size: 0x0010 */ HeaderX64;
  }; /* size: 0x0010 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0010 */

typedef struct _CACHED_KSTACK_LIST
{
  /* 0x0000 */ union _SLIST_HEADER SListHead;
  /* 0x0010 */ long MinimumFree;
  /* 0x0014 */ unsigned long Misses;
  /* 0x0018 */ unsigned long MissesLast;
  /* 0x001c */ unsigned long AllStacksInUse;
} CACHED_KSTACK_LIST, *PCACHED_KSTACK_LIST; /* size: 0x0020 */

typedef struct _GROUP_AFFINITY
{
  /* 0x0000 */ unsigned __int64 Mask;
  /* 0x0008 */ unsigned short Group;
  /* 0x000a */ unsigned short Reserved[3];
} GROUP_AFFINITY, *PGROUP_AFFINITY; /* size: 0x0010 */

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
  /* 0x0008 */ unsigned __int64 PerProcessorNumberOfBytes;
  /* 0x0010 */ unsigned long OptimalWriteProcessors[2];
  /* 0x0018 */ struct _MI_WRITE_MODES* RawTimeStamps;
} MI_WRITE_CALIBRATION, *PMI_WRITE_CALIBRATION; /* size: 0x0020 */

typedef struct _MI_SYSTEM_NODE_INFORMATION
{
  /* 0x0000 */ struct _CACHED_KSTACK_LIST CachedKernelStacks[2];
  /* 0x0040 */ struct _GROUP_AFFINITY GroupAffinity;
  /* 0x0050 */ unsigned short ProcessorCount;
  /* 0x0058 */ void* BootZeroPageTimesPerProcessor;
  /* 0x0060 */ unsigned __int64 CyclesToZeroOneLargePage;
  /* 0x0068 */ unsigned __int64* ScaledCyclesToZeroOneLargePage;
  /* 0x0070 */ struct _MI_WRITE_CALIBRATION WriteCalibration;
  /* 0x00c0 */ volatile long IoPfnLock;
  /* 0x00c4 */ long __PADDING__[15];
} MI_SYSTEM_NODE_INFORMATION, *PMI_SYSTEM_NODE_INFORMATION; /* size: 0x0100 */

