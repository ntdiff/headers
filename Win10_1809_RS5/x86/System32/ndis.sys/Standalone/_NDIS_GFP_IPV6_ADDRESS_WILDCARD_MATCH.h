typedef enum _NDIS_GFP_WILDCARD_MATCH_TYPE
{
  NdisGfpWildcardMatchTypeUndefined = 0,
  NdisGfpWildcardMatchTypeEqual = 1,
  NdisGfpWildcardMatchTypeMaskEqual = 2,
  NdisGfpWildcardMatchTypeInRange = 3,
  NdisGfpWildcardMatchTypeMax = 4,
} NDIS_GFP_WILDCARD_MATCH_TYPE, *PNDIS_GFP_WILDCARD_MATCH_TYPE;

struct in6_addr
{
  union
  {
    union
    {
      /* 0x0000 */ unsigned char Byte[16];
      /* 0x0000 */ unsigned short Word[8];
    }; /* size: 0x0010 */
  } /* size: 0x0010 */ u;
}; /* size: 0x0010 */

typedef struct _NDIS_GFP_IPV6_ADDRESS_WILDCARD_MATCH
{
  /* 0x0000 */ enum _NDIS_GFP_WILDCARD_MATCH_TYPE MatchType;
  /* 0x0004 */ struct in6_addr IPAddress;
  union
  {
    union
    {
      /* 0x0014 */ unsigned long PrefixLength;
      /* 0x0014 */ unsigned long RangeSize;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ MatchValue;
} NDIS_GFP_IPV6_ADDRESS_WILDCARD_MATCH, *PNDIS_GFP_IPV6_ADDRESS_WILDCARD_MATCH; /* size: 0x0018 */

