typedef struct _IMAGE_LOAD_CONFIG_CODE_INTEGRITY
{
  /* 0x0000 */ unsigned short Flags;
  /* 0x0002 */ unsigned short Catalog;
  /* 0x0004 */ unsigned long CatalogOffset;
  /* 0x0008 */ unsigned long Reserved;
} IMAGE_LOAD_CONFIG_CODE_INTEGRITY, *PIMAGE_LOAD_CONFIG_CODE_INTEGRITY; /* size: 0x000c */

typedef struct _IMAGE_LOAD_CONFIG_DIRECTORY32
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned long TimeDateStamp;
  /* 0x0008 */ unsigned short MajorVersion;
  /* 0x000a */ unsigned short MinorVersion;
  /* 0x000c */ unsigned long GlobalFlagsClear;
  /* 0x0010 */ unsigned long GlobalFlagsSet;
  /* 0x0014 */ unsigned long CriticalSectionDefaultTimeout;
  /* 0x0018 */ unsigned long DeCommitFreeBlockThreshold;
  /* 0x001c */ unsigned long DeCommitTotalFreeThreshold;
  /* 0x0020 */ unsigned long LockPrefixTable;
  /* 0x0024 */ unsigned long MaximumAllocationSize;
  /* 0x0028 */ unsigned long VirtualMemoryThreshold;
  /* 0x002c */ unsigned long ProcessHeapFlags;
  /* 0x0030 */ unsigned long ProcessAffinityMask;
  /* 0x0034 */ unsigned short CSDVersion;
  /* 0x0036 */ unsigned short DependentLoadFlags;
  /* 0x0038 */ unsigned long EditList;
  /* 0x003c */ unsigned long SecurityCookie;
  /* 0x0040 */ unsigned long SEHandlerTable;
  /* 0x0044 */ unsigned long SEHandlerCount;
  /* 0x0048 */ unsigned long GuardCFCheckFunctionPointer;
  /* 0x004c */ unsigned long GuardCFDispatchFunctionPointer;
  /* 0x0050 */ unsigned long GuardCFFunctionTable;
  /* 0x0054 */ unsigned long GuardCFFunctionCount;
  /* 0x0058 */ unsigned long GuardFlags;
  /* 0x005c */ struct _IMAGE_LOAD_CONFIG_CODE_INTEGRITY CodeIntegrity;
  /* 0x0068 */ unsigned long GuardAddressTakenIatEntryTable;
  /* 0x006c */ unsigned long GuardAddressTakenIatEntryCount;
  /* 0x0070 */ unsigned long GuardLongJumpTargetTable;
  /* 0x0074 */ unsigned long GuardLongJumpTargetCount;
  /* 0x0078 */ unsigned long DynamicValueRelocTable;
  /* 0x007c */ unsigned long CHPEMetadataPointer;
  /* 0x0080 */ unsigned long GuardRFFailureRoutine;
  /* 0x0084 */ unsigned long GuardRFFailureRoutineFunctionPointer;
  /* 0x0088 */ unsigned long DynamicValueRelocTableOffset;
  /* 0x008c */ unsigned short DynamicValueRelocTableSection;
  /* 0x008e */ unsigned short Reserved2;
  /* 0x0090 */ unsigned long GuardRFVerifyStackPointerFunctionPointer;
  /* 0x0094 */ unsigned long HotPatchTableOffset;
  /* 0x0098 */ unsigned long Reserved3;
  /* 0x009c */ unsigned long EnclaveConfigurationPointer;
  /* 0x00a0 */ unsigned long VolatileMetadataPointer;
  /* 0x00a4 */ unsigned long GuardEHContinuationTable;
  /* 0x00a8 */ unsigned long GuardEHContinuationCount;
  /* 0x00ac */ unsigned long GuardXFGCheckFunctionPointer;
  /* 0x00b0 */ unsigned long GuardXFGDispatchFunctionPointer;
  /* 0x00b4 */ unsigned long GuardXFGTableDispatchFunctionPointer;
  /* 0x00b8 */ unsigned long CastGuardOsDeterminedFailureMode;
  /* 0x00bc */ unsigned long GuardMemcpyFunctionPointer;
} IMAGE_LOAD_CONFIG_DIRECTORY32, *PIMAGE_LOAD_CONFIG_DIRECTORY32; /* size: 0x00c0 */

