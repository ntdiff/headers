typedef struct _MI_NODE_NUMBER_ZERO_BASED
{
  /* 0x0000 */ unsigned long ZeroBased;
} MI_NODE_NUMBER_ZERO_BASED, *PMI_NODE_NUMBER_ZERO_BASED; /* size: 0x0004 */

typedef struct _GROUP_AFFINITY
{
  /* 0x0000 */ unsigned __int64 Mask;
  /* 0x0008 */ unsigned short Group;
  /* 0x000a */ unsigned short Reserved[3];
} GROUP_AFFINITY, *PGROUP_AFFINITY; /* size: 0x0010 */

typedef struct _MI_WRITE_CALIBRATION
{
  /* 0x0000 */ unsigned long MaximumNumberProcessors;
  /* 0x0004 */ unsigned char OptimalWriteType;
  /* 0x0005 */ unsigned char CalibrationCompleted;
  /* 0x0006 */ unsigned char CalibrationFinal[2];
  /* 0x0008 */ unsigned __int64 PerProcessorNumberOfBytes;
  /* 0x0010 */ unsigned long OptimalWriteProcessors[2];
  /* 0x0018 */ struct _MI_WRITE_MODES* PureZeroing;
} MI_WRITE_CALIBRATION, *PMI_WRITE_CALIBRATION; /* size: 0x0020 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _MI_DEFERRED_PFNS_TO_FREE
{
  /* 0x0000 */ struct _LIST_ENTRY ListHead;
  /* 0x0010 */ unsigned __int64 NumberOfPages;
  /* 0x0018 */ unsigned long TbFlushStamp;
  /* 0x001c */ long __PADDING__[1];
} MI_DEFERRED_PFNS_TO_FREE, *PMI_DEFERRED_PFNS_TO_FREE; /* size: 0x0020 */

typedef struct _MI_SYSTEM_NODE_INFORMATION
{
  /* 0x0000 */ struct _GROUP_AFFINITY* GroupAffinity;
  /* 0x0008 */ unsigned short GroupAffinityCount;
  /* 0x000a */ unsigned short ProcessorCount[3];
  /* 0x0010 */ unsigned short UsableProcessorCount[3];
  /* 0x0018 */ struct _MI_NODE_NUMBER_ZERO_BASED ProcessorNode;
  /* 0x0020 */ struct _GROUP_AFFINITY ForwardProgressGroupAffinity;
  /* 0x0030 */ volatile long LargePageListOpLock;
  /* 0x0038 */ struct _MI_WRITE_CALIBRATION WriteCalibration[3][3];
  /* 0x0180 */ volatile long IoPfnLock;
  /* 0x0188 */ struct _MI_DEFERRED_PFNS_TO_FREE DeferredPfnsToFree[4];
  /* 0x0208 */ struct _MI_DEFERRED_PFNS_TO_FREE DeferredPfnsReady;
  /* 0x0228 */ volatile long DeferredPfnsToFreeLock;
  /* 0x022c */ long __PADDING__[5];
} MI_SYSTEM_NODE_INFORMATION, *PMI_SYSTEM_NODE_INFORMATION; /* size: 0x0240 */

