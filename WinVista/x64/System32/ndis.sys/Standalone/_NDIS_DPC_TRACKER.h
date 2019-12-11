typedef struct _NDIS_DPC_TRACKER
{
  /* 0x0000 */ unsigned __int64 TotalCycleInRcvTranslation;
  /* 0x0008 */ unsigned __int64 TotalCycleInReturnTranslation;
  /* 0x0010 */ unsigned __int64 TotalCycleInReturn;
  /* 0x0018 */ unsigned __int64 TotalCycleInMiniportReturn;
  /* 0x0020 */ unsigned __int64 TotalCycleSendComplete;
  /* 0x0028 */ unsigned __int64 TotalCycleInNdis;
  /* 0x0030 */ unsigned __int64 TotalCycleInTransfer;
  /* 0x0038 */ unsigned long TotalNumInRcvTranslation;
  /* 0x003c */ unsigned long TotalNumInReturnTranslation;
  /* 0x0040 */ unsigned long TotalNumInReturn;
  /* 0x0044 */ unsigned long TotalNumInMiniportReturn;
  /* 0x0048 */ unsigned long TotalNumSendComplete;
  /* 0x004c */ unsigned long TotalNumInNdis;
  /* 0x0050 */ unsigned long TotalNumInTransfer;
  /* 0x0058 */ unsigned __int64 DpcStartCycle;
  /* 0x0060 */ unsigned __int64 DpcStopCycle;
  /* 0x0068 */ unsigned __int64 RcvTranslationTrace[256];
  /* 0x0868 */ unsigned __int64 ReturnTranslationTrace[256];
  /* 0x1068 */ unsigned __int64 ReturnTrace[256];
  /* 0x1868 */ unsigned __int64 NdisTrace[256];
  /* 0x2068 */ unsigned __int64 SendCompleteTrace[256];
  /* 0x2868 */ unsigned __int64 MiniportReturnTrace[256];
  /* 0x3068 */ unsigned __int64 ProtocolRcvTrace[256];
  /* 0x3868 */ unsigned __int64 MiniportTransferTrace[256];
  /* 0x4068 */ unsigned char RcvTranslationTraceIndex;
  /* 0x4069 */ unsigned char ReturnTranslationTraceIndex;
  /* 0x406a */ unsigned char NdisTraceIndex;
  /* 0x406b */ unsigned char ReturnTraceIndex;
  /* 0x406c */ unsigned char SendCompleteTraceIndex;
  /* 0x406d */ unsigned char MiniportReturnTraceIndex;
  /* 0x406e */ unsigned char ProtocolRcvTraceIndex;
  /* 0x406f */ unsigned char MiniportTransferTraceIndex;
} NDIS_DPC_TRACKER, *PNDIS_DPC_TRACKER; /* size: 0x4070 */

