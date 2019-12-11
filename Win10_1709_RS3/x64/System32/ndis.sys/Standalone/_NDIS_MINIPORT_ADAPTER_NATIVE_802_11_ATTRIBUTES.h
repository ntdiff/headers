typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_MINIPORT_ADAPTER_NATIVE_802_11_ATTRIBUTES
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long OpModeCapability;
  /* 0x0008 */ unsigned long NumOfTXBuffers;
  /* 0x000c */ unsigned long NumOfRXBuffers;
  /* 0x0010 */ unsigned char MultiDomainCapabilityImplemented;
  /* 0x0014 */ unsigned long NumSupportedPhys;
  /* 0x0018 */ struct DOT11_PHY_ATTRIBUTES* SupportedPhyAttributes;
  /* 0x0020 */ struct DOT11_EXTSTA_ATTRIBUTES* ExtSTAAttributes;
  /* 0x0028 */ struct DOT11_VWIFI_ATTRIBUTES* VWiFiAttributes;
  /* 0x0030 */ struct _DOT11_EXTAP_ATTRIBUTES* ExtAPAttributes;
  /* 0x0038 */ struct _DOT11_WFD_ATTRIBUTES* WFDAttributes;
} NDIS_MINIPORT_ADAPTER_NATIVE_802_11_ATTRIBUTES, *PNDIS_MINIPORT_ADAPTER_NATIVE_802_11_ATTRIBUTES; /* size: 0x0040 */

