typedef enum _NDIS_GFP_WILDCARD_MATCH_TYPE
{
  NdisGfpWildcardMatchTypeUndefined = 0,
  NdisGfpWildcardMatchTypeEqual = 1,
  NdisGfpWildcardMatchTypeMaskEqual = 2,
  NdisGfpWildcardMatchTypeInRange = 3,
  NdisGfpWildcardMatchTypeMax = 4,
} NDIS_GFP_WILDCARD_MATCH_TYPE, *PNDIS_GFP_WILDCARD_MATCH_TYPE;

