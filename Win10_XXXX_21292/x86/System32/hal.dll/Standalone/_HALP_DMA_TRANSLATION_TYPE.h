typedef enum _HALP_DMA_TRANSLATION_TYPE
{
  DmaTranslationTypePassthrough = 0,
  DmaTranslationTypeSafePassthrough = 1,
  DmaTranslationTypeHybridPassthrough = 2,
  DmaTranslationTypeTranslate = 3,
  DmaTranslationTypeMax = 4,
} HALP_DMA_TRANSLATION_TYPE, *PHALP_DMA_TRANSLATION_TYPE;

