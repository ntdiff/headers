typedef enum _NDIS_GFT_COUNTER_TYPE
{
  NdisGftCounterTypeUndefined = 0,
  NdisGftCounterTypePacket = 1,
  NdisGftCounterTypeByte = 2,
  NdisGftCounterTypePacketByte = 3,
  NdisGftCounterTypePacketByteAndState = 4,
  NdisGftCounterTypeMax = 5,
} NDIS_GFT_COUNTER_TYPE, *PNDIS_GFT_COUNTER_TYPE;

