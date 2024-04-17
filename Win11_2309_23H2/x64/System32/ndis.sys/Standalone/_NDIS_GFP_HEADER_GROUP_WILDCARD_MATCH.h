typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_GFP_ETHERNET_HEADER_FIELDS
{
  /* 0x0000 */ unsigned char DestinationMacAddress[6];
  /* 0x0006 */ unsigned char SourceMacAddress[6];
  /* 0x000c */ unsigned short EthType;
  /* 0x000e */ unsigned short CustomerVlanId;
  /* 0x0010 */ unsigned short ProviderVlanId;
  /* 0x0012 */ unsigned char Priority;
  /* 0x0013 */ char __PADDING__[1];
} NDIS_GFP_ETHERNET_HEADER_FIELDS, *PNDIS_GFP_ETHERNET_HEADER_FIELDS; /* size: 0x0014 */

typedef enum _NDIS_GFP_WILDCARD_MATCH_TYPE
{
  NdisGfpWildcardMatchTypeUndefined = 0,
  NdisGfpWildcardMatchTypeEqual = 1,
  NdisGfpWildcardMatchTypeMaskEqual = 2,
  NdisGfpWildcardMatchTypeInRange = 3,
  NdisGfpWildcardMatchTypeMax = 4,
} NDIS_GFP_WILDCARD_MATCH_TYPE, *PNDIS_GFP_WILDCARD_MATCH_TYPE;

struct in_addr
{
  union
  {
    union
    {
      struct
      {
        /* 0x0000 */ unsigned char s_b1;
        /* 0x0001 */ unsigned char s_b2;
        /* 0x0002 */ unsigned char s_b3;
        /* 0x0003 */ unsigned char s_b4;
      } /* size: 0x0004 */ S_un_b;
      struct
      {
        /* 0x0000 */ unsigned short s_w1;
        /* 0x0002 */ unsigned short s_w2;
      } /* size: 0x0004 */ S_un_w;
      /* 0x0000 */ unsigned long S_addr;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ S_un;
}; /* size: 0x0004 */

typedef struct _NDIS_GFP_IPV4_ADDRESS_WILDCARD_MATCH
{
  /* 0x0000 */ enum _NDIS_GFP_WILDCARD_MATCH_TYPE MatchType;
  /* 0x0004 */ struct in_addr IPAddress;
  union
  {
    union
    {
      /* 0x0008 */ unsigned long PrefixLength;
      /* 0x0008 */ unsigned long RangeSize;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ MatchValue;
} NDIS_GFP_IPV4_ADDRESS_WILDCARD_MATCH, *PNDIS_GFP_IPV4_ADDRESS_WILDCARD_MATCH; /* size: 0x000c */

typedef struct _NDIS_GFP_IPV4_SRC_AND_DEST_ADDRESS_WILDCARD_MATCH
{
  /* 0x0000 */ struct _NDIS_GFP_IPV4_ADDRESS_WILDCARD_MATCH SourceIPv4Address;
  /* 0x000c */ struct _NDIS_GFP_IPV4_ADDRESS_WILDCARD_MATCH DestinationIPv4Address;
} NDIS_GFP_IPV4_SRC_AND_DEST_ADDRESS_WILDCARD_MATCH, *PNDIS_GFP_IPV4_SRC_AND_DEST_ADDRESS_WILDCARD_MATCH; /* size: 0x0018 */

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

typedef struct _NDIS_GFP_IPV6_SRC_AND_DEST_ADDRESS_WILDCARD_MATCH
{
  /* 0x0000 */ struct _NDIS_GFP_IPV6_ADDRESS_WILDCARD_MATCH SourceIPv6Address;
  /* 0x0018 */ struct _NDIS_GFP_IPV6_ADDRESS_WILDCARD_MATCH DestinationIPv6Address;
} NDIS_GFP_IPV6_SRC_AND_DEST_ADDRESS_WILDCARD_MATCH, *PNDIS_GFP_IPV6_SRC_AND_DEST_ADDRESS_WILDCARD_MATCH; /* size: 0x0030 */

typedef union _NDIS_GFP_IP_SRC_AND_DEST_ADDRESS_WILDCARD_MATCH
{
  union
  {
    /* 0x0000 */ struct _NDIS_GFP_IPV4_SRC_AND_DEST_ADDRESS_WILDCARD_MATCH IPv4SrcAndDestAddress;
    /* 0x0000 */ struct _NDIS_GFP_IPV6_SRC_AND_DEST_ADDRESS_WILDCARD_MATCH IPv6SrcAndDestAddress;
  }; /* size: 0x0030 */
} NDIS_GFP_IP_SRC_AND_DEST_ADDRESS_WILDCARD_MATCH, *PNDIS_GFP_IP_SRC_AND_DEST_ADDRESS_WILDCARD_MATCH; /* size: 0x0030 */

typedef struct _NDIS_GFP_TRANSPORT_PORT_WILDCARD_MATCH
{
  /* 0x0000 */ enum _NDIS_GFP_WILDCARD_MATCH_TYPE MatchType;
  /* 0x0004 */ unsigned short Port;
  /* 0x0006 */ unsigned short Range;
} NDIS_GFP_TRANSPORT_PORT_WILDCARD_MATCH, *PNDIS_GFP_TRANSPORT_PORT_WILDCARD_MATCH; /* size: 0x0008 */

typedef struct _NDIS_GFP_TRANSPORT_SRC_AND_DEST_PORT_WILDCARD_MATCH
{
  /* 0x0000 */ struct _NDIS_GFP_TRANSPORT_PORT_WILDCARD_MATCH SourcePort;
  /* 0x0008 */ struct _NDIS_GFP_TRANSPORT_PORT_WILDCARD_MATCH DestinationPort;
} NDIS_GFP_TRANSPORT_SRC_AND_DEST_PORT_WILDCARD_MATCH, *PNDIS_GFP_TRANSPORT_SRC_AND_DEST_PORT_WILDCARD_MATCH; /* size: 0x0010 */

typedef struct _NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long ProfileId;
  /* 0x000c */ unsigned long HeadersPresent;
  /* 0x0010 */ unsigned __int64 MatchFields;
  /* 0x0018 */ struct _NDIS_GFP_ETHERNET_HEADER_FIELDS EthernetFields;
  /* 0x002c */ union _NDIS_GFP_IP_SRC_AND_DEST_ADDRESS_WILDCARD_MATCH IPSrcAndDestAddress;
  /* 0x005c */ unsigned char Dscp;
  /* 0x005d */ unsigned char IPProtocol;
  union
  {
    union
    {
      struct
      {
        /* 0x0060 */ struct _NDIS_GFP_TRANSPORT_SRC_AND_DEST_PORT_WILDCARD_MATCH UdpSrcAndDestPort;
      } /* size: 0x0010 */ UdpHeader;
      struct
      {
        /* 0x0060 */ struct _NDIS_GFP_TRANSPORT_SRC_AND_DEST_PORT_WILDCARD_MATCH TcpSrcAndDestPort;
        /* 0x0070 */ unsigned char TcpFlags;
        /* 0x0071 */ char __PADDING__[3];
      } /* size: 0x0014 */ TcpHeader;
      struct
      {
        /* 0x0060 */ unsigned char Type;
        /* 0x0061 */ unsigned char Code;
      } /* size: 0x0002 */ IcmpHeader;
      struct
      {
        /* 0x0060 */ unsigned long TenantId;
        /* 0x0064 */ unsigned short GreProtocol;
        /* 0x0066 */ char __PADDING__[2];
      } /* size: 0x0008 */ Encapsulation;
    }; /* size: 0x0014 */
  } /* size: 0x0014 */ TransportOrEncapsulation;
  /* 0x0074 */ long __PADDING__[1];
} NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH, *PNDIS_GFP_HEADER_GROUP_WILDCARD_MATCH; /* size: 0x0078 */

