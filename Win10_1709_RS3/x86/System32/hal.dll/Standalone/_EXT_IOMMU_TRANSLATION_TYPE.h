typedef enum _EXT_IOMMU_TRANSLATION_TYPE
{
  TypePassThrough = 0,
  TypeSafePassThrough = 1,
  TypeBlocked = 2,
  TypeTranslate = 3,
  TypeInvalid = 4,
} EXT_IOMMU_TRANSLATION_TYPE, *PEXT_IOMMU_TRANSLATION_TYPE;

