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

