typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _NDIS_802_11_STATISTICS
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0008 */ union _LARGE_INTEGER TransmittedFragmentCount;
  /* 0x0010 */ union _LARGE_INTEGER MulticastTransmittedFrameCount;
  /* 0x0018 */ union _LARGE_INTEGER FailedCount;
  /* 0x0020 */ union _LARGE_INTEGER RetryCount;
  /* 0x0028 */ union _LARGE_INTEGER MultipleRetryCount;
  /* 0x0030 */ union _LARGE_INTEGER RTSSuccessCount;
  /* 0x0038 */ union _LARGE_INTEGER RTSFailureCount;
  /* 0x0040 */ union _LARGE_INTEGER ACKFailureCount;
  /* 0x0048 */ union _LARGE_INTEGER FrameDuplicateCount;
  /* 0x0050 */ union _LARGE_INTEGER ReceivedFragmentCount;
  /* 0x0058 */ union _LARGE_INTEGER MulticastReceivedFrameCount;
  /* 0x0060 */ union _LARGE_INTEGER FCSErrorCount;
  /* 0x0068 */ union _LARGE_INTEGER TKIPLocalMICFailures;
  /* 0x0070 */ union _LARGE_INTEGER TKIPICVErrorCount;
  /* 0x0078 */ union _LARGE_INTEGER TKIPCounterMeasuresInvoked;
  /* 0x0080 */ union _LARGE_INTEGER TKIPReplays;
  /* 0x0088 */ union _LARGE_INTEGER CCMPFormatErrors;
  /* 0x0090 */ union _LARGE_INTEGER CCMPReplays;
  /* 0x0098 */ union _LARGE_INTEGER CCMPDecryptErrors;
  /* 0x00a0 */ union _LARGE_INTEGER FourWayHandshakeFailures;
  /* 0x00a8 */ union _LARGE_INTEGER WEPUndecryptableCount;
  /* 0x00b0 */ union _LARGE_INTEGER WEPICVErrorCount;
  /* 0x00b8 */ union _LARGE_INTEGER DecryptSuccessCount;
  /* 0x00c0 */ union _LARGE_INTEGER DecryptFailureCount;
} NDIS_802_11_STATISTICS, *PNDIS_802_11_STATISTICS; /* size: 0x00c8 */

