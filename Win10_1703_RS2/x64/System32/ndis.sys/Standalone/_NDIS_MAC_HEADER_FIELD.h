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

