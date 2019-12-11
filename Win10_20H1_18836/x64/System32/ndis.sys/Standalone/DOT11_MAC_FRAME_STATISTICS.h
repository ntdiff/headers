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

