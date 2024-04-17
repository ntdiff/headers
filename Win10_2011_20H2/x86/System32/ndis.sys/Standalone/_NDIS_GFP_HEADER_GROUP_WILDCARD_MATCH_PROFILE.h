typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef enum _NDIS_GFP_WILDCARD_MATCH_TYPE
{
  NdisGfpWildcardMatchTypeUndefined = 0,
  NdisGfpWildcardMatchTypeEqual = 1,
  NdisGfpWildcardMatchTypeMaskEqual = 2,
  NdisGfpWildcardMatchTypeInRange = 3,
  NdisGfpWildcardMatchTypeMax = 4,
} NDIS_GFP_WILDCARD_MATCH_TYPE, *PNDIS_GFP_WILDCARD_MATCH_TYPE;

typedef struct _NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH_PROFILE
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long HeadersPresent;
  /* 0x0010 */ unsigned __int64 MatchFields;
  /* 0x0018 */ enum _NDIS_GFP_WILDCARD_MATCH_TYPE SourceIPv4AddressMatchType;
  /* 0x001c */ enum _NDIS_GFP_WILDCARD_MATCH_TYPE DestinationIPv4AddressMatchType;
  /* 0x0020 */ enum _NDIS_GFP_WILDCARD_MATCH_TYPE SourceIPv6AddressMatchType;
  /* 0x0024 */ enum _NDIS_GFP_WILDCARD_MATCH_TYPE DestinationIPv6AddressMatchType;
  /* 0x0028 */ enum _NDIS_GFP_WILDCARD_MATCH_TYPE SourcePortMatchType;
  /* 0x002c */ enum _NDIS_GFP_WILDCARD_MATCH_TYPE DestinationPortMatchType;
  /* 0x0030 */ unsigned char TcpFlags;
  /* 0x0031 */ char __PADDING__[7];
} NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH_PROFILE, *PNDIS_GFP_HEADER_GROUP_WILDCARD_MATCH_PROFILE; /* size: 0x0038 */

