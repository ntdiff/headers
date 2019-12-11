typedef struct _NDIS_PER_PROC_PERFORMANCE_COUNTERS
{
  /* 0x0000 */ unsigned __int64 DpcCount;
  /* 0x0008 */ unsigned __int64 IsrCount;
  /* 0x0010 */ unsigned __int64 ReceiveIndicationCalls;
  /* 0x0018 */ unsigned __int64 ReturnNblsCalls;
  /* 0x0020 */ unsigned __int64 ReceivedNbls;
  /* 0x0028 */ unsigned __int64 ReturnedNbls;
  /* 0x0030 */ unsigned __int64 SendCalls;
  /* 0x0038 */ unsigned __int64 SendCompleteCalls;
  /* 0x0040 */ unsigned __int64 SentNbs;
  /* 0x0048 */ unsigned __int64 SendCompleteNbs;
  /* 0x0050 */ unsigned __int64 HalBuildSGListCalls;
  /* 0x0058 */ unsigned __int64 IndirectionTableChangeCalls;
  /* 0x0060 */ unsigned __int64 NdisQueueDpcCallsNotCurrentCpu;
  /* 0x0068 */ unsigned __int64 DpcTotalCycles;
  /* 0x0070 */ unsigned __int64 IsrCycles;
  /* 0x0078 */ unsigned __int64 NdisReceiveIndicationCycles;
  /* 0x0080 */ unsigned __int64 StackReceiveIndicationCycles;
  /* 0x0088 */ unsigned __int64 NdisReturnNblCycles;
  /* 0x0090 */ unsigned __int64 MiniportReturnNblCycles;
  /* 0x0098 */ unsigned __int64 NdisSendCycles;
  /* 0x00a0 */ unsigned __int64 MiniportSendCycles;
  /* 0x00a8 */ unsigned __int64 NdisSendCompleteCycles;
  /* 0x00b0 */ unsigned __int64 StackSendCompleteCycles;
  /* 0x00b8 */ unsigned __int64 HalBuildSGListCycles;
  /* 0x00c0 */ unsigned __int64 IndirectionTableChangeCycles;
  /* 0x00c8 */ unsigned __int64 SendCallsAtPassive;
  /* 0x00d0 */ unsigned __int64 SentNbsAtPassive;
  /* 0x00d8 */ unsigned __int64 ReturnNblsCallsAtPassive;
  /* 0x00e0 */ unsigned __int64 ReturnedNblsAtPassive;
  /* 0x00e8 */ unsigned __int64 LowResourceReceiveIndicationCalls;
  /* 0x00f0 */ unsigned __int64 LowResourceReceivedNbls;
  /* 0x00f8 */ unsigned __int64 TcpOffloadReceiveIndicationCalls;
  /* 0x0100 */ unsigned __int64 TcpOffloadSendCalls;
  /* 0x0108 */ unsigned __int64 TcpOffloadReceiveData;
  /* 0x0110 */ unsigned __int64 TcpOffloadSendData;
  /* 0x0118 */ unsigned __int64 IsrToDpcCycles;
  /* 0x0120 */ unsigned __int64 DpcCallsDeferred;
  /* 0x0128 */ unsigned __int64 PacketsCoalesced;
} NDIS_PER_PROC_PERFORMANCE_COUNTERS, *PNDIS_PER_PROC_PERFORMANCE_COUNTERS; /* size: 0x0130 */

