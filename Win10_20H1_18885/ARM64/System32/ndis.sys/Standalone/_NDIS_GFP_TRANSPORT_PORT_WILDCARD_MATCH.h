typedef enum _NDIS_GFP_WILDCARD_MATCH_TYPE
{
  NdisGfpWildcardMatchTypeUndefined = 0,
  NdisGfpWildcardMatchTypeEqual = 1,
  NdisGfpWildcardMatchTypeMaskEqual = 2,
  NdisGfpWildcardMatchTypeInRange = 3,
  NdisGfpWildcardMatchTypeMax = 4,
} NDIS_GFP_WILDCARD_MATCH_TYPE, *PNDIS_GFP_WILDCARD_MATCH_TYPE;

typedef struct _NDIS_GFP_TRANSPORT_PORT_WILDCARD_MATCH
{
  /* 0x0000 */ enum _NDIS_GFP_WILDCARD_MATCH_TYPE MatchType;
  /* 0x0004 */ unsigned short Port;
  /* 0x0006 */ unsigned short Range;
} NDIS_GFP_TRANSPORT_PORT_WILDCARD_MATCH, *PNDIS_GFP_TRANSPORT_PORT_WILDCARD_MATCH; /* size: 0x0008 */

