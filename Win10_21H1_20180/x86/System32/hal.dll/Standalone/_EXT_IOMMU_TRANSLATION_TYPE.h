typedef enum _EXT_IOMMU_TRANSLATION_TYPE
{
  ExtTranslationTypePassThrough = 0,
  ExtTranslationTypeBlocked = 1,
  ExtTranslationTypeTranslate = 2,
  ExtTranslationTypeSafePassThrough = 3,
  ExtTranslationTypeHybridPassthrough = 4,
  ExtTranslationTypeInvalid = 5,
} EXT_IOMMU_TRANSLATION_TYPE, *PEXT_IOMMU_TRANSLATION_TYPE;

