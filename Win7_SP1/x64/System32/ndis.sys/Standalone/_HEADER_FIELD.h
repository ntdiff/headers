typedef enum _NDIS_MAC_HEADER_FIELD
{
  NdisMacHeaderFieldUndefined = 0,
  NdisMacHeaderFieldDestinationAddress = 1,
  NdisMacHeaderFieldSourceAddress = 2,
  NdisMacHeaderFieldProtocol = 3,
  NdisMacHeaderFieldVlanId = 4,
  NdisMacHeaderFieldPriority = 5,
  NdisMacHeaderFieldMaximum = 6,
} NDIS_MAC_HEADER_FIELD, *PNDIS_MAC_HEADER_FIELD;

typedef union _HEADER_FIELD
{
  /* 0x0000 */ enum _NDIS_MAC_HEADER_FIELD MacHeaderField;
} HEADER_FIELD, *PHEADER_FIELD; /* size: 0x0004 */

