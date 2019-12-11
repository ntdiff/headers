typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

struct DOT11_MAC_FRAME_STATISTICS
{
  /* 0x0000 */ unsigned __int64 ullTransmittedFrameCount;
  /* 0x0008 */ unsigned __int64 ullReceivedFrameCount;
  /* 0x0010 */ unsigned __int64 ullTransmittedFailureFrameCount;
  /* 0x0018 */ unsigned __int64 ullReceivedFailureFrameCount;
  /* 0x0020 */ unsigned __int64 ullWEPExcludedCount;
  /* 0x0028 */ unsigned __int64 ullTKIPLocalMICFailures;
  /* 0x0030 */ unsigned __int64 ullTKIPReplays;
  /* 0x0038 */ unsigned __int64 ullTKIPICVErrorCount;
  /* 0x0040 */ unsigned __int64 ullCCMPReplays;
  /* 0x0048 */ unsigned __int64 ullCCMPDecryptErrors;
  /* 0x0050 */ unsigned __int64 ullWEPUndecryptableCount;
  /* 0x0058 */ unsigned __int64 ullWEPICVErrorCount;
  /* 0x0060 */ unsigned __int64 ullDecryptSuccessCount;
  /* 0x0068 */ unsigned __int64 ullDecryptFailureCount;
}; /* size: 0x0070 */

struct DOT11_PHY_FRAME_STATISTICS
{
  /* 0x0000 */ unsigned __int64 ullTransmittedFrameCount;
  /* 0x0008 */ unsigned __int64 ullMulticastTransmittedFrameCount;
  /* 0x0010 */ unsigned __int64 ullFailedCount;
  /* 0x0018 */ unsigned __int64 ullRetryCount;
  /* 0x0020 */ unsigned __int64 ullMultipleRetryCount;
  /* 0x0028 */ unsigned __int64 ullMaxTXLifetimeExceededCount;
  /* 0x0030 */ unsigned __int64 ullTransmittedFragmentCount;
  /* 0x0038 */ unsigned __int64 ullRTSSuccessCount;
  /* 0x0040 */ unsigned __int64 ullRTSFailureCount;
  /* 0x0048 */ unsigned __int64 ullACKFailureCount;
  /* 0x0050 */ unsigned __int64 ullReceivedFrameCount;
  /* 0x0058 */ unsigned __int64 ullMulticastReceivedFrameCount;
  /* 0x0060 */ unsigned __int64 ullPromiscuousReceivedFrameCount;
  /* 0x0068 */ unsigned __int64 ullMaxRXLifetimeExceededCount;
  /* 0x0070 */ unsigned __int64 ullFrameDuplicateCount;
  /* 0x0078 */ unsigned __int64 ullReceivedFragmentCount;
  /* 0x0080 */ unsigned __int64 ullPromiscuousReceivedFragmentCount;
  /* 0x0088 */ unsigned __int64 ullFCSErrorCount;
}; /* size: 0x0090 */

struct DOT11_STATISTICS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0008 */ unsigned __int64 ullFourWayHandshakeFailures;
  /* 0x0010 */ unsigned __int64 ullTKIPCounterMeasuresInvoked;
  /* 0x0018 */ unsigned __int64 ullReserved;
  /* 0x0020 */ struct DOT11_MAC_FRAME_STATISTICS MacUcastCounters;
  /* 0x0090 */ struct DOT11_MAC_FRAME_STATISTICS MacMcastCounters;
  /* 0x0100 */ struct DOT11_PHY_FRAME_STATISTICS PhyCounters[1];
}; /* size: 0x0190 */

