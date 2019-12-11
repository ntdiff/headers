typedef struct _NDIS_DPC_TRACKER
{
  /* 0x0000 */ unsigned __int64 TotalCycleInRcvTranslation;
  /* 0x0008 */ unsigned __int64 TotalCycleInReturnTranslation;
  /* 0x0010 */ unsigned __int64 TotalCycleInReturn;
  /* 0x0018 */ unsigned __int64 TotalCycleInMiniportReturn;
  /* 0x0020 */ unsigned __int64 TotalCycleSendComplete;
  /* 0x0028 */ unsigned __int64 TotalCycleInNdis;
  /* 0x0030 */ unsigned long TotalNumInRcvTranslation;
  /* 0x0034 */ unsigned long TotalNumInReturnTranslation;
  /* 0x0038 */ unsigned long TotalNumInReturn;
  /* 0x003c */ unsigned long TotalNumInMiniportReturn;
  /* 0x0040 */ unsigned long TotalNumSendComplete;
  /* 0x0044 */ unsigned long TotalNumInNdis;
  /* 0x0048 */ unsigned __int64 DpcStartCycle;
  /* 0x0050 */ unsigned __int64 DpcStopCycle;
  /* 0x0058 */ unsigned __int64 RcvTranslationTrace[256];
  /* 0x0858 */ unsigned __int64 ReturnTranslationTrace[256];
  /* 0x1058 */ unsigned __int64 ReturnTrace[256];
  /* 0x1858 */ unsigned __int64 NdisTrace[256];
  /* 0x2058 */ unsigned __int64 SendCompleteTrace[256];
  /* 0x2858 */ unsigned __int64 MiniportReturnTrace[256];
  /* 0x3058 */ unsigned __int64 ProtocolRcvTrace[256];
  /* 0x3858 */ unsigned __int64 MiniportTransferTrace[256];
  /* 0x4058 */ unsigned char RcvTranslationTraceIndex;
  /* 0x4059 */ unsigned char ReturnTranslationTraceIndex;
  /* 0x405a */ unsigned char NdisTraceIndex;
  /* 0x405b */ unsigned char ReturnTraceIndex;
  /* 0x405c */ unsigned char SendCompleteTraceIndex;
  /* 0x405d */ unsigned char MiniportReturnTraceIndex;
  /* 0x405e */ unsigned char ProtocolRcvTraceIndex;
  /* 0x405f */ unsigned char MiniportTransferTraceIndex;
} NDIS_DPC_TRACKER, *PNDIS_DPC_TRACKER; /* size: 0x4060 */

