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
  /* 0x0038 */ unsigned char* pSupportedCountryOrRegionStrings[3];
  /* 0x0040 */ unsigned long uInfraNumSupportedUcastAlgoPairs;
  /* 0x0048 */ struct DOT11_AUTH_CIPHER_PAIR* pInfraSupportedUcastAlgoPairs;
  /* 0x0050 */ unsigned long uInfraNumSupportedMcastAlgoPairs;
  /* 0x0058 */ struct DOT11_AUTH_CIPHER_PAIR* pInfraSupportedMcastAlgoPairs;
  /* 0x0060 */ unsigned long uAdhocNumSupportedUcastAlgoPairs;
  /* 0x0068 */ struct DOT11_AUTH_CIPHER_PAIR* pAdhocSupportedUcastAlgoPairs;
  /* 0x0070 */ unsigned long uAdhocNumSupportedMcastAlgoPairs;
  /* 0x0078 */ struct DOT11_AUTH_CIPHER_PAIR* pAdhocSupportedMcastAlgoPairs;
  /* 0x0080 */ unsigned char bAutoPowerSaveMode;
  /* 0x0084 */ unsigned long uMaxNetworkOffloadListSize;
  /* 0x0088 */ unsigned char bMFPCapable;
  /* 0x008c */ unsigned long uInfraNumSupportedMcastMgmtAlgoPairs;
  /* 0x0090 */ struct DOT11_AUTH_CIPHER_PAIR* pInfraSupportedMcastMgmtAlgoPairs;
  /* 0x0098 */ unsigned char bNeighborReportSupported;
  /* 0x0099 */ unsigned char bAPChannelReportSupported;
  /* 0x009a */ unsigned char bActionFramesSupported;
  /* 0x009b */ unsigned char bANQPQueryOffloadSupported;
  /* 0x009c */ unsigned char bHESSIDConnectionSupported;
  /* 0x009d */ char __PADDING__[3];
}; /* size: 0x00a0 */

