typedef enum _IOMMU_DMA_DOMAIN_TYPE
{
  DomainTypeTranslate = 0,
  DomainTypePassThrough = 1,
  DomainTypeUnmanaged = 2,
  DomainTypeMax = 3,
} IOMMU_DMA_DOMAIN_TYPE, *PIOMMU_DMA_DOMAIN_TYPE;

