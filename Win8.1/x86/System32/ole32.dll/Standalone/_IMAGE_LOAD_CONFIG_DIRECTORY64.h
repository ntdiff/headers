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
  /* 0x004e */ unsigned short Reserved1;
  /* 0x0050 */ unsigned __int64 EditList;
  /* 0x0058 */ unsigned __int64 SecurityCookie;
  /* 0x0060 */ unsigned __int64 SEHandlerTable;
  /* 0x0068 */ unsigned __int64 SEHandlerCount;
  /* 0x0070 */ unsigned __int64 GuardCFCheckFunctionPointer;
  /* 0x0078 */ unsigned __int64 Reserved2;
  /* 0x0080 */ unsigned __int64 GuardCFFunctionTable;
  /* 0x0088 */ unsigned __int64 GuardCFFunctionCount;
  /* 0x0090 */ unsigned long GuardFlags;
} IMAGE_LOAD_CONFIG_DIRECTORY64, *PIMAGE_LOAD_CONFIG_DIRECTORY64; /* size: 0x0094 */

