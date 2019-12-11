typedef enum _NDIS_GFT_FLOW_ENTRY_CACHE_HINT
{
  NdisGftFlowEntryCacheHintUndefined = 0,
  NdisGftFlowEntryCacheHintLowFrequency = 100,
  NdisGftFlowEntryCacheHintMediumFrequency = 200,
  NdisGftFlowEntryCacheHintHighFrequency = 300,
  NdisGftFlowEntryCacheHintMax = 1000,
} NDIS_GFT_FLOW_ENTRY_CACHE_HINT, *PNDIS_GFT_FLOW_ENTRY_CACHE_HINT;

