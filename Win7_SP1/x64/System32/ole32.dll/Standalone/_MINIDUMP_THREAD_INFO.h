typedef struct _MINIDUMP_THREAD_INFO
{
  /* 0x0000 */ unsigned int ThreadId;
  /* 0x0004 */ unsigned int DumpFlags;
  /* 0x0008 */ unsigned int DumpError;
  /* 0x000c */ unsigned int ExitStatus;
  /* 0x0010 */ unsigned __int64 CreateTime;
  /* 0x0018 */ unsigned __int64 ExitTime;
  /* 0x0020 */ unsigned __int64 KernelTime;
  /* 0x0028 */ unsigned __int64 UserTime;
  /* 0x0030 */ unsigned __int64 StartAddress;
  /* 0x0038 */ unsigned __int64 Affinity;
} MINIDUMP_THREAD_INFO, *PMINIDUMP_THREAD_INFO; /* size: 0x0040 */

