typedef struct _MINIDUMP_MISC_INFO
{
  /* 0x0000 */ unsigned int SizeOfInfo;
  /* 0x0004 */ unsigned int Flags1;
  /* 0x0008 */ unsigned int ProcessId;
  /* 0x000c */ unsigned int ProcessCreateTime;
  /* 0x0010 */ unsigned int ProcessUserTime;
  /* 0x0014 */ unsigned int ProcessKernelTime;
} MINIDUMP_MISC_INFO, *PMINIDUMP_MISC_INFO; /* size: 0x0018 */

