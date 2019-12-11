typedef struct _NDIS_PD_EC_UTILIZATION_COUNTER
{
  /* 0x0000 */ unsigned long ProcessorNumber;
  /* 0x0004 */ unsigned long IterationCount;
  /* 0x0008 */ unsigned long BusyWaitIterationCount;
  /* 0x000c */ unsigned long TxQueueCount;
  /* 0x0010 */ unsigned long RxQueueCount;
  /* 0x0018 */ unsigned __int64 CpuCycleTime;
  /* 0x0020 */ unsigned __int64 ThreadCycleTime;
  /* 0x0028 */ unsigned __int64 ProcessingCycles;
  /* 0x0030 */ unsigned __int64 BusyWaitCycles;
  /* 0x0038 */ unsigned __int64 IdleCycles;
} NDIS_PD_EC_UTILIZATION_COUNTER, *PNDIS_PD_EC_UTILIZATION_COUNTER; /* size: 0x0040 */

