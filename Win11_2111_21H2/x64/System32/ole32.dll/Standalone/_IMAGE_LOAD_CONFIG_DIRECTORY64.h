typedef struct _IMAGE_LOAD_CONFIG_CODE_INTEGRITY
{
  /* 0x0000 */ unsigned short Flags;
  /* 0x0002 */ unsigned short Catalog;
  /* 0x0004 */ unsigned long CatalogOffset;
  /* 0x0008 */ unsigned long Reserved;
} IMAGE_LOAD_CONFIG_CODE_INTEGRITY, *PIMAGE_LOAD_CONFIG_CODE_INTEGRITY; /* size: 0x000c */

typedef struct _IMAGE_LOAD_CONFIG_DIRECTORY64
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned long TimeDateStamp;
  /* 0x0008 */ unsigned short MajorVersion;
  /* 0x000a */ unsigned short MinorVersion;
  /* 0x000c */ unsigned long GlobalFlagsClear;
  /* 0x0010 */ unsigned long GlobalFlagsSet;
  /* 0x0014 */ unsigned long CriticalSectionDefaultTimeout;
  /* 0x0018 */ unsigned __int64 DeCommitFreeBlockThreshold;
  /* 0x0020 */ unsigned __int64 DeCommitTotalFreeThreshold;
  /* 0x0028 */ unsigned __int64 LockPrefixTable;
  /* 0x0030 */ unsigned __int64 MaximumAllocationSize;
  /* 0x0038 */ unsigned __int64 VirtualMemoryThreshold;
  /* 0x0040 */ unsigned __int64 ProcessAffinityMask;
  /* 0x0048 */ unsigned long ProcessHeapFlags;
  /* 0x004c */ unsigned short CSDVersion;
  /* 0x004e */ unsigned short DependentLoadFlags;
  /* 0x0050 */ unsigned __int64 EditList;
  /* 0x0058 */ unsigned __int64 SecurityCookie;
  /* 0x0060 */ unsigned __int64 SEHandlerTable;
  /* 0x0068 */ unsigned __int64 SEHandlerCount;
  /* 0x0070 */ unsigned __int64 GuardCFCheckFunctionPointer;
  /* 0x0078 */ unsigned __int64 GuardCFDispatchFunctionPointer;
  /* 0x0080 */ unsigned __int64 GuardCFFunctionTable;
  /* 0x0088 */ unsigned __int64 GuardCFFunctionCount;
  /* 0x0090 */ unsigned long GuardFlags;
  /* 0x0094 */ struct _IMAGE_LOAD_CONFIG_CODE_INTEGRITY CodeIntegrity;
  /* 0x00a0 */ unsigned __int64 GuardAddressTakenIatEntryTable;
  /* 0x00a8 */ unsigned __int64 GuardAddressTakenIatEntryCount;
  /* 0x00b0 */ unsigned __int64 GuardLongJumpTargetTable;
  /* 0x00b8 */ unsigned __int64 GuardLongJumpTargetCount;
  /* 0x00c0 */ unsigned __int64 DynamicValueRelocTable;
  /* 0x00c8 */ unsigned __int64 CHPEMetadataPointer;
  /* 0x00d0 */ unsigned __int64 GuardRFFailureRoutine;
  /* 0x00d8 */ unsigned __int64 GuardRFFailureRoutineFunctionPointer;
  /* 0x00e0 */ unsigned long DynamicValueRelocTableOffset;
  /* 0x00e4 */ unsigned short DynamicValueRelocTableSection;
  /* 0x00e6 */ unsigned short Reserved2;
  /* 0x00e8 */ unsigned __int64 GuardRFVerifyStackPointerFunctionPointer;
  /* 0x00f0 */ unsigned long HotPatchTableOffset;
  /* 0x00f4 */ unsigned long Reserved3;
  /* 0x00f8 */ unsigned __int64 EnclaveConfigurationPointer;
  /* 0x0100 */ unsigned __int64 VolatileMetadataPointer;
  /* 0x0108 */ unsigned __int64 GuardEHContinuationTable;
  /* 0x0110 */ unsigned __int64 GuardEHContinuationCount;
  /* 0x0118 */ unsigned __int64 GuardXFGCheckFunctionPointer;
  /* 0x0120 */ unsigned __int64 GuardXFGDispatchFunctionPointer;
  /* 0x0128 */ unsigned __int64 GuardXFGTableDispatchFunctionPointer;
  /* 0x0130 */ unsigned __int64 CastGuardOsDeterminedFailureMode;
} IMAGE_LOAD_CONFIG_DIRECTORY64, *PIMAGE_LOAD_CONFIG_DIRECTORY64; /* size: 0x0138 */

