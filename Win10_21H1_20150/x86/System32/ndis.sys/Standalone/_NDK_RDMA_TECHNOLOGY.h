typedef enum _NDK_RDMA_TECHNOLOGY
{
  NdkUndefined = 0,
  NdkiWarp = 1,
  NdkInfiniBand = 2,
  NdkRoCE = 3,
  NdkRoCEv2 = 4,
  NdkMaxTechnology = 5,
} NDK_RDMA_TECHNOLOGY, *PNDK_RDMA_TECHNOLOGY;

