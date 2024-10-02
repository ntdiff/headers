typedef enum _IOMMU_PASID_SETTING
{
  PasidSettingPreserve = 0,
  PasidSettingEnableAll = 1,
  PasidSettingEnablePasidOnly = 2,
  PasidSettingEnableDefaultOnly = 3,
  PasidSettingDisable = 4,
  PasidSettingMax = 5,
} IOMMU_PASID_SETTING, *PIOMMU_PASID_SETTING;

