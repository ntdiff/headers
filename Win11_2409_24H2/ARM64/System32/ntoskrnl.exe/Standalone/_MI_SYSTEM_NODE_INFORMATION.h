typedef struct _MI_SYSTEM_NODE_AFFINITY_INFORMATION
{
  /* 0x0000 */ struct _GROUP_AFFINITY* GroupAffinity;
  /* 0x0008 */ unsigned long NumberOfDomains;
  /* 0x000c */ unsigned long GlobalDomainIndex;
  /* 0x0010 */ unsigned short GroupAffinityCount;
  /* 0x0012 */ unsigned short ProcessorCount[3];
  /* 0x0018 */ unsigned short UsableProcessorCount[3];
  /* 0x001e */ char __PADDING__[2];
} MI_SYSTEM_NODE_AFFINITY_INFORMATION, *PMI_SYSTEM_NODE_AFFINITY_INFORMATION; /* size: 0x0020 */

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
  /* 0x0010 */ unsigned __int64 PerProcessorBandwidth[2];
  /* 0x0020 */ unsigned long OptimalWriteProcessors[2][2];
  /* 0x0030 */ struct _MI_WRITE_MODES* PureZeroing;
} MI_WRITE_CALIBRATION, *PMI_WRITE_CALIBRATION; /* size: 0x0038 */

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
  /* 0x0000 */ struct _MI_SYSTEM_NODE_AFFINITY_INFORMATION Affinities;
  struct
  {
    /* 0x0020 */ unsigned short NoLocalProcessors : 1; /* bit position: 0 */
    /* 0x0024 */ unsigned long UniformAccess : 1; /* bit position: 0 */
    /* 0x0028 */ unsigned short Spare : 14; /* bit position: 0 */
    /* 0x002a */ char __PADDING__[2];
  } /* size: 0x000c */ Flags;
  /* 0x002c */ struct _MI_NODE_NUMBER_ZERO_BASED ProcessorNode;
  /* 0x0030 */ struct _GROUP_AFFINITY ForwardProgressGroupAffinity;
  /* 0x0040 */ volatile long LargePageListOpLock;
  /* 0x0048 */ struct _MI_WRITE_CALIBRATION WriteCalibration[3][3];
  /* 0x0240 */ unsigned __int64 MaximumBandwidth[2][2];
  /* 0x0280 */ volatile long IoPfnLock;
  /* 0x0288 */ struct _MI_DEFERRED_PFNS_TO_FREE DeferredPfnsToFree[4];
  /* 0x0308 */ struct _MI_DEFERRED_PFNS_TO_FREE DeferredPfnsReady;
  /* 0x0328 */ volatile long DeferredPfnsToFreeLock;
  /* 0x032c */ long __PADDING__[21];
} MI_SYSTEM_NODE_INFORMATION, *PMI_SYSTEM_NODE_INFORMATION; /* size: 0x0380 */

