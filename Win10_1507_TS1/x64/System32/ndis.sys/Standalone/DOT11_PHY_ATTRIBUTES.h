typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef enum _DOT11_PHY_TYPE
{
  dot11_phy_type_unknown = 0,
  dot11_phy_type_any = 0,
  dot11_phy_type_fhss = 1,
  dot11_phy_type_dsss = 2,
  dot11_phy_type_irbaseband = 3,
  dot11_phy_type_ofdm = 4,
  dot11_phy_type_hrdsss = 5,
  dot11_phy_type_erp = 6,
  dot11_phy_type_ht = 7,
  dot11_phy_type_vht = 8,
  dot11_phy_type_IHV_start = -2147483648,
  dot11_phy_type_IHV_end = -1,
} DOT11_PHY_TYPE, *PDOT11_PHY_TYPE;

typedef enum _DOT11_TEMP_TYPE
{
  dot11_temp_type_unknown = 0,
  dot11_temp_type_1 = 1,
  dot11_temp_type_2 = 2,
} DOT11_TEMP_TYPE, *PDOT11_TEMP_TYPE;

typedef enum _DOT11_DIVERSITY_SUPPORT
{
  dot11_diversity_support_unknown = 0,
  dot11_diversity_support_fixedlist = 1,
  dot11_diversity_support_notsupported = 2,
  dot11_diversity_support_dynamic = 3,
} DOT11_DIVERSITY_SUPPORT, *PDOT11_DIVERSITY_SUPPORT;

struct DOT11_HRDSSS_PHY_ATTRIBUTES
{
  /* 0x0000 */ unsigned char bShortPreambleOptionImplemented;
  /* 0x0001 */ unsigned char bPBCCOptionImplemented;
  /* 0x0002 */ unsigned char bChannelAgilityPresent;
  /* 0x0004 */ unsigned long uHRCCAModeSupported;
}; /* size: 0x0008 */

struct DOT11_OFDM_PHY_ATTRIBUTES
{
  /* 0x0000 */ unsigned long uFrequencyBandsSupported;
}; /* size: 0x0004 */

struct DOT11_ERP_PHY_ATTRIBUTES
{
  /* 0x0000 */ struct DOT11_HRDSSS_PHY_ATTRIBUTES HRDSSSAttributes;
  /* 0x0008 */ unsigned char bERPPBCCOptionImplemented;
  /* 0x0009 */ unsigned char bDSSSOFDMOptionImplemented;
  /* 0x000a */ unsigned char bShortSlotTimeOptionImplemented;
  /* 0x000b */ char __PADDING__[1];
}; /* size: 0x000c */

struct DOT11_DATA_RATE_MAPPING_ENTRY
{
  /* 0x0000 */ unsigned char ucDataRateIndex;
  /* 0x0001 */ unsigned char ucDataRateFlag;
  /* 0x0002 */ unsigned short usDataRateValue;
}; /* size: 0x0004 */

typedef struct _DOT11_SUPPORTED_DATA_RATES_VALUE_V2
{
  /* 0x0000 */ unsigned char ucSupportedTxDataRatesValue[255];
  /* 0x00ff */ unsigned char ucSupportedRxDataRatesValue[255];
} DOT11_SUPPORTED_DATA_RATES_VALUE_V2, *PDOT11_SUPPORTED_DATA_RATES_VALUE_V2; /* size: 0x01fe */

struct DOT11_PHY_ATTRIBUTES
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ enum _DOT11_PHY_TYPE PhyType;
  /* 0x0008 */ unsigned char bHardwarePhyState;
  /* 0x0009 */ unsigned char bSoftwarePhyState;
  /* 0x000a */ unsigned char bCFPollable;
  /* 0x000c */ unsigned long uMPDUMaxLength;
  /* 0x0010 */ enum _DOT11_TEMP_TYPE TempType;
  /* 0x0014 */ enum _DOT11_DIVERSITY_SUPPORT DiversitySupport;
  union
  {
    union
    {
      /* 0x0018 */ struct DOT11_HRDSSS_PHY_ATTRIBUTES HRDSSSAttributes;
      /* 0x0018 */ struct DOT11_OFDM_PHY_ATTRIBUTES OFDMAttributes;
      /* 0x0018 */ struct DOT11_ERP_PHY_ATTRIBUTES ERPAttributes;
    }; /* size: 0x000c */
  } /* size: 0x000c */ PhySpecificAttributes;
  /* 0x0024 */ unsigned long uNumberSupportedPowerLevels;
  /* 0x0028 */ unsigned long TxPowerLevels[8];
  /* 0x0048 */ unsigned long uNumDataRateMappingEntries;
  /* 0x004c */ struct DOT11_DATA_RATE_MAPPING_ENTRY DataRateMappingEntries[126];
  /* 0x0244 */ struct _DOT11_SUPPORTED_DATA_RATES_VALUE_V2 SupportedDataRatesValue;
  /* 0x0442 */ char __PADDING__[2];
}; /* size: 0x0444 */

