typedef struct _MINIDUMP_MISC_INFO_2
{
  /* 0x0000 */ unsigned int SizeOfInfo;
  /* 0x0004 */ unsigned int Flags1;
  /* 0x0008 */ unsigned int ProcessId;
  /* 0x000c */ unsigned int ProcessCreateTime;
  /* 0x0010 */ unsigned int ProcessUserTime;
  /* 0x0014 */ unsigned int ProcessKernelTime;
  /* 0x0018 */ unsigned int ProcessorMaxMhz;
  /* 0x001c */ unsigned int ProcessorCurrentMhz;
  /* 0x0020 */ unsigned int ProcessorMhzLimit;
  /* 0x0024 */ unsigned int ProcessorMaxIdleState;
  /* 0x0028 */ unsigned int ProcessorCurrentIdleState;
} MINIDUMP_MISC_INFO_2, *PMINIDUMP_MISC_INFO_2; /* size: 0x002c */

