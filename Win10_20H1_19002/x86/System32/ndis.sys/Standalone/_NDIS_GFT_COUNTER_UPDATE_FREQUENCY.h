typedef enum _NDIS_GFT_COUNTER_UPDATE_FREQUENCY
{
  NdisGftCounterUpdateFrequencyUndefined = 0,
  NdisGftCounterUpdateFrequencyOnQuery = 1,
  NdisGftCounterUpdateFrequencyPerUpdatePeriod = 2,
  NdisGftCounterUpdateFrequencyPerPacket = 3,
  NdisGftCounterUpdateFrequencyMax = 4,
} NDIS_GFT_COUNTER_UPDATE_FREQUENCY, *PNDIS_GFT_COUNTER_UPDATE_FREQUENCY;

