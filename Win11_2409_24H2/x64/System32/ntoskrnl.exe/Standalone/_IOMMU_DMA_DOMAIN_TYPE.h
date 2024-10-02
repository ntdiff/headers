typedef enum _IOMMU_DMA_DOMAIN_TYPE
{
  DomainTypeTranslate = 0,
  DomainTypePassThrough = 1,
  DomainTypeUnmanaged = 2,
  DomainTypeTranslateS1 = 3,
  DomainTypeMax = 4,
} IOMMU_DMA_DOMAIN_TYPE, *PIOMMU_DMA_DOMAIN_TYPE;

