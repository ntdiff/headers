typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

struct DOT11_EXTSTA_CAPABILITY
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
}; /* size: 0x002c */

