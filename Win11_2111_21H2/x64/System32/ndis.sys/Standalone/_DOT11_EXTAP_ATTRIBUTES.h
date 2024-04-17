typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _DOT11_EXTAP_ATTRIBUTES
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long uScanSSIDListSize;
  /* 0x0008 */ unsigned long uDesiredSSIDListSize;
  /* 0x000c */ unsigned long uPrivacyExemptionListSize;
  /* 0x0010 */ unsigned long uAssociationTableSize;
  /* 0x0014 */ unsigned long uDefaultKeyTableSize;
  /* 0x0018 */ unsigned long uWEPKeyValueMaxLength;
  /* 0x001c */ unsigned char bStrictlyOrderedServiceClassImplemented;
  /* 0x0020 */ unsigned long uNumSupportedCountryOrRegionStrings;
  /* 0x0028 */ unsigned char* pSupportedCountryOrRegionStrings[3];
  /* 0x0030 */ unsigned long uInfraNumSupportedUcastAlgoPairs;
  /* 0x0038 */ struct DOT11_AUTH_CIPHER_PAIR* pInfraSupportedUcastAlgoPairs;
  /* 0x0040 */ unsigned long uInfraNumSupportedMcastAlgoPairs;
  /* 0x0048 */ struct DOT11_AUTH_CIPHER_PAIR* pInfraSupportedMcastAlgoPairs;
} DOT11_EXTAP_ATTRIBUTES, *PDOT11_EXTAP_ATTRIBUTES; /* size: 0x0050 */

