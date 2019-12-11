typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _DOT11_WFD_ATTRIBUTES
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long uNumConcurrentGORole;
  /* 0x0008 */ unsigned long uNumConcurrentClientRole;
  /* 0x000c */ unsigned long WPSVersionsSupported;
  /* 0x0010 */ unsigned char bServiceDiscoverySupported;
  /* 0x0011 */ unsigned char bClientDiscoverabilitySupported;
  /* 0x0012 */ unsigned char bInfrastructureManagementSupported;
  /* 0x0014 */ unsigned long uMaxSecondaryDeviceTypeListSize;
  /* 0x0018 */ unsigned char DeviceAddress[6];
  /* 0x0020 */ unsigned long uInterfaceAddressListCount;
  /* 0x0024 */ unsigned char* pInterfaceAddressList[6];
  /* 0x0028 */ unsigned long uNumSupportedCountryOrRegionStrings;
  /* 0x002c */ unsigned char* pSupportedCountryOrRegionStrings[3];
  /* 0x0030 */ unsigned long uDiscoveryFilterListSize;
  /* 0x0034 */ unsigned long uGORoleClientTableSize;
} DOT11_WFD_ATTRIBUTES, *PDOT11_WFD_ATTRIBUTES; /* size: 0x0038 */

