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

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _MI_DEFERRED_PFNS_TO_FREE
{
  /* 0x0000 */ struct _LIST_ENTRY ListHead;
  /* 0x0008 */ unsigned long NumberOfPages;
  /* 0x000c */ unsigned long TbFlushStamp;
} MI_DEFERRED_PFNS_TO_FREE, *PMI_DEFERRED_PFNS_TO_FREE; /* size: 0x0010 */

typedef struct _MI_SYSTEM_NODE_INFORMATION
{
  /* 0x0000 */ struct _GROUP_AFFINITY GroupAffinity;
  /* 0x000c */ unsigned short ProcessorCount;
  /* 0x0010 */ void* BootZeroPageTimesPerProcessor;
  /* 0x0018 */ unsigned __int64 CyclesToZeroOneLargePage;
  /* 0x0020 */ unsigned __int64* ScaledCyclesToZeroOneLargePage;
  /* 0x0024 */ struct _MI_WRITE_CALIBRATION WriteCalibration;
  /* 0x0040 */ volatile long IoPfnLock;
  /* 0x0044 */ struct _MI_DEFERRED_PFNS_TO_FREE DeferredPfnsToFree[4];
  /* 0x0084 */ struct _MI_DEFERRED_PFNS_TO_FREE DeferredPfnsReady;
  /* 0x0094 */ volatile long DeferredPfnsToFreeLock;
  /* 0x0098 */ long __PADDING__[10];
} MI_SYSTEM_NODE_INFORMATION, *PMI_SYSTEM_NODE_INFORMATION; /* size: 0x00c0 */

