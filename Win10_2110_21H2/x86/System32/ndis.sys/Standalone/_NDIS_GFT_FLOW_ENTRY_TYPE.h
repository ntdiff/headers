typedef enum _NDIS_GFT_FLOW_ENTRY_TYPE
{
  NdisGftFlowEntryTypeUndefined = 0,
  NdisGftFlowEntryTypeExactMatch = 1,
  NdisGftFlowEntryTypeWildcard = 2,
  NdisGftFlowEntryTypeMax = 3,
} NDIS_GFT_FLOW_ENTRY_TYPE, *PNDIS_GFT_FLOW_ENTRY_TYPE;

