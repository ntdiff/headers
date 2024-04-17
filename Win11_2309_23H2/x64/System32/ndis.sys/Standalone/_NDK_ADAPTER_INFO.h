struct NDK_VERSION
{
  /* 0x0000 */ unsigned short Major;
  /* 0x0002 */ unsigned short Minor;
}; /* size: 0x0004 */

typedef enum _NDK_RDMA_TECHNOLOGY
{
  NdkUndefined = 0,
  NdkiWarp = 1,
  NdkInfiniBand = 2,
  NdkRoCE = 3,
  NdkRoCEv2 = 4,
  NdkMaxTechnology = 5,
} NDK_RDMA_TECHNOLOGY, *PNDK_RDMA_TECHNOLOGY;

typedef struct _NDK_ADAPTER_INFO
{
  /* 0x0000 */ struct NDK_VERSION Version;
  /* 0x0004 */ unsigned int VendorId;
  /* 0x0008 */ unsigned int DeviceId;
  /* 0x0010 */ unsigned __int64 MaxRegistrationSize;
  /* 0x0018 */ unsigned __int64 MaxWindowSize;
  /* 0x0020 */ unsigned long FRMRPageCount;
  /* 0x0024 */ unsigned long MaxInitiatorRequestSge;
  /* 0x0028 */ unsigned long MaxReceiveRequestSge;
  /* 0x002c */ unsigned long MaxReadRequestSge;
  /* 0x0030 */ unsigned long MaxTransferLength;
  /* 0x0034 */ unsigned long MaxInlineDataSize;
  /* 0x0038 */ unsigned long MaxInboundReadLimit;
  /* 0x003c */ unsigned long MaxOutboundReadLimit;
  /* 0x0040 */ unsigned long MaxReceiveQueueDepth;
  /* 0x0044 */ unsigned long MaxInitiatorQueueDepth;
  /* 0x0048 */ unsigned long MaxSrqDepth;
  /* 0x004c */ unsigned long MaxCqDepth;
  /* 0x0050 */ unsigned long LargeRequestThreshold;
  /* 0x0054 */ unsigned long MaxCallerData;
  /* 0x0058 */ unsigned long MaxCalleeData;
  /* 0x005c */ unsigned long AdapterFlags;
  /* 0x0060 */ enum _NDK_RDMA_TECHNOLOGY RdmaTechnology;
  /* 0x0064 */ long __PADDING__[1];
} NDK_ADAPTER_INFO, *PNDK_ADAPTER_INFO; /* size: 0x0068 */

