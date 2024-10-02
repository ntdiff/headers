typedef enum _EXT_IOMMU_ADDRESS_TRANSLATION_POLICY
{
  ExtIommuAddressTranslationPolicyDisable = 0,
  ExtIommuAddressTranslationPolicyEnableDefaultBypass = 1,
  ExtIommuAddressTranslationPolicyEnableDefaultBlock = 2,
  ExtIommuAddressTranslationPolicyEnableDefaultTranslate = 3,
} EXT_IOMMU_ADDRESS_TRANSLATION_POLICY, *PEXT_IOMMU_ADDRESS_TRANSLATION_POLICY;

typedef enum _EXT_IOMMU_INTERRUPT_REMAPPING_POLICY
{
  ExtIommuInterruptRemappingPolicyDisable = 0,
  ExtIommuInterruptRemappingPolicyEnableLoose = 1,
  ExtIommuInterruptRemappingPolicyEnableStrict = 2,
} EXT_IOMMU_INTERRUPT_REMAPPING_POLICY, *PEXT_IOMMU_INTERRUPT_REMAPPING_POLICY;

typedef struct _EXT_IOMMU_SETTINGS
{
  struct
  {
    /* 0x0000 */ unsigned __int64 BroadcastTlbMaintenance : 1; /* bit position: 0 */
  } /* size: 0x0008 */ EnabledCapabilities;
  /* 0x0008 */ enum _EXT_IOMMU_ADDRESS_TRANSLATION_POLICY TranslationPolicy;
  /* 0x000c */ enum _EXT_IOMMU_INTERRUPT_REMAPPING_POLICY RemappingPolicy;
  /* 0x0010 */ unsigned long RemappingTableEntries;
  /* 0x0018 */ struct _EXT_IOMMU_DOMAIN* TranslateDomain;
  /* 0x0020 */ unsigned char DefaultFaultReportingEnabled;
  /* 0x0021 */ unsigned char SmrMask;
  /* 0x0022 */ unsigned char DefaultMpamEnabled;
  /* 0x0024 */ unsigned short MpamPartId;
  /* 0x0026 */ unsigned char MpamPmg;
  /* 0x0027 */ char __PADDING__[1];
} EXT_IOMMU_SETTINGS, *PEXT_IOMMU_SETTINGS; /* size: 0x0028 */

