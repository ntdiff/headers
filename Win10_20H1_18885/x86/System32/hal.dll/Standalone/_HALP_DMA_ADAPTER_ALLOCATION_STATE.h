typedef enum _HALP_DMA_ADAPTER_ALLOCATION_STATE
{
  HalpDmaAdapterAllocationStateNone = 0,
  HalpDmaAdapterAllocateChannel = 1,
  HalpDmaAdapterAllocateMapRegisters = 2,
  HalpDmaAdapterAllocateChannelRemapResources = 3,
  HalpDmaAdapterAllocationStateComplete = 4,
  HalpDmaAdapterAllocationStateMax = 5,
} HALP_DMA_ADAPTER_ALLOCATION_STATE, *PHALP_DMA_ADAPTER_ALLOCATION_STATE;

