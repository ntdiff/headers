typedef enum _NDIS_MAC_HEADER_FIELD
{
  NdisMacHeaderFieldUndefined = 0,
  NdisMacHeaderFieldDestinationAddress = 1,
  NdisMacHeaderFieldSourceAddress = 2,
  NdisMacHeaderFieldProtocol = 3,
  NdisMacHeaderFieldVlanId = 4,
  NdisMacHeaderFieldPriority = 5,
  NdisMacHeaderFieldPacketType = 6,
  NdisMacHeaderFieldMaximum = 7,
} NDIS_MAC_HEADER_FIELD, *PNDIS_MAC_HEADER_FIELD;

typedef enum _NDIS_ARP_HEADER_FIELD
{
  NdisARPHeaderFieldUndefined = 0,
  NdisARPHeaderFieldOperation = 1,
  NdisARPHeaderFieldSPA = 2,
  NdisARPHeaderFieldTPA = 3,
  NdisARPHeaderFieldMaximum = 4,
} NDIS_ARP_HEADER_FIELD, *PNDIS_ARP_HEADER_FIELD;

typedef enum _NDIS_IPV4_HEADER_FIELD
{
  NdisIPv4HeaderFieldUndefined = 0,
  NdisIPv4HeaderFieldProtocol = 1,
  NdisIPv4HeaderFieldMaximum = 2,
} NDIS_IPV4_HEADER_FIELD, *PNDIS_IPV4_HEADER_FIELD;

typedef enum _NDIS_IPV6_HEADER_FIELD
{
  NdisIPv6HeaderFieldUndefined = 0,
  NdisIPv6HeaderFieldProtocol = 1,
  NdisIPv6HeaderFieldMaximum = 2,
} NDIS_IPV6_HEADER_FIELD, *PNDIS_IPV6_HEADER_FIELD;

typedef enum _NDIS_UDP_HEADER_FIELD
{
  NdisUdpHeaderFieldUndefined = 0,
  NdisUdpHeaderFieldDestinationPort = 1,
  NdisUdpHeaderFieldMaximum = 2,
} NDIS_UDP_HEADER_FIELD, *PNDIS_UDP_HEADER_FIELD;

typedef union _HEADER_FIELD
{
  union
  {
    /* 0x0000 */ enum _NDIS_MAC_HEADER_FIELD MacHeaderField;
    /* 0x0000 */ enum _NDIS_ARP_HEADER_FIELD ArpHeaderField;
    /* 0x0000 */ enum _NDIS_IPV4_HEADER_FIELD IPv4HeaderField;
    /* 0x0000 */ enum _NDIS_IPV6_HEADER_FIELD IPv6HeaderField;
    /* 0x0000 */ enum _NDIS_UDP_HEADER_FIELD UdpHeaderField;
  }; /* size: 0x0004 */
} HEADER_FIELD, *PHEADER_FIELD; /* size: 0x0004 */

