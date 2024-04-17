typedef enum _NDIS_GFT_PROFILE_TYPE
{
  NdisGftProfileTypeUndefined = 0,
  NdisGftProfileTypeExactMatch = 1,
  NdisGftProfileTypeHeaderTransposition = 2,
  NdisGftProfileTypeWildcardMatch = 3,
  NdisGftProfileTypeMax = 4,
} NDIS_GFT_PROFILE_TYPE, *PNDIS_GFT_PROFILE_TYPE;

