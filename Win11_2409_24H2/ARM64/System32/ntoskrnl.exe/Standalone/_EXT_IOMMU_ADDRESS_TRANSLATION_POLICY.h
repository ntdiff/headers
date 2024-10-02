typedef enum _EXT_IOMMU_ADDRESS_TRANSLATION_POLICY
{
  ExtIommuAddressTranslationPolicyDisable = 0,
  ExtIommuAddressTranslationPolicyEnableDefaultBypass = 1,
  ExtIommuAddressTranslationPolicyEnableDefaultBlock = 2,
  ExtIommuAddressTranslationPolicyEnableDefaultTranslate = 3,
} EXT_IOMMU_ADDRESS_TRANSLATION_POLICY, *PEXT_IOMMU_ADDRESS_TRANSLATION_POLICY;

