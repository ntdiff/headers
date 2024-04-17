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

