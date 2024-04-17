typedef struct _SYSTEM_LOW_PRIORITY_IO_INFORMATION
{
  /* 0x0000 */ unsigned long LowPriReadOperations;
  /* 0x0004 */ unsigned long LowPriWriteOperations;
  /* 0x0008 */ unsigned long KernelBumpedToNormalOperations;
  /* 0x000c */ unsigned long LowPriPagingReadOperations;
  /* 0x0010 */ unsigned long KernelPagingReadsBumpedToNormal;
  /* 0x0014 */ unsigned long LowPriPagingWriteOperations;
  /* 0x0018 */ unsigned long KernelPagingWritesBumpedToNormal;
  /* 0x001c */ unsigned long BoostedIrpCount;
  /* 0x0020 */ unsigned long BoostedPagingIrpCount;
  /* 0x0024 */ unsigned long BlanketBoostCount;
} SYSTEM_LOW_PRIORITY_IO_INFORMATION, *PSYSTEM_LOW_PRIORITY_IO_INFORMATION; /* size: 0x0028 */

