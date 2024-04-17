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
  /* 0x0036 */ unsigned short Reserved1;
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
} IMAGE_LOAD_CONFIG_DIRECTORY32, *PIMAGE_LOAD_CONFIG_DIRECTORY32; /* size: 0x0068 */

