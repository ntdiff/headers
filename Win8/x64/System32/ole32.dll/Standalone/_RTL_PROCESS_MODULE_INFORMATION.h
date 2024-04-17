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

