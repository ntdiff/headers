typedef struct _DOT11_PEER_STATISTICS
{
  /* 0x0000 */ unsigned __int64 ullDecryptSuccessCount;
  /* 0x0008 */ unsigned __int64 ullDecryptFailureCount;
  /* 0x0010 */ unsigned __int64 ullTxPacketSuccessCount;
  /* 0x0018 */ unsigned __int64 ullTxPacketFailureCount;
  /* 0x0020 */ unsigned __int64 ullRxPacketSuccessCount;
  /* 0x0028 */ unsigned __int64 ullRxPacketFailureCount;
} DOT11_PEER_STATISTICS, *PDOT11_PEER_STATISTICS; /* size: 0x0030 */

