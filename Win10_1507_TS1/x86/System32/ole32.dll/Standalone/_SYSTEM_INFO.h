typedef struct _SYSTEM_INFO
{
  union
  {
    /* 0x0000 */ unsigned long dwOemId;
    struct
    {
      /* 0x0000 */ unsigned short wProcessorArchitecture;
      /* 0x0002 */ unsigned short wReserved;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
  /* 0x0004 */ unsigned long dwPageSize;
  /* 0x0008 */ void* lpMinimumApplicationAddress;
  /* 0x000c */ void* lpMaximumApplicationAddress;
  /* 0x0010 */ unsigned long dwActiveProcessorMask;
  /* 0x0014 */ unsigned long dwNumberOfProcessors;
  /* 0x0018 */ unsigned long dwProcessorType;
  /* 0x001c */ unsigned long dwAllocationGranularity;
  /* 0x0020 */ unsigned short wProcessorLevel;
  /* 0x0022 */ unsigned short wProcessorRevision;
} SYSTEM_INFO, *PSYSTEM_INFO; /* size: 0x0024 */

