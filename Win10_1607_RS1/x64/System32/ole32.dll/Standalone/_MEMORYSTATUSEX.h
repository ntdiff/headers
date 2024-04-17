typedef struct _MEMORYSTATUSEX
{
  /* 0x0000 */ unsigned long dwLength;
  /* 0x0004 */ unsigned long dwMemoryLoad;
  /* 0x0008 */ unsigned __int64 ullTotalPhys;
  /* 0x0010 */ unsigned __int64 ullAvailPhys;
  /* 0x0018 */ unsigned __int64 ullTotalPageFile;
  /* 0x0020 */ unsigned __int64 ullAvailPageFile;
  /* 0x0028 */ unsigned __int64 ullTotalVirtual;
  /* 0x0030 */ unsigned __int64 ullAvailVirtual;
  /* 0x0038 */ unsigned __int64 ullAvailExtendedVirtual;
} MEMORYSTATUSEX, *PMEMORYSTATUSEX; /* size: 0x0040 */

