struct NDK_VERSION
{
  /* 0x0000 */ unsigned short Major;
  /* 0x0002 */ unsigned short Minor;
}; /* size: 0x0004 */

typedef struct _NDK_ADAPTER_INFO
{
  /* 0x0000 */ struct NDK_VERSION Version;
  /* 0x0004 */ unsigned int VendorId;
  /* 0x0008 */ unsigned int DeviceId;
  /* 0x000c */ unsigned long MaxRegistrationSize;
  /* 0x0010 */ unsigned long MaxWindowSize;
  /* 0x0014 */ unsigned long FRMRPageCount;
  /* 0x0018 */ unsigned long MaxInitiatorRequestSge;
  /* 0x001c */ unsigned long MaxReceiveRequestSge;
  /* 0x0020 */ unsigned long MaxReadRequestSge;
  /* 0x0024 */ unsigned long MaxTransferLength;
  /* 0x0028 */ unsigned long MaxInlineDataSize;
  /* 0x002c */ unsigned long MaxInboundReadLimit;
  /* 0x0030 */ unsigned long MaxOutboundReadLimit;
  /* 0x0034 */ unsigned long MaxReceiveQueueDepth;
  /* 0x0038 */ unsigned long MaxInitiatorQueueDepth;
  /* 0x003c */ unsigned long MaxSrqDepth;
  /* 0x0040 */ unsigned long MaxCqDepth;
  /* 0x0044 */ unsigned long LargeRequestThreshold;
  /* 0x0048 */ unsigned long MaxCallerData;
  /* 0x004c */ unsigned long MaxCalleeData;
  /* 0x0050 */ unsigned long AdapterFlags;
} NDK_ADAPTER_INFO, *PNDK_ADAPTER_INFO; /* size: 0x0054 */

