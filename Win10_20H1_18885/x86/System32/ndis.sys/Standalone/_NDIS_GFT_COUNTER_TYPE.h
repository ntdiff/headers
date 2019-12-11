typedef enum _NDIS_GFT_COUNTER_TYPE
{
  NdisGftCounterTypeUndefined = 0,
  NdisGftCounterTypePacketCounter = 1,
  NdisGftCounterTypeByteCounter = 2,
  NdisGftCounterTypePacketAndByteCounter = 3,
  NdisGftCounterTypeMax = 4,
} NDIS_GFT_COUNTER_TYPE, *PNDIS_GFT_COUNTER_TYPE;

