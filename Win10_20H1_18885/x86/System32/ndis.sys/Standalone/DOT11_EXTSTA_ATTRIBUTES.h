typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

struct DOT11_EXTSTA_ATTRIBUTES
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long uScanSSIDListSize;
  /* 0x0008 */ unsigned long uDesiredBSSIDListSize;
  /* 0x000c */ unsigned long uDesiredSSIDListSize;
  /* 0x0010 */ unsigned long uExcludedMacAddressListSize;
  /* 0x0014 */ unsigned long uPrivacyExemptionListSize;
  /* 0x0018 */ unsigned long uKeyMappingTableSize;
  /* 0x001c */ unsigned long uDefaultKeyTableSize;
  /* 0x0020 */ unsigned long uWEPKeyValueMaxLength;
  /* 0x0024 */ unsigned long uPMKIDCacheSize;
  /* 0x0028 */ unsigned long uMaxNumPerSTADefaultKeyTables;
  /* 0x002c */ unsigned char bStrictlyOrderedServiceClassImplemented;
  /* 0x002d */ unsigned char ucSupportedQoSProtocolFlags;
  /* 0x002e */ unsigned char bSafeModeImplemented;
  /* 0x0030 */ unsigned long uNumSupportedCountryOrRegionStrings;
  /* 0x0034 */ unsigned char* pSupportedCountryOrRegionStrings[3];
  /* 0x0038 */ unsigned long uInfraNumSupportedUcastAlgoPairs;
  /* 0x003c */ struct DOT11_AUTH_CIPHER_PAIR* pInfraSupportedUcastAlgoPairs;
  /* 0x0040 */ unsigned long uInfraNumSupportedMcastAlgoPairs;
  /* 0x0044 */ struct DOT11_AUTH_CIPHER_PAIR* pInfraSupportedMcastAlgoPairs;
  /* 0x0048 */ unsigned long uAdhocNumSupportedUcastAlgoPairs;
  /* 0x004c */ struct DOT11_AUTH_CIPHER_PAIR* pAdhocSupportedUcastAlgoPairs;
  /* 0x0050 */ unsigned long uAdhocNumSupportedMcastAlgoPairs;
  /* 0x0054 */ struct DOT11_AUTH_CIPHER_PAIR* pAdhocSupportedMcastAlgoPairs;
  /* 0x0058 */ unsigned char bAutoPowerSaveMode;
  /* 0x005c */ unsigned long uMaxNetworkOffloadListSize;
  /* 0x0060 */ unsigned char bMFPCapable;
  /* 0x0064 */ unsigned long uInfraNumSupportedMcastMgmtAlgoPairs;
  /* 0x0068 */ struct DOT11_AUTH_CIPHER_PAIR* pInfraSupportedMcastMgmtAlgoPairs;
  /* 0x006c */ unsigned char bNeighborReportSupported;
  /* 0x006d */ unsigned char bAPChannelReportSupported;
  /* 0x006e */ unsigned char bActionFramesSupported;
  /* 0x006f */ unsigned char bANQPQueryOffloadSupported;
  /* 0x0070 */ unsigned char bHESSIDConnectionSupported;
  /* 0x0071 */ char __PADDING__[3];
}; /* size: 0x0074 */

