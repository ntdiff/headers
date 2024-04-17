typedef struct _RTL_PROCESS_MODULE_INFORMATION
{
  /* 0x0000 */ void* Section;
  /* 0x0008 */ void* MappedBase;
  /* 0x0010 */ void* ImageBase;
  /* 0x0018 */ unsigned long ImageSize;
  /* 0x001c */ unsigned long Flags;
  /* 0x0020 */ unsigned short LoadOrderIndex;
  /* 0x0022 */ unsigned short InitOrderIndex;
  /* 0x0024 */ unsigned short LoadCount;
  /* 0x0026 */ unsigned short OffsetToFileName;
  /* 0x0028 */ unsigned char FullPathName[256];
} RTL_PROCESS_MODULE_INFORMATION, *PRTL_PROCESS_MODULE_INFORMATION; /* size: 0x0128 */

typedef struct _RTL_PROCESS_MODULE_INFORMATION_EX
{
  /* 0x0000 */ unsigned short NextOffset;
  /* 0x0008 */ struct _RTL_PROCESS_MODULE_INFORMATION BaseInfo;
  /* 0x0130 */ unsigned long ImageChecksum;
  /* 0x0134 */ unsigned long TimeDateStamp;
  /* 0x0138 */ void* DefaultBase;
} RTL_PROCESS_MODULE_INFORMATION_EX, *PRTL_PROCESS_MODULE_INFORMATION_EX; /* size: 0x0140 */

typedef struct _SYSTEM_SINGLE_MODULE_INFORMATION
{
  /* 0x0000 */ void* TargetModuleAddress;
  /* 0x0008 */ struct _RTL_PROCESS_MODULE_INFORMATION_EX ExInfo;
} SYSTEM_SINGLE_MODULE_INFORMATION, *PSYSTEM_SINGLE_MODULE_INFORMATION; /* size: 0x0148 */

