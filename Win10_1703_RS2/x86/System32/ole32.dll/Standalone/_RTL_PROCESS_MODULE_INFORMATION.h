typedef struct _RTL_PROCESS_MODULE_INFORMATION
{
  /* 0x0000 */ void* Section;
  /* 0x0004 */ void* MappedBase;
  /* 0x0008 */ void* ImageBase;
  /* 0x000c */ unsigned long ImageSize;
  /* 0x0010 */ unsigned long Flags;
  /* 0x0014 */ unsigned short LoadOrderIndex;
  /* 0x0016 */ unsigned short InitOrderIndex;
  /* 0x0018 */ unsigned short LoadCount;
  /* 0x001a */ unsigned short OffsetToFileName;
  /* 0x001c */ unsigned char FullPathName[256];
} RTL_PROCESS_MODULE_INFORMATION, *PRTL_PROCESS_MODULE_INFORMATION; /* size: 0x011c */

