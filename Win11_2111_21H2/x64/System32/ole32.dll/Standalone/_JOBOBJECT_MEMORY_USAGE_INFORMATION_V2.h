typedef struct _JOBOBJECT_MEMORY_USAGE_INFORMATION
{
  /* 0x0000 */ unsigned __int64 JobMemory;
  /* 0x0008 */ unsigned __int64 PeakJobMemoryUsed;
} JOBOBJECT_MEMORY_USAGE_INFORMATION, *PJOBOBJECT_MEMORY_USAGE_INFORMATION; /* size: 0x0010 */

typedef struct _JOBOBJECT_MEMORY_USAGE_INFORMATION_V2
{
  /* 0x0000 */ struct _JOBOBJECT_MEMORY_USAGE_INFORMATION BasicInfo;
  /* 0x0010 */ unsigned __int64 JobSharedMemory;
  /* 0x0018 */ unsigned __int64 Reserved[2];
} JOBOBJECT_MEMORY_USAGE_INFORMATION_V2, *PJOBOBJECT_MEMORY_USAGE_INFORMATION_V2; /* size: 0x0028 */

